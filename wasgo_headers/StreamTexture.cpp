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
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_StreamTexture_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}

StreamTexture::StreamTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
StreamTexture::StreamTexture(){
    wasgo_id = _wasgo_StreamTexture_constructor();
}
StreamTexture::~StreamTexture(){
    _wasgo_StreamTexture_destructor(wasgo_id);
}