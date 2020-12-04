/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StreamTexture.h"
String StreamTexture::get_load_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_StreamTexture_wrapper_get_load_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Error StreamTexture::load(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_StreamTexture_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}

StreamTexture::StreamTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
StreamTexture::StreamTexture(Texture other) : Texture(other._get_wasgo_id()){
    wasgo_id = _wasgo_StreamTexture_constructor();
}
StreamTexture::new_instance(){
    return StreamTexture(_wasgo_StreamTexture_constructor());
}