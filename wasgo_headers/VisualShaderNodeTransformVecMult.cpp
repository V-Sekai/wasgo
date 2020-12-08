/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformVecMult.h"
VisualShaderNodeTransformVecMult::Operator VisualShaderNodeTransformVecMult::get_operator(){
	return VisualShaderNodeTransformVecMult::Operator(_wasgo_VisualShaderNodeTransformVecMult_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeTransformVecMult::set_operator(VisualShaderNodeTransformVecMult::Operator p_op){
	_wasgo_VisualShaderNodeTransformVecMult_wrapper_set_operator(wasgo_id, p_op._get_wasgo_id());
}

VisualShaderNodeTransformVecMult::VisualShaderNodeTransformVecMult(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformVecMult::VisualShaderNodeTransformVecMult(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeTransformVecMult::VisualShaderNodeTransformVecMult():VisualShaderNode(){
}
VisualShaderNodeTransformVecMult VisualShaderNodeTransformVecMult::new_instance(){
    return VisualShaderNodeTransformVecMult(_wasgo_VisualShaderNodeTransformVecMult_constructor());
}
WasGoID VisualShaderNodeTransformVecMult::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeTransformVecMult::operator bool(){
    return (bool) wasgo_id;
}
