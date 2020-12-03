
#include "API_Generator.h"
#include "core/os/file_access.h"
#include "stdio.h"
#include "core/io/json.h"

static const char *VariantTypes[] = {
	"Variant",//Same as Nil
	"bool",
	"int",
	"float",
	"String",
	"Vector2",
	"Rect2",
	"Vector3",
	"Transform2D",
	"Plane",
	"Quat",
	"AABB",
	"Basis",
	"Transform",
	"Color",
	"NodePath",
	"RID",
	"Object",
	"Dictionary",
	"Array",
	"PoolByteArray",
	"PoolIntArray",
	"PoolRealArray",
	"PoolStringArray",
	"PoolVector2Array",
	"PoolVector3Array",
	"PoolColorArray",
	"VariantMax"
};

static const char *ApiType[] = {
	"core",
	"editor",
	"none"
};

String remove_leading_underscore(String name){
	if(name.size() > 0 && name.begins_with("_")){
		return name.substr(1);
	}
	return name;
}

String convert_type(String type_str, Variant::Type type_int) {
	if (type_str == "") {
		return VariantTypes[type_int];
	} else {
		return remove_leading_underscore(String(type_str).replace(".", "::"));
	}
}

void WasGoAPIGen::write(char * file_path){
    //Open file
    //Write what we print
    //Close File
	Error err;
	FileAccess *file;
	if (FileAccess::exists(file_path)) {
		file = FileAccess::open(file_path, FileAccess::WRITE, &err);
	} else {
		file = FileAccess::create_for_path(file_path);
		file = FileAccess::open(file_path, FileAccess::WRITE, &err);
	}
	if (err != OK) {
		printf("We couldnt read the file: %s\n", file_path);
	}
	file->store_string(JSON::print(api_dict(), "\t"));
	file->flush();
	file->close();
}
Dictionary WasGoAPIGen::api_dict(){
	Dictionary api;
	List<StringName> class_list;
	ClassDB::get_class_list(&class_list);

	for (int i = 0; i < class_list.size(); i++){
		Dictionary class_definition;
		String class_name = remove_leading_underscore(class_list[i]);
		class_definition["name"] = class_name;
		class_definition["base_class"] = ClassDB::get_parent_class(class_list[i]);
		class_definition["api_type"] = ApiType[ClassDB::get_api_type(class_list[i])];
		class_definition["instanciable"] = ClassDB::can_instance(class_list[i]);
		class_definition["is_reference"] = ClassDB::is_parent_class("Reference", class_list[i]);

		bool singleton = false;
		Engine *engine = Engine::get_singleton();
		List<Engine::Singleton> singletons;
		if (engine) {
			engine->get_singletons(&singletons);
			for (int j = 0; j < singletons.size(); j++) {
				if (class_name == singletons[j].name) {
					singleton = true;
					break;
				}
			}
		}
		class_definition["singleton"] = singleton;

		List<MethodInfo> method_definitions;
		ClassDB::get_method_list(class_list[i], &method_definitions, true);
		Dictionary methods;
		for (int j = 0; j < method_definitions.size(); j++) {
			// methods[j] = Dictionary(method_definitions[j]);
			MethodInfo method_definition = method_definitions[j];
			Dictionary method;

			if(method_definition.name.size() > 0 && method_definition.name[0] == '_'){
				//by convention protected methods start with an underscore
				continue;
			}
			
			method["name"] = method_definition.name;
			method["is_normal"] = (method_definition.flags & MethodFlags::METHOD_FLAG_NORMAL);
			method["is_editor"] = (method_definition.flags & MethodFlags::METHOD_FLAG_EDITOR);
			method["is_noscript"] = (method_definition.flags & MethodFlags::METHOD_FLAG_NOSCRIPT);
			method["is_const"] = (method_definition.flags & MethodFlags::METHOD_FLAG_CONST);
			method["is_reverse"] = (method_definition.flags & MethodFlags::METHOD_FLAG_REVERSE);
			method["is_virtual"] = (method_definition.flags & MethodFlags::METHOD_FLAG_VIRTUAL);
			method["is_from_script"] = (method_definition.flags & MethodFlags::METHOD_FLAG_FROM_SCRIPT);
			method["has_vararg"] = (method_definition.flags & MethodFlags::METHOD_FLAG_VARARG);
			if (method_definition.return_val == PropertyInfo()) {
				method["return_type"] == "void";//Doesn't catch when they return a variant
			} else {
				method["return_type"] = convert_type(method_definition.return_val.class_name, method_definition.return_val.type);
			}
			Dictionary arguments;
			for (int k = 0; k < method_definition.arguments.size(); k++){
				PropertyInfo arg = method_definition.arguments[k];
				Dictionary argument;
				argument["name"] = arg.name;
				argument["type"] = convert_type(arg.class_name, arg.type);
				if (method_definition.default_arguments.size() + k >= method_definition.arguments.size()) {
					argument["has_default_value"] = true;
					argument["default_value"] = method_definition.default_arguments[k - (method_definition.arguments.size() - method_definition.default_arguments.size())];
				} else {
					argument["has_default_value"] = false;
					argument["default_value"] = "";
				}
				arguments[k] = argument;
			}
			method["arguments"] = arguments;
			methods[method_definition.name] = method;
		}
		class_definition["methods"] = methods;

		List<StringName> enum_list;
		ClassDB::get_enum_list(class_list[i], &enum_list, true);
		Dictionary enums;
		for (int j = 0; j < enum_list.size(); j++) {
			List<StringName> constant_list;
			ClassDB::get_enum_constants(class_list[i], enum_list[j], &constant_list, true);
			Dictionary constants;
			for (int k = 0; k < constant_list.size(); k++){
				constants[k] = constant_list[k];
			}
			enums[enum_list[j]] = constants;
		}
		class_definition["enums"] = enums;

		List<String> constant_list;
		Dictionary constants;
		ClassDB::get_integer_constant_list(class_list[i], &constant_list, true);
		for (int j = 0; j < constant_list.size(); j++){
			if (ClassDB::get_integer_constant_enum(class_list[i], constant_list[j], true) == "") {
				constants[constant_list[j]] = ClassDB::get_integer_constant(class_list[i], constant_list[j]);
			}
		}
		class_definition["constants"] = constants;
		api[class_name] = class_definition;
	}

	return api;
}