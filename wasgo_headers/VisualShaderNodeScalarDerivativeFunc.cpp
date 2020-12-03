/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarDerivativeFunc.h"
VisualShaderNodeScalarDerivativeFunc::Function VisualShaderNodeScalarDerivativeFunc::get_function(){
	return VisualShaderNodeScalarDerivativeFunc::Function(_wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeScalarDerivativeFunc::set_function(VisualShaderNodeScalarDerivativeFunc::Function p_func){
	_wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeScalarDerivativeFunc::VisualShaderNodeScalarDerivativeFunc(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarDerivativeFunc::VisualShaderNodeScalarDerivativeFunc(){
    wasgo_id = _wasgo_VisualShaderNodeScalarDerivativeFunc_constructor();
}
VisualShaderNodeScalarDerivativeFunc::~VisualShaderNodeScalarDerivativeFunc(){
    _wasgo_VisualShaderNodeScalarDerivativeFunc_destructor(wasgo_id);
}