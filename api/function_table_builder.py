import json

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

    #Declare Variant Types
    variants = ["Bool",
                "Int",
                "Real",
                "String",
                "Vector2",
                "Rect2",
                "Vector3",
                "Transform2d",
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
                "PoolColorArray"]

    #TODO create a wrapper class for Variants because they aren't in the api.json
    out += [
        "class Variant{",
        "private: uint32_t objectID;",
        "};"]
    for variant in variants:
        out += ["class %s: public Variant{};" % variant]

    # for header_api in api_two:
    #     n = header_api['name']
    #     out += ["class %s;" % n]
    for header_api in api_two:
        header_file_data = [
            "/* THIS FILE IS GENERATED */"
            "",
            "",
            "#include <stdint.h>",
            ""
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
            header_file_data += ["};"]
            with open('../wasgo_headers/%s.h' % n, 'w') as fd:  # to be included on the native side
                fd.write('\n'.join(header_file_data))

    return out


def _build_function_tables(api_one, api_two):

    out = [
        "#include \"wasm_export.h\"",
        "static NativeSymbol native_symbols[] = ",
        "{"
    ]

    def register_core_function_interface(core):
        ret = []
        for api in core['api']:
            # is_return_val = api['return_type']
            # is_arguments = api['arguments']
            arguments = ""
            for i in api['arguments']:
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

if __name__ == "__main__":
    #change file path
    fd1 = open('./gdnative_api.json', 'r')
    fd2 = open('./api.json', 'r')
    api1 = json.load(fd1)
    api1 = []
    api2 = json.load(fd2)
    file_source = [api1, api2]

    # to be imported into the code that gets compile to WASM
    with open('../wasgo_headers/Variant.h', 'w') as fd:
        fd.write('\n'.join(_build_function_interfaces(api1, api2)))

    with open('../include/wasgo_function_table.h', 'w') as fd:#to be included on the native side
        fd.write('\n'.join(_build_function_tables(api1, api2)))
