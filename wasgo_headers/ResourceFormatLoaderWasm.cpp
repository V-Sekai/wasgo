/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ResourceFormatLoaderWasm.h"

ResourceFormatLoaderWasm::ResourceFormatLoaderWasm(WasGoId p_wasgo_id) : ResourceFormatLoader(p_wasgo_id){
}
ResourceFormatLoaderWasm::ResourceFormatLoaderWasm(ResourceFormatLoader other) : ResourceFormatLoader(other._get_wasgo_id()){
    wasgo_id = _wasgo_ResourceFormatLoaderWasm_constructor();
}
ResourceFormatLoaderWasm::new_instance(){
    return ResourceFormatLoaderWasm(_wasgo_ResourceFormatLoaderWasm_constructor());
}