/* THIS FILE IS GENERATED */
#include "Shader.h"
String Shader::get_code(){
	return String::from_wasgo_id(_wasgo_Shader_wrapper_get_code(wasgo_id));
}
String Shader::get_custom_defines(){
	return String::from_wasgo_id(_wasgo_Shader_wrapper_get_custom_defines(wasgo_id));
}
Texture Shader::get_default_texture_param(String p_param){
	return Texture::from_wasgo_id(_wasgo_Shader_wrapper_get_default_texture_param(wasgo_id, ((Variant) p_param).get_wasgo_id()));
}
Shader::Mode Shader::get_mode(){
	return Shader::Mode::from_wasgo_id(_wasgo_Shader_wrapper_get_mode(wasgo_id));
}
bool Shader::has_param(String p_name){
	return (bool) _wasgo_Shader_wrapper_has_param(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
void Shader::set_code(String p_code){
	_wasgo_Shader_wrapper_set_code(wasgo_id, ((Variant) p_code).get_wasgo_id());
}
void Shader::set_custom_defines(String p_custom_defines){
	_wasgo_Shader_wrapper_set_custom_defines(wasgo_id, ((Variant) p_custom_defines).get_wasgo_id());
}
void Shader::set_default_texture_param(String p_param, Texture p_texture){
	_wasgo_Shader_wrapper_set_default_texture_param(wasgo_id, ((Variant) p_param).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}