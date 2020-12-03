import json
from pathlib import Path

#Declare Variant Types
wasm_variants = [
    "Bool",
    "Int",
    "Real",
    "String",
    "string",
    "Vector2",
    "Rect2",
    "Vector3",
    "Transform2d",
    "Transform2D",  # account for inconsistencies in the api.json
    "Plane",
    "Quat",
    "AABB",
    "Basis",
    "Transform",
    "Color",
    "NodePath",
    "RID",
]
wasm_variants_string = [
    "String",
    "string",
    "NodePath",
]
variants = [
    #         "Bool",
    #         "Int",
    #         "Real",
            # "String",
            # "string",
            # "Vector2",
            # "Rect2",
            # "Vector3",
            # "Transform2d",
            # "Transform2D",#account for inconsistencies in the api.json
            # "Plane",
            # "Quat",
            # "AABB",
            # "Basis",
            # "Transform",
            # "Color",
            # "NodePath",
            # "RID",
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
# def _spaced(e):
#     return e if e[-1] == "*" else e + " "

# # step1 Declare the function interface in WASM app
# def _build_function_interfaces(api_one, api_two):
#     out = [
#         "/* THIS FILE IS GENERATED */"
#         "",
#         "",
#         # "#include <stdint.h>",
#         ""
#     ]

#     # generate interface based on api.json and gdnative_api.json file
#     # core is dict & extensions is list
#     def generate_core_function_interface(core):

#         ret = []
#         for api in core['api']:
#             args = ', '.join(['%s%s' % (_spaced(t), name)
#                                 for t, name in api['arguments']])
#             ret.append('%s %s(%s);' %
#                         (_spaced(api['return_type']), api['name'], args))

#         return ret

#     def generate_extensions_function_interface(extension):

#         ret = []
#         for api in extension['api']:
#             args = ', '.join(['%s%s' % (_spaced(t), name)
#                                 for t, name in api['arguments']])
#             ret.append('%s %s(%s);' %
#                         (_spaced(api['return_type']), api['name'], args))

#         return ret

#     def generate_header_function_interface(name, contents):

#         ret = []
#         for content in contents:
#             args = []
#             if content['arguments']:
#                 for argument in content['arguments']:
#                     argument_type = argument['type']
#                     argument_name = argument['name']
#                     has_default_val = argument['has_default_value']
#                     default_val = argument['default_value'].lower() if argument['default_value'] else '""'
#                     if has_default_val:
#                         args.append('%s %s = %s' % (
#                             argument_type, argument_name, default_val))
#                     else:
#                         args.append('%s %s' %
#                                     (argument_type, argument_name))
#             else:
#                 ret.append('%s %s();' % (
#                     _spaced(content['return_type']), content['name']))

#             ret.append('%s %s(%s);' % (
#                 _spaced(content['return_type']), content['name'], ', '.join(args)))

#         return ret
#     # out += generate_core_function_interface(api_one['core'])

#     # for extension in api_one['extensions']:
#     #     out += generate_extensions_function_interface(extension)



#     #TODO create a wrapper class for Variants because they aren't in the api.json
#     out += [
#         "#ifndef VARIANT_H",
#         "#define VARIANT_H",
#         "class Variant{",
#         "private: uint32_t objectID;",
#         "};"]
#     for variant in variants:
#         out += ["class %s: public Variant{};" % variant,
#                 "#endif"]

#     # for header_api in api_two:
#     #     n = header_api['name']
#     #     out += ["class %s;" % n]
#     for header_api in api_two:
#         header_file_data = [
#             "/* THIS FILE IS GENERATED */"
#             "",
#             "#ifndef %s_H" % header_api["name"].upper(),
#             "#define %s_H" % header_api["name"].upper(),
#             "",
#             # "#include <stdint.h>",
#             "",
#         ]
#         includes = set()
#         for method in header_api['methods']:
#             for args in method["arguments"]:
#                 if args["type"]:
#                     if args["type"] in variant:
#                         includes.add("Variant")
#                     elif (args["type"].startswith("enum") and args["type"][5: args["type"].find("::")] != header_api["name"]):
#                         includes.add(args["type"][5:args["type"].find("::")])
#                     elif (args["type"] != header_api["name"]) and args["type"][0].isupper():
#                         includes.add(args["type"])
#             if method["return_type"]:
#                 if method["return_type"] in variant:
#                     includes.add("Variant")
#                 elif (method["return_type"].startswith("enum") and method["return_type"][5: method["return_type"].find("::")] != header_api["name"]):
#                     includes.add(method["return_type"][5: method["return_type"].find("::")])
#                 elif method["return_type"] != header_api["name"] and method["return_type"][0].isupper():
#                     includes.add(method["return_type"])
#         if header_api["base_class"]:
#             includes.add(header_api["base_class"])
#         for include in includes:
#             header_file_data += ["#include \"%s.h\"" % include]
#         if header_api['methods']:
#             n = header_api['name']
#             if header_api['base_class']:
#                 header_file_data += ["class %s : public %s{" % (n, header_api["base_class"]),
#                         "public: %s();" % (n)]  # Constructor
#             else:
#                 header_file_data += ["class %s{" % n,
#                         "public: %s();" % (n)]  # Constructor

#             for enumSet in header_api['enums']:
#                 header_file_data += ["enum %s{" % enumSet["name"]]
#                 lastEnum = ""
#                 for enumKey, enumValue in enumSet["values"].items():
#                     if (lastEnum):
#                         header_file_data += [lastEnum + ","]
#                     lastEnum = "%s: %s" % (enumKey, enumValue)
#                 header_file_data += ["};"]

#             header_file_data += generate_header_function_interface(
#                 n, header_api['methods'])
#             header_file_data += ["};",
#                 "#endif"
#             ]
#             with open('../wasgo_headers/%s.h' % n, 'w') as fd:  # to be included on the native side
#                 fd.write('\n'.join(header_file_data))

#     return out


# def _build_function_tables(api_one, api_two):

#     out = ["#ifndef WASGO_FUNCTION_TABLE",
#            "#define WASGO_FUNCTION_TABLE",
#         "#include \"wasm_export.h\"",
#            "#include \"src/wasgo_state.h\"",
#     ]

#     def include_directory_recursive(dir):
#         return ["#include \"{0}\"".format(path.relative_to(dir)) for path in Path(dir).rglob('*.h')]

#     out += include_directory_recursive("../../../scene")

#     out += ["static NativeSymbol native_symbols[] = ",
#             "{"
#             ]

#     def define_wrapper_header(class_name, func_name, return_type, argument_types):
#         wrapper = [];
#         arguments = "".join([(", %s arg%i" % arg, index) for index, arg in enumerate(argument_types)])
#         wrapper += [("static void wasgo_%s_%s(WasGoState::WasGoID wasgo_id%s);" % class_name, func_name, arguments)]
#         return wrapper

#     def define_wrapper_cpp(class_name, func_name, return_type, argument_types):
#         wrapper = []
#         arguments = "".join([", {0} arg{1}".format(arg["type"], index) if (arg["type"] == "int" or arg["type"] == "float") else ", WasGoState::WasGoID arg{0}".format(index) for index, arg in enumerate(argument_types)])
#         def resolve_arguments(index, arg):
#             if (arg == "int" or arg == "float"):
#                 return ("arg%i" % index)
#             elif (arg == "bool"):
#                 return ("int(arg%i)" % index)
#             elif (arg in variants):
#                 return "&({0} *)state->lookup_variants(arg{1})".format(arg, index)
#             elif (len(arg) > 1 and arg[0] == "*"):
#                 return "(%s *)state->lookup_object(arg%i)" % arg, index
#             return "&({0} *)state->lookup_object(arg{1})".format(arg, index)

#         argument_vars = ", ".join([resolve_arguments(index, arg["type"]) for index, arg in enumerate(argument_types)])
#         real_return_type = "WasGoState::WasGoID"
#         if (return_type == "int" or return_type == "float" or return_type == "void" or return_type == "bool"):
#             real_return_type = return_type
#         wrapper += ["static {0} wasgo_{1}_{2}(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id{3}){{".format(real_return_type, class_name, func_name, arguments),
#                     "WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);",
#                     "if(state){",
#                     "{0} *caller = ({1} *) state->lookup_object(caller_id);".format(class_name, class_name),
#                     "if(caller){"]
        
#         if return_type == "void":
#             wrapper += ["caller->{0}({1});".format(func_name, argument_vars)]
#         elif return_type == "int" or return_type == "float" or return_type =="bool":
#             wrapper += ["return caller->{0}({1});".format(func_name, argument_vars)]
#         elif return_type[-1] == '*':  # TODO: Handle pointers by making a reference to it
#             if (return_type[:-2] in variants):
#                 wrapper += ["{0} ret_value = caller->{1}({2});".format(return_type, func_name, argument_vars),
#                             "return state->create_variant(&ret_value);"
#                             ]
#             else:
#                 wrapper += ["{0} ret_value = caller->{1}({2});".format(return_type, func_name, argument_vars),
#                             "return state->reference_object(ret_value->get_instance_id());"
#                             ]
#         else:  # We don't want objects returned to disappear until we're done with them. We put them in the heap, we'll clean it up when the wasm calls the deconstructor on its wrapper object that connects to it
#             if (return_type in variants):
#                 wrapper += ["return state->create_variant(caller->{0}({1}));".format(func_name, argument_vars)]
#             else:
#                 wrapper += ["{0} *ret_value = new {0}(caller->{1}({2}));".format(return_type, func_name, argument_vars),
#                             "return state->create_object(ret_value->get_instance_id());"
#                             ]
#         wrapper +=["}",
#                 "}",
#                 "}"]
#         return wrapper

#     def register_core_function_interface(core):
#         ret = []
#         for api in core['api']:
#             # is_return_val = api['return_type']
#             # is_arguments = api['arguments']
#             arguments = ""
#             for i in api['arguments']:
#                     if i['type'] == 'bool':
#                         arguments += 'i'
#                     if i['type'] == 'int':
#                         arguments += 'I'
#                     elif i['type'] == 'float':
#                         arguments += 'f'
#                     else:
#                         arguments += '*~'
#             returns = ""
#             if api['return_type'] == 'int':
#                 returns += 'I'
#             elif api['return_type'] == 'float':
#                 returns += 'f'
#             elif api['return_type'] != 'void':
#                 returns += '*~'
#             ret.append('\tEXPORT_WASM_API_WITH_SIG(\"%s\", "(%s)%s"),' % (
#                 api['name'], arguments, returns))

#         return ret

#     def register_extensions_function_interface(extension):
#         ret = []
#         for api in extension['api']:
#             is_return_val = api['return_type']
#             is_arguments = api['arguments']
#             ret.append('\tEXPORT_WASM_API_WITH_SIG(\"%s\", "(%s)%s"),' % (
#                 api['name'], '' if not is_arguments else '*~', '' if not is_return_val else '*~'))

#         return ret

#     def register_header_function_interface(name, contents):
#         ret = []
#         for content in contents['methods']:
#             # is_return_val = content['return_type']
#             # is_arguments = content['arguments']
#             arguments = ""
#             for i in content['arguments']:
#                     if i['type'] == 'bool':
#                         arguments += 'i'
#                     if i['type'] == 'int':
#                         arguments += 'I'
#                     elif i['type'] == 'float':
#                         arguments += 'f'
#                     else:
#                         arguments += '*~'
#             returns = ""
#             if content['return_type'] == 'int':
#                 returns += 'I'
#             elif content['return_type'] == 'float':
#                 returns += 'f'
#             elif content['return_type'] != 'void':
#                 returns += '*~'
#             ret.append('\tEXPORT_WASM_API_WITH_SIG(\"%s::%s\", "(%s)%s"),' % (
#                 name,content['name'], arguments, returns))

#         return ret

#     # out += register_core_function_interface(api_one['core'])

#     # for extension in api_one['extensions']:
#     #     out += register_extensions_function_interface(extension)

#     for header_api in api_two:
#         n = header_api['name']
#         out += register_header_function_interface(n, header_api)
#     out += ["};", ""]

#     for header_api in api_two:
#         n = header_api['name']
#         for method in header_api['methods']:
#             out += define_wrapper_cpp(n, method["name"], method["return_type"], method["arguments"])

#     out += ["#endif"]
#     return out

# def _export_native_api_to_wasm(files):

#     ret = []
#     api1, api2 = files[0], files[1]

#     ret += _build_function_interfaces(api1, api2)

#     # step2 Define the native API
#     # not sure need to do that in the script now
#     # we can generate definition automatically from AST tree
#     # didn't figure out now
#     # def _build_define_functions(api):
#     #     pass

#     # step3 Register the native APIs
#     # only generate function table here
#     # Todo: the initialization of the runtime and natives registeration

#     ret += _build_function_tables(api1, api2)

#     return '\n'.join(ret)














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

def drop_underscore(name):
    if (name and name[0] == "_"):
        return name[1:];
    else:
        return name

def void_if_null(name):
    if (name == None):
        return "void"
    else:
        return name

def diff_header_names(name):
    unique_headers = {
        "String" : "ustring",
        "Error" : "error_list"
    }
    if name in unique_headers:
        return unique_headers[name]
    else:
        return name

def diff_type_names(name):
    unique_types = {
        "AABB" : "::AABB"
    }
    if name in unique_types:
        return unique_types[name]
    else:
        return drop_underscore(name)

def wrapper_return_types(return_type, id_type = "WasGoState::WasGoID"):
    if (return_type == None):
        return "void"
    elif (return_type.lower() == "bool"):  # bools get converted to 32 bit ints
        return "int"
    # ints and floats stay untouched
    elif (return_type.lower() == "int" or return_type.lower() == "float" or return_type.lower() == "void"):
        return return_type
    elif return_type in wasm_variants:
        return "void"
    elif (return_type[0:5] == "enum."):  # enums become ints
        return "int"
    else:
        return id_type

def wrapper_argument_types(arg_type, id_type = "WasGoState::WasGoID"):
    if (arg_type.lower() == "bool" or arg_type.lower() == "int" or arg_type.lower() == "float"):  #ints and floats stay untouched
        return arg_type
    elif arg_type in wasm_variants:
        return "const uint8_t *"
    elif (arg_type[0:5] == "enum."):  #enums become ints
        return arg_type[5:]
    else:
        return id_type

def wrapper_method_names(class_type, method_name):
    return "_wasgo_{0}_wrapper_{1}".format(class_type, method_name)

def size_from_type(type_name):
    size = 0
    if type_name.lower() == "bool":
        size = 8
    elif type_name.lower() == "int":
        size = 12
    elif type_name == "Real" or type_name.lower() == "float":
        size = 8
    elif type_name == "String":
        size = 256  # TODO: figure out a way to handle strings
    elif type_name == "Vector2":
        size = 12
    elif type_name == "Rect2":
        size = 20
    elif type_name == "Vector3":
        size = 16
    elif type_name == "Transform2D" or type_name =="Transform2d":
        size = 28
    elif type_name == "Plane":
        size = 20
    elif type_name == "Quat":
        size = 20
    elif type_name == "AABB":
        size = 28
    elif type_name == "Basis":
        size = 40
    elif type_name == "Transform":
        size = 52
    elif type_name == "Color":
        size = 20
    elif type_name == "NodePath":
        size = 256 #TODO: Figure out a way to handle strings
    return size


def write_native_wrapper_header(file_path, api_dict):
    def wrap_constructor_destructor(class_name):
        return [
            """
    WasGoState::WasGoID _wasgo_{0}_constructor(){{
        return 0;
    }}
    void _wasgo_{0}_destructor(WasGoState::WasGoID p_wasgo_id){{

    }}
            """.format(class_name)
        ]

    def include_directory_recursive(dir, relative_path):
        return ["#include \"{0}\"".format(path.relative_to(relative_path).as_posix()) for path in Path(dir).rglob('*.h') if path.parent != Path(relative_path) and path.name != "theme_data.h"]

    out = [
        "#ifndef WASGO_NATIVE_WRAPPER_HEADERS",
        "#define WASGO_NATIVE_WRAPPER_HEADERS",
        "#include \"wasm_export.h\"",
        "#include \"wasgo_state.h\"",
        "#include \"core/io/marshalls.h\"",
        "#include \"core/variant.h\"",
    ]

    out += include_directory_recursive("..\\..\\..\\scene", "..\\..\\..\\")

    def cast_args(arg):
        if arg["type"] == "bool" or arg["type"] == "int" or arg["type"] == "float":
            return "{0} {1} = ({0}) p_{1};".format(arg["type"], arg["name"])
        elif arg["type"] in wasm_variants:
            size = size_from_type(arg["type"])
            return "Variant v_{1} = {0}();\n\t\t\tdecode_variant(v_{1}, p_{1}, {2});\n\t\t\tVariant * {1} = &v_{1};".format(arg["type"], arg["name"], size)
        elif arg["type"] in variants:
            return "{0} *{1} = ({0} *)state->lookup_variant(p_{1});".format(arg["type"], arg["name"])
        else:
            return "{0} *{1} = ({0} *) state->lookup_object(p_{1});".format(arg["type"], arg["name"])

    for class_name in [api_class for api_class in api_dict if api_dict[api_class]["is_reference"] == False and api_class in class_whitelist]:
        out += wrap_constructor_destructor(class_name)
        for method in [api_method for api_method in api_dict[class_name]["methods"].values() if not api_method["is_virtual"] and not api_method["is_editor"]]:
            wasgo_args = ["wasm_exec_env_t exec_env", "WasGoState::WasGoID caller_id"]
            if (method["return_type"] in wasm_variants):
                wasgo_args += ["uint8_t * wasgo_ret", "int wasgo_ret_len"]
            for arg in method["arguments"].values():
                wasgo_args += ["{0} p_{1}".format(wrapper_argument_types(arg["type"]), arg["name"])]
                if arg["type"] in wasm_variants:
                    wasgo_args += ["int p_wasgo_buffer_size_{0}".format("wasgo_buffer_size_" + arg["name"])]
            out += ["\n{0} {1}({2}){{".format(wrapper_return_types(method["return_type"]), wrapper_method_names(class_name, method["name"]), ", ".join(wasgo_args)),
                    "\tWasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);",
                    "\tif(state){"
                    ]
            if class_name in variants:
                out += [
                    "\t\t{0} *caller = ({0}*) state->lookup_variant(caller_id);".format(class_name)]
            else:
                out += [
                    "\t\t{0} *caller = ({0} *) state->lookup_object(caller_id);".format(class_name)]

            out += ["\t\tif(caller){",
                    ]

            out += ["\t\t\t{0}".format(cast_args(arg))
                    for arg in method["arguments"].values()]
            arg_list = ["(Variant *)&" + arg["name"] if (arg["type"] == "bool" or arg["type"] == "int" or arg["type"] == "float") or "::" in arg["type"] else "(Variant *)" + arg["name"]
                        for arg in method["arguments"].values()]
            # arg_string = ", ".join( arg_list)
            arg_string = "" 
            if len(arg_list) > 0:
                arg_string = "const Variant* varargs[] = {" + ", ".join(arg_list) + "};"
            else:
                arg_string = "const Variant ** varargs = nullptr;"
            # if (method["return_type"] == "void" or method["return_type"] == None):
            #     out += ["\t\t\tcaller->{0}({1});".format(method["name"], arg_string),
            #             "\t\t\treturn;"
            #             ]
            # elif (wrapper_return_types(method["return_type"]) != "WasGoState::WasGoID"):
            #     out += ["\t\t\treturn ({0}) caller->{1}({2});".format(
            #         wrapper_return_types(method["return_type"]), method["name"], arg_string)]
            # else:
            #     if (method["return_type"] in variants):
            #         out += ["\t\t\treturn state->create_variant(caller->{0}({1}));".format(
            #             method["name"], arg_string)]
            #     elif (method["return_type"] in api_dict and api_dict[method["return_type"]]["is_reference"]):
            #         out += ["\t\t\treturn state->reference_object(caller->{0}({1}));".format(
            #             method["name"], arg_string)]
            #     else:
            #         out += ["\t\t\treturn state->create_object(caller->{0}({1}));".format(
            #             method["name"], arg_string)]
            if (method["return_type"] == "void" or method["return_type"] == None):
                out += ["\t\t\tVariant::CallError error;",
                        "\t\t\t" + arg_string,
                        "\t\t\tVariant wasgo_ret = caller->call((String)\"{0}\", varargs, {1}, error);".format(method["name"], len(arg_list)),
                        "\t\t\tif(error.error != Variant::CallError::CALL_OK){throw \"BAD WASGO CALL\";}",
                        "\t\t}",
                        "\t}",
                        "\treturn;",
                        "}"
                        ]
            elif wrapper_return_types(method["return_type"]) == "void":
                out += [
                    "\t\t\tVariant::CallError error;",
                    "\t\t\t" + arg_string,
                    "\t\t\tVariant wasgo_local_ret = caller->call((String)\"{0}\", varargs, {1}, error);".format(method["name"], len(arg_list)),
                    "\t\t\tError wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);",
                    "\t\t\tif(error.error != Variant::CallError::CALL_OK){throw \"BAD WASGO CALL\";}",
                    "\t\t}",
                    "\t}"
                    "}"
                ]
            elif (wrapper_return_types(method["return_type"]) != "WasGoState::WasGoID"):
                out += ["\t\t\tVariant::CallError error;",
                        "\t\t\t" + arg_string,
                        "\t\t\t{0} wasgo_ret = ({0}) caller->call((String)\"{1}\", varargs, {2}, error);".format(wrapper_return_types(method["return_type"]), method["name"], len(arg_list)),
                        "\t\t\tif(error.error != Variant::CallError::CALL_OK){throw \"BAD WASGO CALL\";}",
                        "\t\t\treturn wasgo_ret;",
                        "\t\t}",
                        "\t}",
                        "\treturn {0}();".format(wrapper_return_types(method["return_type"])),
                        "}"
                        ]
            else:
                out += ["\t\t\tVariant::CallError error;",
                        "\t\t\t" + arg_string,
                        "\t\t\tVariant wasgo_ret = caller->call((String)\"{0}\", varargs, {1}, error);".format(method["name"], len(arg_list)),
                        "\t\t\tif(error.error != Variant::CallError::CALL_OK){throw \"BAD WASGO CALL\";}",
                        "\t\t\treturn state->handle_return_variant(wasgo_ret);",
                        "\t\t}",
                        "\t}",
                        "\treturn {0}();".format(wrapper_return_types(method["return_type"])),
                        "}"
                        ]

            #TODO: reaching here means that either the state wasn't set or the caller couldn't be found. We should throw an error

    out += ["#endif"]

    with open(file_path, 'w') as fd:
        fd.write('\n'.join(out))


def write_function_table(file_path, api_dict):

    out = ["#ifndef WASGO_FUNCTION_TABLE",
           "#define WASGO_FUNCTION_TABLE",
           "#include \"wasm_export.h\"",
           "#include \"wasgo_state.h\"",
           "#include \"wasgo_native_wrappers.h\"",
           "static NativeSymbol native_symbols[] = ",
            "{",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_this_node,\"()i\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_bool,\"(*~)i\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_bool,\"(*~i)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_int,\"(*~)i\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_int,\"(*~I)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_float,\"(*~)f\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_float,\"(*~f)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_string,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_string,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_vector2,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_vector2,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_rect2,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_rect2,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_vector3,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_vector3,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_transform2d,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_transform2d,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_plane,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_plane,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_quat,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_quat,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_basis,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_basis,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_aabb,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_aabb,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_transform,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_transform,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_color,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_color,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_nodepath,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_nodepath,\"(*~*~)\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_get_property_object,\"(*~)i\"),",
            "EXPORT_WASM_API_WITH_SIG(_wasgo_set_property_object,\"(*~i)\"),",
            ]
    def constructor_destructor_wrappers(class_name):
        return ["""
    EXPORT_WASM_API_WITH_SIG(_wasgo_{0}_constructor,\"()i\"),
    EXPORT_WASM_API_WITH_SIG(_wasgo_{0}_destructor,\"(i)\"),
        """.format(class_name)]

    def register_header_function_interface(name, contents):
        ret = []
        for content in contents['methods'].values():
            arguments = "i"
            if(content['return_type'] != "void" and content["return_type"] and wrapper_return_types(content['return_type']) == "void"):
                arguments += "*~"
            for i in content['arguments'].values():
                    if i['type'] == 'bool':
                        arguments += 'i'
                    if wrapper_argument_types(i['type']) == 'int':
                        arguments += 'I'
                    elif i['type'] == 'float':
                        arguments += 'f'
                    elif i["type"] in wasm_variants:
                        arguments += '*~'
            returns = ""
            if wrapper_return_types(content['return_type']) == 'int':
                returns += 'I'
            elif wrapper_return_types(content['return_type']) == 'float':
                returns += 'f'
            elif wrapper_return_types(content['return_type'], "wasgoid") == "wasgoid":
                returns += 'i'
            ret.append('\tEXPORT_WASM_API_WITH_SIG(%s, "(%s)%s"),' % (
                wrapper_method_names(name, content['name']), arguments, returns))
        return ret

    
    for class_api in api_dict:
        if(class_api in class_whitelist):
            out += register_header_function_interface(class_api, api_dict[class_api])
            out += constructor_destructor_wrappers(class_api)

    out += ["};"]

    out += ["#endif"]

    with open(file_path, 'w') as fd:
        fd.write('\n'.join(out))

def write_wasm_wrapper_functions(file_path, api_dict):
    out = [
        "#ifndef WASM_WRAPPERS_H",
        "#define WASM_WRAPPER_H",
        "#include \"Variant.h\"",
        "#include \"wasgo/wasgoid.h\"",
        "extern \"C\" {"
    ]
    def single_wrapper(name, return_type, arguments):
        arg_list = ["{0} p_{1}".format(wrapper_argument_types(arg["type"], "WasGoId"), arg["name"]) for arg in arguments]
        return "{0} {1}({2});".format(wrapper_return_types(return_type, "WasGoId"), name, ", ".join(arg_list))

    for class_name in api_dict:
        for method_name in api_dict[class_name]["methods"]:
            out += [single_wrapper(wrapper_method_names(class_name, method_name), api_dict[class_name]["methods"][method_name]["return_type"], api_dict[class_name]["methods"][method_name]["arguments"].values())]

    out += ["}", "#endif"]

    with open(file_path, 'w') as fd:
        fd.write('\n'.join(out))


def write_wasm_class_headers(file_path, api_dict):
    def generate_header_function_interface(name, contents):
        ret = []
        for content in contents.values():
            args = []
            if content['arguments']:
                for argument in content['arguments'].values():
                    argument_type = argument['type']
                    argument_name = argument['name']
                    has_default_val = argument['has_default_value']
                    default_val = str(argument['default_value']).lower() if argument['default_value'] != None else '""'
                    if has_default_val:
                        if ("," in default_val):
                            args.append('{0} p_{1} = {0}({2})'.format(
                                drop_underscore(void_if_null(argument_type)), argument_name, default_val))
                        else:
                            args.append('{0} p_{1} = ({0}) {2}'.format(
                                drop_underscore(void_if_null(argument_type)), argument_name, default_val))
                    else:
                        args.append('%s p_%s' % (drop_underscore(void_if_null(argument_type)), argument_name))
            ret.append('%s %s(%s);' % (
                void_if_null(content['return_type']), content['name'], ', '.join(args)))

        return ret

    def single_wrapper(name, return_type, arguments):
        arg_list = []
        for arg in arguments:
            arg_type = wrapper_argument_types(arg["type"], "WasGoId")
            arg_list += ["{0} p_{1}".format(arg_type, arg["name"])]
            if "uint8_t" in arg_type:
                arg_list += ["int p_{0}_wasgo_buffer_size".format(arg["name"])]
        if return_type in wasm_variants:
            arg_list = ["uint8_t * wasgo_ret", "int wasgo_ret_size"] + arg_list
        return "{0} {1}({2});".format(wrapper_return_types(return_type, "WasGoId"), name, ", ".join(["WasGoId wasgo_id"] + arg_list))
    
    def constructor_and_destructor(class_name):
        out = [
            """
protected:
{0}(WasGoId p_wasgo_id);
public:
{0}();
~{0}();
            """.format(class_name)
        ]
        return out

    def write_wasm_class(file_path, class_dict):
        header_file_data = [
        "/* THIS FILE IS GENERATED */"
        "",
            "#ifndef %s_H" % drop_underscore(class_dict["name"]).upper(),
            "#define %s_H" % drop_underscore(class_dict["name"]).upper(),
            "",
            # "#include \"stdint.h\"",
            "#include \"wasgo\wasgo.h\"",
            "",
        ]
        includes = set()
        n = drop_underscore(class_dict['name'])

        #TODO review this weird exception
        if (n == "Object"):
            includes.add("Variant")

        for method in class_dict['methods'].values():
            for args in method["arguments"].values():
                if args["type"]:
                    if args["type"] in variants:
                        includes.add("Variant")
                    elif ("::" in args["type"]):
                        if (args["type"][0: args["type"].find("::")] != drop_underscore(class_dict["name"])):
                            includes.add(args["type"][0:args["type"].find("::")])
                    elif (args["type"] != class_dict["name"]) and args["type"][0].isupper():
                        includes.add(args["type"])
            if method["return_type"]:
                if method["return_type"] in variants:
                    includes.add("Variant")
                elif ("::" in method["return_type"]):
                    if (method["return_type"][0: method["return_type"].find("::")] != drop_underscore(class_dict["name"])):
                        includes.add(method["return_type"][0: method["return_type"].find("::")])
                elif method["return_type"] != class_dict["name"] and method["return_type"][0].isupper():
                    includes.add(method["return_type"])
        if class_dict["base_class"]:
            includes.add(class_dict["base_class"])
        for include in includes:
            header_file_data += ["#include \"%s.h\"" % diff_header_names(include)]
        if class_dict['base_class']:
            header_file_data += ["class %s : public %s{" % (n, drop_underscore(class_dict["base_class"]))]
        elif (n == "Object"):
            header_file_data += ["class %s : public %s{" % (n, "Variant")]
        else:
            header_file_data += ["class %s{" % n]
        
        header_file_data += ["public:"]

        for enum_name in class_dict['enums']:
            header_file_data += ["enum %s{" % enum_name]
            header_file_data += [",\n".join(class_dict['enums'][enum_name].values())]
            # lastEnum = ""
            # for enumKey, enumValue in class_dict['enums'][enum_name].items():
            #     if (lastEnum):
            #         header_file_data += [lastEnum + ","]
            #     lastEnum = "%s: %s" % (enumValue, enumKey)
            header_file_data += ["};"]

        header_file_data += generate_header_function_interface(
            n, class_dict['methods'])

        if (class_dict["instanciable"] and not class_dict["singleton"]):
            header_file_data += constructor_and_destructor(n)

        header_file_data += ["};"]
        
        header_file_data += ["\n\n//Wrapper Functions",
        "extern \"C\"{"
        ]
        header_file_data += [single_wrapper(wrapper_method_names(n, method_name), api_dict[class_name]["methods"][method_name]["return_type"], api_dict[class_dict["name"]]["methods"][method_name]["arguments"].values()) for method_name in class_dict["methods"]]
        header_file_data += [
            """
    //constructor and destructor wrappers
    WasGoId _wasgo_{0}_constructor();
    void _wasgo_{0}_destructor(WasGoId p_wasgo_id);
            """.format(n)
        ]
        header_file_data += ["}",
                                "#endif"
                                ]
        with open(file_path, 'w') as fd:  # to be included on the native side
            fd.write('\n'.join(header_file_data))
        
    for class_name in api_dict:
        # if class_name in class_whitelist:
            write_wasm_class(file_path + "/" + class_name + ".h", api_dict[class_name])


def write_wasm_classes(file_path, api_dict):
    def arg_string(arguments):
        args = []
        for argument in arguments:
            argument_type = argument['type']
            argument_name = argument['name']
            has_default_val = argument['has_default_value']
            default_val = str(argument['default_value']).lower() if argument['default_value'] != None else '""'
            if has_default_val:
                if ("," in default_val):
                    args.append('{0} p_{1} = {0}({2})'.format(diff_type_names(
                        void_if_null(argument_type)), argument_name, str(default_val).lower()))
                else:
                    args.append('{0} p_{1} = ({0}) {2}'.format(diff_type_names(void_if_null(argument_type)), argument_name, str(default_val).lower()))
            else:
                args.append('%s p_%s' % (diff_type_names(void_if_null(argument_type)), argument_name))
        return ", ".join(args)

    def converted_arg_string(arg_type, arg_name):
        if (arg_type == "bool" or arg_type == "int" or arg_type == "float"):
            return "p_" + arg_name
        elif arg_type in wasm_variants:
            return "wasgo_buffer_{0}, wasgo_size_{0}".format(arg_name)
        else:
            return "p_{0}._get_wasgo_id()".format(arg_name)
    def wrapper_body(class_name, method_name, return_type, arguments):
        out = ["{0} {1}::{2}({3}){{".format(diff_type_names(return_type), class_name, method_name, arg_string(arguments))]
        for arg in arguments:
            if arg["type"] in wasm_variants:
                out += [
                    """
    Variant wasgo_var_{0} = p_{0};
    uint8_t wasgo_buffer_{0}[{1}];
    int wasgo_size_{0} = {1};
    encode_variant(wasgo_var_{0}, wasgo_buffer_{0}, wasgo_size_{0});
    """.format(arg["name"], size_from_type(arg["type"]), wrapper_method_names(class_name, method_name), ", ".join(["wasgo_id"] + [converted_arg_string(arg["type"], arg["name"]) for arg in arguments]))
                ]
        if (return_type == "void"):
            out += ["\t{0}({1});".format(wrapper_method_names(class_name, method_name), ", ".join(["wasgo_id"] + [converted_arg_string(arg["type"], arg["name"]) for arg in arguments]))]
        elif (return_type == "bool" or return_type == "int" or return_type == "float"):
            out += ["\treturn ({0}) {1}({2});".format(diff_type_names(return_type), wrapper_method_names(class_name, method_name), ", ".join(["wasgo_id"] + [converted_arg_string(arg["type"], arg["name"]) for arg in arguments]))]
    #     elif (return_type in wasm_variants_string):
    #         out += [
    #             """
    # char * wasgo_ret = nullptr;
    # {0}({1});
    # String wasgo_ret_string = String(wasgo_ret);
    # return wasgo_ret_string;
    #             """.format(wrapper_method_names(class_name, method_name), ", ".join(["wasgo_id", "wasgo_ret",] + [converted_arg_string(arg["type"], arg["name"]) for arg in arguments]))
    #         ]
        elif (return_type in wasm_variants):
            out += [
                """
    Variant wasgo_ret;
    int wasgo_ret_buffer_size = {0};
    uint8_t wasgo_ret_buffer[{0}];
    {2}({3});
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return ({1}) wasgo_ret;
    """.format(size_from_type(return_type), return_type, wrapper_method_names(class_name, method_name), ", ".join(["wasgo_id", "wasgo_ret_buffer", "wasgo_ret_buffer_size"] + [converted_arg_string(arg["type"], arg["name"]) for arg in arguments]))
            ]
        else:
            out += [
                "\treturn {0}({1}({2}));".format(diff_type_names(return_type), wrapper_method_names(class_name, method_name), ", ".join(["wasgo_id"] + [converted_arg_string(arg["type"], arg["name"]) for arg in arguments]))
                ]

        out += ["}"]
        return out

    def constructor_and_destructor(class_name, base_class):
        out = [
            """
{0}::{0}(WasGoId p_wasgo_id) : {1}(p_wasgo_id){{
}}
{0}::{0}(){{
    wasgo_id = _wasgo_{0}_constructor();
}}
{0}::~{0}(){{
    _wasgo_{0}_destructor(wasgo_id);
}}""".format(class_name, base_class)
        ]
        return out

    def write_wasm_class(file_path, class_dict):
        if(class_dict["methods"] or (class_dict["instanciable"] and not class_dict["singleton"])):
            n = diff_type_names(class_dict["name"])
            out = [
                "/* THIS FILE IS GENERATED */",
                "#include \"marshalls.h\""
            ]
            out += ["#include \"{0}.h\"".format(n)]
            for methods in class_dict["methods"].values():
                
                out += wrapper_body(n, methods['name'], void_if_null(methods['return_type']), methods['arguments'].values())
            
            if (class_dict["instanciable"] and not class_dict["singleton"]):
                out += constructor_and_destructor(n, diff_type_names(class_dict["base_class"]))
            with open(file_path, 'w') as fd:  # to be included on the native side
                fd.write('\n'.join(out))

    for class_name in api_dict:
        # if class_name in class_whitelist:
            write_wasm_class(file_path + "/" + class_name + ".cpp", api_dict[class_name])

# def write_wasgo_class(file_path):
#     out = [
#         """
# #ifndef WASGO_H
# #define WASGO_H

# #include "Variant.h"
# #include "wasgo/wasgoid.h"

# extern "C" {
# WasGoId _wasgo_get_property(const char *property);
# void _wasgo_set_property(const char *property, WasGoId);
# }

# class WasGo {
# public:
# 	typedef uint32_t WasGoId;

# 	static Variant get_property(const char * property) {
#         return Variant::from_id(_wasgo_get_property(property));
# 	};
# 	static void set_property(const char *property, Variant value) {
# 		_wasgo_set_property(property, value.wasgo_id);
# 	};
# };

# #endif
#         """
#     ]
#     with open(file_path, 'w') as fd:
#         fd.write('\n'.join(out))


#TODO get rid of the whitelist. Right now it's helping me ignore errors tho lol
# class_whitelist = [
#     "AudioStreamPlayer",
#     "AnimationPlayer",
#     "AnimationTreePlayer",
#     "AnimationTree",
#     "WorldEnvironment",
#     "Node",
#     "VisibilityNotifier",
#     "Light",
#     "DirectionalLight",
#     "OmniLight",
#     "SpotLight",
#     "Particles",
#     "MeshInstance",
#     "SoftBody",
#     "Camera",
#     "Spatial",
#     "CollisionObject",
#     "CollisionPolygon",
#     "CollisionShape",
#     "Area",
#     "PhysicsBody",
#     "KinematicBody",
#     "PhysicalBone",
#     "RigidBody",
#     "StaticBody",
#     "BoneAttachment",
#     "AudioStreamPlayer3D",
#     "Position3D",
#     "Skeleton",
#     "RayCast",
#     "Joint"
# ]

class_whitelist = [
    "Spatial",
    "Node",
    "SceneTree",
    "SpatialVelocityTracker"
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
    wasgo_file = open('./wasgo_api.json', 'r')
    wasgo_api = json.load(wasgo_file)
    wasgo_file.close()

    wasgo_api = [api for api in wasgo_api.values() if api["singleton"] == False and api["api_type"] == "core" and api["base_class"] != "Script"]
    api_dict = list_to_name_dict(wasgo_api)
    #Step 1 make the native side function wrappers
    write_native_wrapper_header("../include/wasgo_native_wrappers.h", api_dict)
    #Step 2 put the native wrappers in the function table
    write_function_table("../include/wasgo_function_table.h", api_dict)
    #Step 3 declare all classes and methods for the wasm side which will call the wrappers
    write_wasm_class_headers("../wasgo_headers", api_dict)
    #Step 4 define all classes
    write_wasm_classes("../wasgo_headers", api_dict)
    # #Step 5 create a Wasgo Class that holds properties and the wasgo ID type
    # write_wasgo_class("../wasgo_headers/wasgo/wasgo.h")
