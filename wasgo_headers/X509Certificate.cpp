/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "X509Certificate.h"
Error X509Certificate::load(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_X509Certificate_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error X509Certificate::save(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_X509Certificate_wrapper_save(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}

X509Certificate::X509Certificate(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
X509Certificate::X509Certificate(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_X509Certificate_constructor();
}
X509Certificate::new_instance(){
    return X509Certificate(_wasgo_X509Certificate_constructor());
}