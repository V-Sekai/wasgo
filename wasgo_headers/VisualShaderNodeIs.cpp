/* THIS FILE IS GENERATED */
#include "VisualShaderNodeIs.h"
VisualShaderNodeIs::Function VisualShaderNodeIs::get_function(){
	return VisualShaderNodeIs::Function::from_wasgo_id(_wasgo_VisualShaderNodeIs_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeIs::set_function(VisualShaderNodeIs::Function p_func){
	_wasgo_VisualShaderNodeIs_wrapper_set_function(wasgo_id, ((Variant) p_func).get_wasgo_id());
}