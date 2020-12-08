/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorOp.h"
VisualShaderNodeVectorOp::Operator VisualShaderNodeVectorOp::get_operator(){
	return VisualShaderNodeVectorOp::Operator(_wasgo_VisualShaderNodeVectorOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeVectorOp::set_operator(VisualShaderNodeVectorOp::Operator p_op){
	_wasgo_VisualShaderNodeVectorOp_wrapper_set_operator(wasgo_id, p_op._get_wasgo_id());
}

VisualShaderNodeVectorOp::VisualShaderNodeVectorOp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorOp::VisualShaderNodeVectorOp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeVectorOp::VisualShaderNodeVectorOp():VisualShaderNode(){
}
VisualShaderNodeVectorOp VisualShaderNodeVectorOp::new_instance(){
    return VisualShaderNodeVectorOp(_wasgo_VisualShaderNodeVectorOp_constructor());
}
WasGoID VisualShaderNodeVectorOp::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeVectorOp::operator bool(){
    return (bool) wasgo_id;
}
