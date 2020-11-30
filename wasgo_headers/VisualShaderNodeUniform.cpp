/* THIS FILE IS GENERATED */
#include "VisualShaderNodeUniform.h"
String VisualShaderNodeUniform::get_uniform_name(){
	return String::from_wasgo_id(_wasgo_VisualShaderNodeUniform_wrapper_get_uniform_name(wasgo_id));
}
void VisualShaderNodeUniform::set_uniform_name(String p_name){
	_wasgo_VisualShaderNodeUniform_wrapper_set_uniform_name(wasgo_id, ((Variant) name).get_wasgo_id());
}