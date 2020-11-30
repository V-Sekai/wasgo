/* THIS FILE IS GENERATED */
#include "VisualShaderNodeUniformRef.h"
String VisualShaderNodeUniformRef::get_uniform_name(){
	return String::from_wasgo_id(_wasgo_VisualShaderNodeUniformRef_wrapper_get_uniform_name(wasgo_id));
}
void VisualShaderNodeUniformRef::set_uniform_name(String p_name){
	_wasgo_VisualShaderNodeUniformRef_wrapper_set_uniform_name(wasgo_id, ((Variant) name).get_wasgo_id());
}

VisualShaderNodeUniformRef::VisualShaderNodeUniformRef(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeUniformRef::~VisualShaderNodeUniformRef(){
}