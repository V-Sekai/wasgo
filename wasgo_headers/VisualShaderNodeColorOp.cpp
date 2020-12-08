/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeColorOp.h"
VisualShaderNodeColorOp::Operator VisualShaderNodeColorOp::get_operator(){
	return VisualShaderNodeColorOp::Operator(_wasgo_VisualShaderNodeColorOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeColorOp::set_operator(VisualShaderNodeColorOp::Operator p_op){
	_wasgo_VisualShaderNodeColorOp_wrapper_set_operator(wasgo_id, p_op._get_wasgo_id());
}

VisualShaderNodeColorOp::VisualShaderNodeColorOp(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeColorOp::VisualShaderNodeColorOp(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeColorOp::VisualShaderNodeColorOp():VisualShaderNode(){
}
VisualShaderNodeColorOp VisualShaderNodeColorOp::new_instance(){
    return VisualShaderNodeColorOp(_wasgo_VisualShaderNodeColorOp_constructor());
}
WasGoID VisualShaderNodeColorOp::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeColorOp::operator bool(){
    return (bool) wasgo_id;
}
