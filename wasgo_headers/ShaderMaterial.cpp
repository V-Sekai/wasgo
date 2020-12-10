/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ShaderMaterial.h"
Shader ShaderMaterial::get_shader(){
	return Shader(_wasgo_ShaderMaterial_wrapper_get_shader(wasgo_id));
}
Variant ShaderMaterial::get_shader_param(String p_param){

    Variant wasgo_var_param = p_param;
    int wasgo_size_param = 10 + String(p_param).size();
    uint8_t wasgo_buffer_param[wasgo_size_param];
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ShaderMaterial_wrapper_get_shader_param(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_param, wasgo_size_param);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool ShaderMaterial::property_can_revert(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_ShaderMaterial_wrapper_property_can_revert(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
Variant ShaderMaterial::property_get_revert(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ShaderMaterial_wrapper_property_get_revert(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_name, wasgo_size_name);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void ShaderMaterial::set_shader(Shader p_shader){
	_wasgo_ShaderMaterial_wrapper_set_shader(wasgo_id, p_shader._get_wasgo_id());
}
void ShaderMaterial::set_shader_param(String p_param, Variant p_value){

    Variant wasgo_var_param = p_param;
    int wasgo_size_param = 10 + String(p_param).size();
    uint8_t wasgo_buffer_param[wasgo_size_param];
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[256];
    int wasgo_size_value = 256;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_ShaderMaterial_wrapper_set_shader_param(wasgo_id, wasgo_buffer_param, wasgo_size_param, -69, wasgo_buffer_value, wasgo_size_value);
}

ShaderMaterial::ShaderMaterial(WasGoID p_wasgo_id) : Material(p_wasgo_id){
}
ShaderMaterial::ShaderMaterial(Material other) : Material(other._get_wasgo_id()){
}
ShaderMaterial::ShaderMaterial():Material(){
}
ShaderMaterial ShaderMaterial::new_instance(){
    return ShaderMaterial(_wasgo_ShaderMaterial_constructor());
}
WasGoID ShaderMaterial::_get_wasgo_id(){
    return wasgo_id;
}
ShaderMaterial::operator bool(){
    return (bool) wasgo_id;
}
