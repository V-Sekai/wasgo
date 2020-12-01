/* THIS FILE IS GENERATED */
#include "VisualShaderNodeScalarOp.h"
VisualShaderNodeScalarOp::Operator VisualShaderNodeScalarOp::get_operator(){
	return VisualShaderNodeScalarOp::Operator::from_wasgo_id(_wasgo_VisualShaderNodeScalarOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeScalarOp::set_operator(VisualShaderNodeScalarOp::Operator p_op){
	_wasgo_VisualShaderNodeScalarOp_wrapper_set_operator(wasgo_id, ((Variant) p_op).get_wasgo_id());
}