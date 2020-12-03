/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarFunc.h"
VisualShaderNodeScalarFunc::Function VisualShaderNodeScalarFunc::get_function(){
	return VisualShaderNodeScalarFunc::Function(_wasgo_VisualShaderNodeScalarFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeScalarFunc::set_function(VisualShaderNodeScalarFunc::Function p_func){
	_wasgo_VisualShaderNodeScalarFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeScalarFunc::VisualShaderNodeScalarFunc(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarFunc::VisualShaderNodeScalarFunc(){
    wasgo_id = _wasgo_VisualShaderNodeScalarFunc_constructor();
}
VisualShaderNodeScalarFunc::~VisualShaderNodeScalarFunc(){
    _wasgo_VisualShaderNodeScalarFunc_destructor(wasgo_id);
}