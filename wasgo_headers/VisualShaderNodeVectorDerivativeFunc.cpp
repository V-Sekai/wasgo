/* THIS FILE IS GENERATED */
#include "VisualShaderNodeVectorDerivativeFunc.h"
VisualShaderNodeVectorDerivativeFunc::Function VisualShaderNodeVectorDerivativeFunc::get_function(){
	return VisualShaderNodeVectorDerivativeFunc::Function::from_wasgo_id(_wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeVectorDerivativeFunc::set_function(VisualShaderNodeVectorDerivativeFunc::Function p_func){
	_wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_set_function(wasgo_id, ((Variant) func).get_wasgo_id());
}

VisualShaderNodeVectorDerivativeFunc::VisualShaderNodeVectorDerivativeFunc(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeVectorDerivativeFunc::~VisualShaderNodeVectorDerivativeFunc(){
}