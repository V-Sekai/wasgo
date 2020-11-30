/* THIS FILE IS GENERATED */
#include "VisualShaderNodeColorOp.h"
VisualShaderNodeColorOp::Operator VisualShaderNodeColorOp::get_operator(){
	return VisualShaderNodeColorOp::Operator::from_wasgo_id(_wasgo_VisualShaderNodeColorOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeColorOp::set_operator(VisualShaderNodeColorOp::Operator p_op){
	_wasgo_VisualShaderNodeColorOp_wrapper_set_operator(wasgo_id, ((Variant) op).get_wasgo_id());
}

VisualShaderNodeColorOp::VisualShaderNodeColorOp(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeColorOp::~VisualShaderNodeColorOp(){
}