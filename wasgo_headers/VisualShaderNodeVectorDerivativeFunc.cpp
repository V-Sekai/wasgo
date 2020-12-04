/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorDerivativeFunc.h"
VisualShaderNodeVectorDerivativeFunc::Function VisualShaderNodeVectorDerivativeFunc::get_function(){
	return VisualShaderNodeVectorDerivativeFunc::Function(_wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeVectorDerivativeFunc::set_function(VisualShaderNodeVectorDerivativeFunc::Function p_func){
	_wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeVectorDerivativeFunc::VisualShaderNodeVectorDerivativeFunc(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorDerivativeFunc::VisualShaderNodeVectorDerivativeFunc(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorDerivativeFunc_constructor();
}
VisualShaderNodeVectorDerivativeFunc::new_instance(){
    return VisualShaderNodeVectorDerivativeFunc(_wasgo_VisualShaderNodeVectorDerivativeFunc_constructor());
}