/* resource_wasm.h */

#ifndef RESOURCE_WASM_H
#define RESOURCE_WASM_H

#include "core/io/resource.h"
#include "wasm_export.h"

class WasmResource : public Resource {
    GDCLASS(WasmResource, Resource);

protected:
    static void _bind_methods(); 
/*    {
            ClassDB::bind_method(D_METHOD("get_mod"), &WasmResource::get_mod);

            ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "content"), "set_dict", "get_dict");
    }
*/    
private:
	Vector<uint8_t> wasm_buf;

public:
    Error load_file(const String &p_path);
    Error save_file(const String &p_path, const RES &p_resource);

	Vector<uint8_t> get_buf();
	WasmResource();
};
#endif // RESOURCE_WASM_H