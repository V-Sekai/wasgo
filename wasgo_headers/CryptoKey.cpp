/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CryptoKey.h"
Error CryptoKey::load(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_CryptoKey_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error CryptoKey::save(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_CryptoKey_wrapper_save(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}

CryptoKey::CryptoKey(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
CryptoKey::CryptoKey(){
    wasgo_id = _wasgo_CryptoKey_constructor();
}
CryptoKey::~CryptoKey(){
    _wasgo_CryptoKey_destructor(wasgo_id);
}