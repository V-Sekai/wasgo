/* THIS FILE IS GENERATED */
#include "VisualShaderNodeScalarDerivativeFunc.h"
VisualShaderNodeScalarDerivativeFunc::Function VisualShaderNodeScalarDerivativeFunc::get_function(){
	return VisualShaderNodeScalarDerivativeFunc::Function::from_wasgo_id(_wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeScalarDerivativeFunc::set_function(VisualShaderNodeScalarDerivativeFunc::Function p_func){
	_wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_set_function(wasgo_id, ((Variant) func).get_wasgo_id());
}

VisualShaderNodeScalarDerivativeFunc::VisualShaderNodeScalarDerivativeFunc(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeScalarDerivativeFunc::~VisualShaderNodeScalarDerivativeFunc(){
}