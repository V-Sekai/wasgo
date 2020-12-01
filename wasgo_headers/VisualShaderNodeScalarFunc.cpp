/* THIS FILE IS GENERATED */
#include "VisualShaderNodeScalarFunc.h"
VisualShaderNodeScalarFunc::Function VisualShaderNodeScalarFunc::get_function(){
	return VisualShaderNodeScalarFunc::Function::from_wasgo_id(_wasgo_VisualShaderNodeScalarFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeScalarFunc::set_function(VisualShaderNodeScalarFunc::Function p_func){
	_wasgo_VisualShaderNodeScalarFunc_wrapper_set_function(wasgo_id, ((Variant) p_func).get_wasgo_id());
}