/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeColorOp.h"
VisualShaderNodeColorOp::Operator VisualShaderNodeColorOp::get_operator(){
	return VisualShaderNodeColorOp::Operator(_wasgo_VisualShaderNodeColorOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeColorOp::set_operator(VisualShaderNodeColorOp::Operator p_op){
	_wasgo_VisualShaderNodeColorOp_wrapper_set_operator(wasgo_id, p_op._get_wasgo_id());
}

VisualShaderNodeColorOp::VisualShaderNodeColorOp(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeColorOp::VisualShaderNodeColorOp(){
    wasgo_id = _wasgo_VisualShaderNodeColorOp_constructor();
}
VisualShaderNodeColorOp::~VisualShaderNodeColorOp(){
    _wasgo_VisualShaderNodeColorOp_destructor(wasgo_id);
}