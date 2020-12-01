/* THIS FILE IS GENERATED */
#include "VisualShaderNodeVectorOp.h"
VisualShaderNodeVectorOp::Operator VisualShaderNodeVectorOp::get_operator(){
	return VisualShaderNodeVectorOp::Operator::from_wasgo_id(_wasgo_VisualShaderNodeVectorOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeVectorOp::set_operator(VisualShaderNodeVectorOp::Operator p_op){
	_wasgo_VisualShaderNodeVectorOp_wrapper_set_operator(wasgo_id, ((Variant) p_op).get_wasgo_id());
}