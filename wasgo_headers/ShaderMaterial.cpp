/* THIS FILE IS GENERATED */
#include "ShaderMaterial.h"
Shader ShaderMaterial::get_shader(){
	return Shader::from_wasgo_id(_wasgo_ShaderMaterial_wrapper_get_shader(wasgo_id));
}
Variant ShaderMaterial::get_shader_param(String p_param){
	return Variant::from_wasgo_id(_wasgo_ShaderMaterial_wrapper_get_shader_param(wasgo_id, ((Variant) p_param).get_wasgo_id()));
}
void ShaderMaterial::set_shader(Shader p_shader){
	_wasgo_ShaderMaterial_wrapper_set_shader(wasgo_id, ((Variant) p_shader).get_wasgo_id());
}
void ShaderMaterial::set_shader_param(String p_param, Variant p_value){
	_wasgo_ShaderMaterial_wrapper_set_shader_param(wasgo_id, ((Variant) p_param).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}