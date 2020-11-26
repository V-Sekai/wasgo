import json
from pathlib import Path

#Declare Variant Types
variants = ["Bool",
            "Int",
            "Real",
            "String",
            "string",
            "Vector2",
            "Rect2",
            "Vector3",
            "Transform2d",
            "Transform2D",#account for inconsistencies in the api.json
            "Plane",
            "Quat",
            "AABB",
            "Basis",
            "Transform",
            "Color",
            "NodePath",
            "RID",
            # "Object",
            "Dictionary",
            "Array",
            "PoolByteArray",
            "PoolIntArray",
            "PoolRealArray",
            "PoolStringArray",
            "PoolVector2Array",
            "PoolVector3Array",
            "PoolColorArray",
            "Variant"]

# pointer
def _spaced(e):
    return e if e[-1] == "*" else e + " "

# step1 Declare the function interface in WASM app
def _build_function_interfaces(api_one, api_two):
    out = [
        "/* THIS FILE IS GENERATED */"
        "",
        "",
        "#include <stdint.h>",
        ""
    ]

    # generate interface based on api.json and gdnative_api.json file
    # core is dict & extensions is list
    def generate_core_function_interface(core):

        ret = []
        for api in core['api']:
            args = ', '.join(['%s%s' % (_spaced(t), name)
                                for t, name in api['arguments']])
            ret.append('%s %s(%s);' %
                        (_spaced(api['return_type']), api['name'], args))

        return ret

    def generate_extensions_function_interface(extension):

        ret = []
        for api in extension['api']:
            args = ', '.join(['%s%s' % (_spaced(t), name)
                                for t, name in api['arguments']])
            ret.append('%s %s(%s);' %
                        (_spaced(api['return_type']), api['name'], args))

        return ret

    def generate_header_function_interface(name, contents):

        ret = []
        for content in contents:
            args = []
            if content['arguments']:
                for argument in content['arguments']:
                    argument_type = argument['type']
                    argument_name = argument['name']
                    has_default_val = argument['has_default_value']
                    default_val = argument['default_value'].lower() if argument['default_value'] else '""'
                    if has_default_val:
                        args.append('%s%s = %s' % (
                            _spaced(argument_type), argument_name, default_val))
                    else:
                        args.append('%s%s' %
                                    (_spaced(argument_type), argument_name))
            else:
                ret.append('%s %s();' % (
                    _spaced(content['return_type']), content['name']))

            ret.append('%s %s(%s);' % (
                _spaced(content['return_type']), content['name'], ', '.join(args)))

        return ret
    # out += generate_core_function_interface(api_one['core'])

    # for extension in api_one['extensions']:
    #     out += generate_extensions_function_interface(extension)



    #TODO create a wrapper class for Variants because they aren't in the api.json
    out += [
        "#ifndef VARIANT_H",
        "#define VARIANT_H",
        "class Variant{",
        "private: uint32_t objectID;",
        "};"]
    for variant in variants:
        out += ["class %s: public Variant{};" % variant,
                "#endif"]

    # for header_api in api_two:
    #     n = header_api['name']
    #     out += ["class %s;" % n]
    for header_api in api_two:
        header_file_data = [
            "/* THIS FILE IS GENERATED */"
            "",
            "#ifndef %s_H" % header_api["name"].upper(),
            "#define %s_H" % header_api["name"].upper(),
            "",
            "#include <stdint.h>",
            "",
        ]
        includes = set()
        for method in header_api['methods']:
            for args in method["arguments"]:
                if args["type"]:
                    if args["type"] in variant:
                        includes.add("Variant")
                    elif (args["type"].startswith("enum") and args["type"][5: args["type"].find("::")] != header_api["name"]):
                        includes.add(args["type"][5:args["type"].find("::")])
                    elif (args["type"] != header_api["name"]) and args["type"][0].isupper():
                        includes.add(args["type"])
            if method["return_type"]:
                if method["return_type"] in variant:
                    includes.add("Variant")
                elif (method["return_type"].startswith("enum") and method["return_type"][5: method["return_type"].find("::")] != header_api["name"]):
                    includes.add(method["return_type"][5: method["return_type"].find("::")])
                elif method["return_type"] != header_api["name"] and method["return_type"][0].isupper():
                    includes.add(method["return_type"])
        if header_api["base_class"]:
            includes.add(header_api["base_class"])
        for include in includes:
            header_file_data += ["#include \"%s.h\"" % include]
        if header_api['methods']:
            n = header_api['name']
            if header_api['base_class']:
                header_file_data += ["class %s : public %s{" % (n, header_api["base_class"]),
                        "public: %s();" % (n)]  # Constructor
            else:
                header_file_data += ["class %s{" % n,
                        "public: %s();" % (n)]  # Constructor

            for enumSet in header_api['enums']:
                header_file_data += ["enum %s{" % enumSet["name"]]
                lastEnum = ""
                for enumKey, enumValue in enumSet["values"].items():
                    if (lastEnum):
                        header_file_data += [lastEnum + ","]
                    lastEnum = "%s: %s" % (enumKey, enumValue)
                header_file_data += ["};"]

            header_file_data += generate_header_function_interface(
                n, header_api['methods'])
            header_file_data += ["};",
                "#endif"
            ]
            with open('../wasgo_headers/%s.h' % n, 'w') as fd:  # to be included on the native side
                fd.write('\n'.join(header_file_data))

    return out


def _build_function_tables(api_one, api_two):

    out = ["#ifndef WASGO_FUNCTION_TABLE",
           "#define WASGO_FUNCTION_TABLE",
        "#include \"wasm_export.h\"",
           "#include \"src/wasgo_state.h\"",
    ]

    def include_directory_recursive(dir):
        return ["#include \"{0}\"".format(path.relative_to(dir)) for path in Path(dir).rglob('*.h')]

    out += include_directory_recursive("../../../scene")

    out += ["static NativeSymbol native_symbols[] = ",
            "{"
            ]

    def define_wrapper_header(class_name, func_name, return_type, argument_types):
        wrapper = [];
        arguments = "".join([(", %s arg%i" % arg, index) for index, arg in enumerate(argument_types)])
        wrapper += [("static void wasgo_%s_%s(WasGoState::WasGoID wasgo_id%s);" % class_name, func_name, arguments)]
        return wrapper

    def define_wrapper_cpp(class_name, func_name, return_type, argument_types):
        wrapper = []
        arguments = "".join([", {0} arg{1}".format(arg["type"], index) if (arg["type"] == "int" or arg["type"] == "float") else ", WasGoState::WasGoID arg{0}".format(index) for index, arg in enumerate(argument_types)])
        def resolve_arguments(index, arg):
            if (arg == "int" or arg == "float"):
                return ("arg%i" % index)
            elif (arg == "bool"):
                return ("int(arg%i)" % index)
            elif (arg in variants):
                return "&({0} *)state->lookup_variants(arg{1})".format(arg, index)
            elif (len(arg) > 1 and arg[0] == "*"):
                return "(%s *)state->lookup_object(arg%i)" % arg, index
            return "&({0} *)state->lookup_object(arg{1})".format(arg, index)

        argument_vars = ", ".join([resolve_arguments(index, arg["type"]) for index, arg in enumerate(argument_types)])
        real_return_type = "WasGoState::WasGoID"
        if (return_type == "int" or return_type == "float" or return_type == "void" or return_type == "bool"):
            real_return_type = return_type
        wrapper += ["static {0} wasgo_{1}_{2}(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id{3}){{".format(real_return_type, class_name, func_name, arguments),
                    "WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);",
                    "if(state){",
                    "{0} *caller = ({1} *) state->lookup_object(caller_id);".format(class_name, class_name),
                    "if(caller){"]
        
        if return_type == "void":
            wrapper += ["caller->{0}({1});".format(func_name, argument_vars)]
        elif return_type == "int" or return_type == "float" or return_type =="bool":
            wrapper += ["return caller->{0}({1});".format(func_name, argument_vars)]
        elif return_type[-1] == '*':  # TODO: Handle pointers by making a reference to it
            if (return_type[:-2] in variants):
                wrapper += ["{0} ret_value = caller->{1}({2});".format(return_type, func_name, argument_vars),
                            "return state->create_variant(&ret_value);"
                            ]
            else:
                wrapper += ["{0} ret_value = caller->{1}({2});".format(return_type, func_name, argument_vars),
                            "return state->reference_object(ret_value->get_instance_id());"
                            ]
        else:  # We don't want objects returned to disappear until we're done with them. We put them in the heap, we'll clean it up when the wasm calls the deconstructor on its wrapper object that connects to it
            if (return_type in variants):
                wrapper += ["return state->create_variant(caller->{0}({1}));".format(func_name, argument_vars)]
            else:
                wrapper += ["{0} *ret_value = new {0}(caller->{1}({2}));".format(return_type, func_name, argument_vars),
                            "return state->create_object(ret_value->get_instance_id());"
                            ]
        wrapper +=["}",
                "}",
                "}"]
        return wrapper

    def register_core_function_interface(core):
        ret = []
        for api in core['api']:
            # is_return_val = api['return_type']
            # is_arguments = api['arguments']
            arguments = ""
            for i in api['arguments']:
                    if i['type'] == 'bool':
                        arguments += 'i'
                    if i['type'] == 'int':
                        arguments += 'I'
                    elif i['type'] == 'float':
                        arguments += 'f'
                    else:
                        arguments += '*~'
            returns = ""
            if api['return_type'] == 'int':
                returns += 'I'
            elif api['return_type'] == 'float':
                returns += 'f'
            elif api['return_type'] != 'void':
                returns += '*~'
            ret.append('\tEXPORT_WASM_API_WITH_SIG(\"%s\", "(%s)%s"),' % (
                api['name'], arguments, returns))

        return ret

    def register_extensions_function_interface(extension):
        ret = []
        for api in extension['api']:
            is_return_val = api['return_type']
            is_arguments = api['arguments']
            ret.append('\tEXPORT_WASM_API_WITH_SIG(\"%s\", "(%s)%s"),' % (
                api['name'], '' if not is_arguments else '*~', '' if not is_return_val else '*~'))

        return ret

    def register_header_function_interface(name, contents):
        ret = []
        for content in contents['methods']:
            # is_return_val = content['return_type']
            # is_arguments = content['arguments']
            arguments = ""
            for i in content['arguments']:
                    if i['type'] == 'bool':
                        arguments += 'i'
                    if i['type'] == 'int':
                        arguments += 'I'
                    elif i['type'] == 'float':
                        arguments += 'f'
                    else:
                        arguments += '*~'
            returns = ""
            if content['return_type'] == 'int':
                returns += 'I'
            elif content['return_type'] == 'float':
                returns += 'f'
            elif content['return_type'] != 'void':
                returns += '*~'
            ret.append('\tEXPORT_WASM_API_WITH_SIG(\"%s::%s\", "(%s)%s"),' % (
                name,content['name'], arguments, returns))

        return ret

    # out += register_core_function_interface(api_one['core'])

    # for extension in api_one['extensions']:
    #     out += register_extensions_function_interface(extension)

    for header_api in api_two:
        n = header_api['name']
        out += register_header_function_interface(n, header_api)
    out += ["};", ""]

    for header_api in api_two:
        n = header_api['name']
        for method in header_api['methods']:
            out += define_wrapper_cpp(n, method["name"], method["return_type"], method["arguments"])

    out += ["#endif"]
    return out

def _export_native_api_to_wasm(files):

    ret = []
    api1, api2 = files[0], files[1]

    ret += _build_function_interfaces(api1, api2)

    # step2 Define the native API
    # not sure need to do that in the script now
    # we can generate definition automatically from AST tree
    # didn't figure out now
    # def _build_define_functions(api):
    #     pass

    # step3 Register the native APIs
    # only generate function table here
    # Todo: the initialization of the runtime and natives registeration

    ret += _build_function_tables(api1, api2)

    return '\n'.join(ret)














#****************CLEANUP EFFORT STARTS HERE************************
#Below code is the same as the above but reorganized and with extra bug fixes
#it doesn't call any function from above, but may use constants

def list_to_name_dict(list):
    name_dict = {}
    for item in list:
        name_dict[item["name"]] = item
    return name_dict

def rename_if_enum(name):
    if (name[0:5] == "enum."):
        return name[5:]
    else:
        return name


def wrapper_return_types(return_type):
        if (return_type.lower() == "bool"):  # bools get converted to 32 bit ints
            return "int"
        # ints and floats stay untouched
        elif (return_type.lower() == "int" or return_type.lower() == "float" or return_type.lower() == "void"):
            return return_type
        elif (return_type[0:5] == "enum."):  # enums become ints
            return "int"
        else:
            return "WasGoState::WasGoID"

def wrapper_argument_types(arg_type):
    if (arg_type.lower() == "bool" or arg_type.lower() == "int" or arg_type.lower() == "float"):  #ints and floats stay untouched
        return arg_type
    elif (arg_type[0:5] == "enum."):  #enums become ints
        return arg_type[5:]
    else:
        return "WasGoState::WasGoID"

def wrapper_method_names(class_type, method_name):
    return "_wasgo_{0}_wrapper_{1}".format(class_type, method_name)

def write_native_wrapper_header(file_path, api_dict):

    def include_directory_recursive(dir, relative_path):
        return ["#include \"{0}\"".format(path.relative_to(relative_path)) for path in Path(dir).rglob('*.h')]
    
    out = [
        "#ifndef WASGO_NATIVE_WRAPPER_HEADERS",
        "#define WASGO_NATIVE_WRAPPER_HEADERS",
        "extern \"C\"{",
        "#include \"wasm_export.h\"",
        "#include \"src/wasgo_state.h\"",
    ]

    out += include_directory_recursive("../../../scene", "../../../scene")

    def cast_args(arg):
        if arg["type"] == "bool" or arg["type"] == "int" or arg["type"] == "float":
            return "{0} {1} = ({0}) p_{1};".format(arg["type"], arg["name"])
        elif arg["type"] in variants:
            return "{0} {1} = state->lookup_variant(p_{1});".format(arg["type"], arg["name"])
        else:
            if api_dict[arg["type"]]["is_reference"]:
                return "Ref<{0}> {1} = (state->lookup_object(p_{1}));".format(arg["type"], arg["name"])
            else:
                return "{0} *{1} = ({0} *) state->lookup_object(p_{1});".format(arg["type"], arg["name"])

    for class_name in [api_class for api_class in api_dict if api_dict[api_class]["is_reference"] == False and api_class in class_whitelist]:
        for method in [api_method for api_method in api_dict[class_name]["methods"] if api_method["is_editor"] == False and api_method["is_virtual"] == False]:  #filter out virtul and editor methods
            arg_string = ", ".join(["wasm_exec_env_t exec_env", "WasGoState::WasGoID caller_id"] + ["{0} p_{1}".format(wrapper_argument_types(arg["type"]), arg["name"]) for arg in method["arguments"]])
            out += ["\n{0} {1}({2}){{".format(wrapper_return_types(method["return_type"]), wrapper_method_names(class_name, method["name"]), arg_string),
                    "\tWasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);",
                    "\tif(state){"
            ]
            if class_name in variants:
                out += ["\t\t{0} caller = ({0}) state->lookup_variant(caller_id);".format(class_name)]
            else:
                out += ["\t\t{0} *caller = ({0} *) state->lookup_object(caller_id);".format(class_name)]
            
            out += ["\t\tif(caller){",
            ]

            out += ["\t\t\t{0}".format(cast_args(arg)) for arg in method["arguments"]]
            arg_string = ", ".join([arg["name"] for arg in method["arguments"]])
            if (method["return_type"] == "void"):
                out += ["\t\t\tcaller->{0}({1});".format(method["name"], arg_string),
                        "\t\t\treturn;"
                        ]
            elif (wrapper_return_types(method["return_type"]) != "WasGoState::WasGoID"):
                out += ["\t\t\treturn ({0}) caller->{1}({2});".format(wrapper_return_types(method["return_type"]), method["name"], arg_string)]
            else:
                if (method["return_type"] in variants):
                    out += ["\t\t\treturn state->create_variant(caller->{0}({1}));".format(method["name"], arg_string)]
                elif (method["return_type"] in api_dict and api_dict[method["return_type"]]["is_reference"]):
                    out += ["\t\t\treturn state->reference_object(caller->{0}({1}));".format(method["name"], arg_string)]
                else :
                    out += ["\t\t\treturn state->create_object(caller->{0}({1}));".format(method["name"], arg_string)]
            
            out += ["\t\t}", "\t}", "}"]
            
            #TODO: reaching here means that either the state wasn't set or the caller couldn't be found. We should throw an error

    out += ["}", "#endif"]

    with open(file_path, 'w') as fd:
        fd.write('\n'.join(out))

#TODO get rid of the whitelist. Right now it's helping me ignore errors tho lol
class_whitelist = [
    "AudioStreamPlayer",
    "AnimationPlayer",
    "AnimationTreePlayer",
    "AnimationTree",
    "WorldEnvironment",
    "Node",
    "VisibilityNotifier",
    "Light",
    "DirectionalLight",
    "OmniLight",
    "SpotLight",
    "Particles",
    "MeshInstance",
    "SoftBody",
    "Camera",
    "Spatial",
    "CollisionObject",
    "CollisionPolygon",
    "CollisionShape",
    "Area",
    "PhysicsBody",
    "KinematicBody",
    "PhysicalBone",
    "RigidBody",
    "StaticBody",
    "BoneAttachment",
    "AudioStreamPlayer3D",
    "Position3D",
    "Skeleton",
    "RayCast",
    "Joint"
]


if __name__ == "__main__":
    #change file path
    fd1 = open('./gdnative_api.json', 'r')
    fd2 = open('./api.json', 'r')
    api1 = json.load(fd1)
    fd1.close();
    api1 = []
    api2 = json.load(fd2)
    fd2.close()
    # file_source = [api1, api2]

    # # to be imported into the code that gets compile to WASM
    # with open('../wasgo_headers/Variant.h', 'w') as fd:
    #     fd.write('\n'.join(_build_function_interfaces(api1, api2)))

    # with open('../include/wasgo_function_table.h', 'w') as fd:#to be included on the native side
    #     fd.write('\n'.join(_build_function_tables(api1, api2)))

    #TODO: filter out more classes
    #for now I'm removing all the singletons and editor scripts and reference types
    api2 = [api for api in api2 if api["singleton"] == False and api["api_type"] == "core" and api["base_class"] != "Script"]
    api_dict = list_to_name_dict(api2)
    #Step 1 make the native side function wrappers
    write_native_wrapper_header("../include/wasgo_native_wrappers.h", api_dict)
    #Step 2 put the native wrappers in the function table
    #Step 3 define the wasm wrappers
    #Step 4 define all classes and methods for the wasm side which will call the wrappers
