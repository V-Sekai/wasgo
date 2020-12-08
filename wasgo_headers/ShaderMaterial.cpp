/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ShaderMaterial.h"
Shader ShaderMaterial::get_shader(){
	return Shader(_wasgo_ShaderMaterial_wrapper_get_shader(wasgo_id));
}
Variant ShaderMaterial::get_shader_param(String p_param){

    Variant wasgo_var_param = p_param;
    int wasgo_size_param = String(p_param).size();
    uint8_t wasgo_buffer_param[wasgo_size_param];
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    
	return Variant(_wasgo_ShaderMaterial_wrapper_get_shader_param(wasgo_id, wasgo_buffer_param, wasgo_size_param));
}
bool ShaderMaterial::property_can_revert(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_ShaderMaterial_wrapper_property_can_revert(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
Variant ShaderMaterial::property_get_revert(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Variant(_wasgo_ShaderMaterial_wrapper_property_get_revert(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
void ShaderMaterial::set_shader(Shader p_shader){
	_wasgo_ShaderMaterial_wrapper_set_shader(wasgo_id, p_shader._get_wasgo_id());
}
void ShaderMaterial::set_shader_param(String p_param, Variant p_value){

    Variant wasgo_var_param = p_param;
    int wasgo_size_param = String(p_param).size();
    uint8_t wasgo_buffer_param[wasgo_size_param];
    encode_variant(wasgo_var_param, wasgo_buffer_param, wasgo_size_param);
    
	_wasgo_ShaderMaterial_wrapper_set_shader_param(wasgo_id, wasgo_buffer_param, wasgo_size_param, p_value._get_wasgo_id());
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
