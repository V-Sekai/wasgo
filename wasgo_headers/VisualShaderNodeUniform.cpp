/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeUniform.h"
String VisualShaderNodeUniform::get_uniform_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNodeUniform_wrapper_get_uniform_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void VisualShaderNodeUniform::set_uniform_name(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_VisualShaderNodeUniform_wrapper_set_uniform_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}