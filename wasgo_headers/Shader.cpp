/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Shader.h"
String Shader::get_code(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Shader_wrapper_get_code(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String Shader::get_custom_defines(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Shader_wrapper_get_custom_defines(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Texture Shader::get_default_texture_param(String p_param){

    Variant wasgo_var_param = p_param;
    uint8_t wasgo_buffer_param[256];
    int wasgo_size_param = 256;
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    
	return Texture(_wasgo_Shader_wrapper_get_default_texture_param(wasgo_id, wasgo_buffer_param, wasgo_size_param));
}
Shader::Mode Shader::get_mode(){
	return Shader::Mode(_wasgo_Shader_wrapper_get_mode(wasgo_id));
}
bool Shader::has_param(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Shader_wrapper_has_param(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Shader::set_code(String p_code){

    Variant wasgo_var_code = p_code;
    uint8_t wasgo_buffer_code[256];
    int wasgo_size_code = 256;
    encode_variant(wasgo_var_code, wasgo_buffer_code, wasgo_size_code);
    
	_wasgo_Shader_wrapper_set_code(wasgo_id, wasgo_buffer_code, wasgo_size_code);
}
void Shader::set_custom_defines(String p_custom_defines){

    Variant wasgo_var_custom_defines = p_custom_defines;
    uint8_t wasgo_buffer_custom_defines[256];
    int wasgo_size_custom_defines = 256;
    encode_variant(wasgo_var_custom_defines, wasgo_buffer_custom_defines, wasgo_size_custom_defines);
    
	_wasgo_Shader_wrapper_set_custom_defines(wasgo_id, wasgo_buffer_custom_defines, wasgo_size_custom_defines);
}
void Shader::set_default_texture_param(String p_param, Texture p_texture){

    Variant wasgo_var_param = p_param;
    uint8_t wasgo_buffer_param[256];
    int wasgo_size_param = 256;
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    
	_wasgo_Shader_wrapper_set_default_texture_param(wasgo_id, wasgo_buffer_param, wasgo_size_param, p_texture._get_wasgo_id());
}

Shader::Shader(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
Shader::Shader(){
    wasgo_id = _wasgo_Shader_constructor();
}
Shader::~Shader(){
    _wasgo_Shader_destructor(wasgo_id);
}