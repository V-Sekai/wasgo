/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorDerivativeFunc.h"
VisualShaderNodeVectorDerivativeFunc::Function VisualShaderNodeVectorDerivativeFunc::get_function(){
	return VisualShaderNodeVectorDerivativeFunc::Function(_wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeVectorDerivativeFunc::set_function(VisualShaderNodeVectorDerivativeFunc::Function p_func){
	_wasgo_VisualShaderNodeVectorDerivativeFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeVectorDerivativeFunc::VisualShaderNodeVectorDerivativeFunc(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorDerivativeFunc::VisualShaderNodeVectorDerivativeFunc(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorDerivativeFunc::VisualShaderNodeVectorDerivativeFunc():VisualShaderNode(){
}
VisualShaderNodeVectorDerivativeFunc VisualShaderNodeVectorDerivativeFunc::new_instance(){
    return VisualShaderNodeVectorDerivativeFunc(_wasgo_VisualShaderNodeVectorDerivativeFunc_constructor());
}
WasGoID VisualShaderNodeVectorDerivativeFunc::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorDerivativeFunc::operator bool(){
    return (bool) wasgo_id;
}
