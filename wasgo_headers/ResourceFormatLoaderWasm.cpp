/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ResourceFormatLoaderWasm.h"

ResourceFormatLoaderWasm::ResourceFormatLoaderWasm(WasGoID p_wasgo_id) : ResourceFormatLoader(p_wasgo_id){
}
ResourceFormatLoaderWasm::ResourceFormatLoaderWasm(ResourceFormatLoader other) : ResourceFormatLoader(other._get_wasgo_id()){
}
ResourceFormatLoaderWasm::ResourceFormatLoaderWasm():ResourceFormatLoader(){
}
ResourceFormatLoaderWasm ResourceFormatLoaderWasm::new_instance(){
    return ResourceFormatLoaderWasm(_wasgo_ResourceFormatLoaderWasm_constructor());
}
WasGoID ResourceFormatLoaderWasm::_get_wasgo_id(){
    return wasgo_id;
}
ResourceFormatLoaderWasm::operator bool(){
    return (bool) wasgo_id;
}
