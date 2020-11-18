import json

# pointer
def _spaced(e):
    return e if e[-1] == "*" else e + " "

def _export_native_api_to_wasm(files):

    ret = []
    api1, api2 = files[0], files[1]

    # step1 Declare the function interface in WASM app
    def _build_function_interfaces(api_one, api_two):
        out = [
            "/* THIS FILE IS GENERATED */"
            "",
            "",
        ]

        # generate interface based on api.json and gdnative_api.json file
        # core is dict & extensions is list
        def generate_core_function_interface(core):

            ret = []
            for api in core['api']:
                args = ', '.join(['%s%s' % (_spaced(t), name) for t, name in api['arguments']])
                ret.append('%s %s(%s);' % (_spaced(api['return_type']), api['name'], args))

            return ret

        def generate_extensions_function_interface(extension):

            ret = []
            for api in extension['api']:
                args = ', '.join(['%s%s' % (_spaced(t), name) for t, name in api['arguments']])
                ret.append('%s %s(%s);' % (_spaced(api['return_type']), api['name'], args))

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
                        default_val = argument['default_value'] if argument['default_value'] else '""'
                        if has_default_val:
                            args.append('%s%s = %s' % (_spaced(argument_type), argument_name, default_val))
                        else:
                            args.append('%s%s' % (_spaced(argument_type), argument_name))
                else:
                    ret.append('%s %s.%s();' % (_spaced(content['return_type']), name, content['name']))

                ret.append('%s %s.%s(%s);' % (_spaced(content['return_type']), name, content['name'], ', '.join(args)))

            return ret
        out += generate_core_function_interface(api_one['core'])

        for extension in api_one['extensions']:
            out += generate_extensions_function_interface(extension)

        for header_api in api_two:
            if header_api['methods']:
                n = header_api['name']
                out += generate_header_function_interface(n, header_api['methods'])

        return out

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
    def _build_function_tables(api_one, api_two):

        out = [
            "static NativeSymbol native_symbols[] = ",
            "{"
        ]


        def register_core_function_interface(core):
            ret = []
            for api in core['api']:
                is_return_val = api['return_type']
                is_arguments = api['arguments']
                ret.append('\tEXPORT_WASM_API_WITH_SIG(%s, "(%s)%s"),' % (
                api['name'], '' if not is_arguments else '*~', '' if not is_return_val else '*~'))

            return ret

        def register_extensions_function_interface(extension):
            ret = []
            for api in extension['api']:
                is_return_val = api['return_type']
                is_arguments = api['arguments']
                ret.append('\tEXPORT_WASM_API_WITH_SIG(%s, "(%s)%s"),' % (
                    api['name'], '' if not is_arguments else '*~', '' if not is_return_val else '*~'))

            return ret


        def register_header_function_interface(name, contents):
            ret = []
            for content in contents['methods']:
                is_return_val = content['return_type']
                is_arguments = content['arguments']
                ret.append('\tEXPORT_WASM_API_WITH_SIG(%s.%s, "(%s)%s"),' % (name, content['name'], '' if not is_arguments else '*~', '' if not is_return_val else '*~'))

            return ret

        out += register_core_function_interface(api_one['core'])

        for extension in api_one['extensions']:
            out += register_extensions_function_interface(extension)


        for header_api in api_two:
            n = header_api['name']
            out += register_header_function_interface(n, header_api)
        out += ["};", ""]

        return out

    ret += _build_function_tables(api1, api2)

    return '\n'.join(ret)


if __name__ == "__main__":
    #change file path
    fd1 = open('/Users/cuiruilai/gdnative_api.json', 'r')
    fd2 = open('/Users/cuiruilai/Downloads/api.json', 'r')
    api1 = json.load(fd1)
    api2 = json.load(fd2)
    file_source = [api1, api2]

    with open('test.cpp', 'w') as fd:
        fd.write(_export_native_api_to_wasm(file_source))
