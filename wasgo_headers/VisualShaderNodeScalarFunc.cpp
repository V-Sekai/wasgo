/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarFunc.h"
VisualShaderNodeScalarFunc::Function VisualShaderNodeScalarFunc::get_function(){
	return VisualShaderNodeScalarFunc::Function(_wasgo_VisualShaderNodeScalarFunc_wrapper_get_function(wasgo_id));
}
void VisualShaderNodeScalarFunc::set_function(VisualShaderNodeScalarFunc::Function p_func){
	_wasgo_VisualShaderNodeScalarFunc_wrapper_set_function(wasgo_id, p_func._get_wasgo_id());
}

VisualShaderNodeScalarFunc::VisualShaderNodeScalarFunc(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarFunc::VisualShaderNodeScalarFunc(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeScalarFunc::VisualShaderNodeScalarFunc():VisualShaderNode(){
}
VisualShaderNodeScalarFunc VisualShaderNodeScalarFunc::new_instance(){
    return VisualShaderNodeScalarFunc(_wasgo_VisualShaderNodeScalarFunc_constructor());
}
WasGoID VisualShaderNodeScalarFunc::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeScalarFunc::operator bool(){
    return (bool) wasgo_id;
}
