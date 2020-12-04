/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeVectorOp.h"
VisualShaderNodeVectorOp::Operator VisualShaderNodeVectorOp::get_operator(){
	return VisualShaderNodeVectorOp::Operator(_wasgo_VisualShaderNodeVectorOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeVectorOp::set_operator(VisualShaderNodeVectorOp::Operator p_op){
	_wasgo_VisualShaderNodeVectorOp_wrapper_set_operator(wasgo_id, p_op._get_wasgo_id());
}

VisualShaderNodeVectorOp::VisualShaderNodeVectorOp(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeVectorOp::VisualShaderNodeVectorOp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeVectorOp_constructor();
}
VisualShaderNodeVectorOp::new_instance(){
    return VisualShaderNodeVectorOp(_wasgo_VisualShaderNodeVectorOp_constructor());
}