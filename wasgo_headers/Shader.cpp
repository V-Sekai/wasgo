/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Shader.h"
String Shader::get_code(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Shader_wrapper_get_code(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String Shader::get_custom_defines(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Shader_wrapper_get_custom_defines(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Texture Shader::get_default_texture_param(String p_param){

    Variant wasgo_var_param = p_param;
    int wasgo_size_param = 10 + String(p_param).size();
    uint8_t wasgo_buffer_param[wasgo_size_param];
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    
	return Texture(_wasgo_Shader_wrapper_get_default_texture_param(wasgo_id, wasgo_buffer_param, wasgo_size_param));
}
Shader::Mode Shader::get_mode(){
	return Shader::Mode(_wasgo_Shader_wrapper_get_mode(wasgo_id));
}
bool Shader::has_param(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Shader_wrapper_has_param(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Shader::set_code(String p_code){

    Variant wasgo_var_code = p_code;
    int wasgo_size_code = 10 + String(p_code).size();
    uint8_t wasgo_buffer_code[wasgo_size_code];
    encode_variant(wasgo_var_code, wasgo_buffer_code, wasgo_size_code);
    
	_wasgo_Shader_wrapper_set_code(wasgo_id, wasgo_buffer_code, wasgo_size_code);
}
void Shader::set_custom_defines(String p_custom_defines){

    Variant wasgo_var_custom_defines = p_custom_defines;
    int wasgo_size_custom_defines = 10 + String(p_custom_defines).size();
    uint8_t wasgo_buffer_custom_defines[wasgo_size_custom_defines];
    encode_variant(wasgo_var_custom_defines, wasgo_buffer_custom_defines, wasgo_size_custom_defines);
    
	_wasgo_Shader_wrapper_set_custom_defines(wasgo_id, wasgo_buffer_custom_defines, wasgo_size_custom_defines);
}
void Shader::set_default_texture_param(String p_param, Texture p_texture){

    Variant wasgo_var_param = p_param;
    int wasgo_size_param = 10 + String(p_param).size();
    uint8_t wasgo_buffer_param[wasgo_size_param];
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    
	_wasgo_Shader_wrapper_set_default_texture_param(wasgo_id, wasgo_buffer_param, wasgo_size_param, -69, p_texture._get_wasgo_id());
}

Shader::Shader(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Shader::Shader(Resource other) : Resource(other._get_wasgo_id()){
}
Shader::Shader():Resource(){
}
Shader Shader::new_instance(){
    return Shader(_wasgo_Shader_constructor());
}
WasGoID Shader::_get_wasgo_id(){
    return wasgo_id;
}
Shader::operator bool(){
    return (bool) wasgo_id;
}
