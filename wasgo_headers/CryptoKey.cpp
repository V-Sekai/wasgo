/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CryptoKey.h"
Error CryptoKey::load(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_CryptoKey_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error CryptoKey::save(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_CryptoKey_wrapper_save(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}

CryptoKey::CryptoKey(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
CryptoKey::CryptoKey(Resource other) : Resource(other._get_wasgo_id()){
}
CryptoKey::CryptoKey():Resource(){
}
CryptoKey CryptoKey::new_instance(){
    return CryptoKey(_wasgo_CryptoKey_constructor());
}
WasGoID CryptoKey::_get_wasgo_id(){
    return wasgo_id;
}
CryptoKey::operator bool(){
    return (bool) wasgo_id;
}
