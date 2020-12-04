/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTransformMult.h"
VisualShaderNodeTransformMult::Operator VisualShaderNodeTransformMult::get_operator(){
	return VisualShaderNodeTransformMult::Operator(_wasgo_VisualShaderNodeTransformMult_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeTransformMult::set_operator(VisualShaderNodeTransformMult::Operator p_op){
	_wasgo_VisualShaderNodeTransformMult_wrapper_set_operator(wasgo_id, p_op._get_wasgo_id());
}

VisualShaderNodeTransformMult::VisualShaderNodeTransformMult(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTransformMult::VisualShaderNodeTransformMult(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTransformMult_constructor();
}
VisualShaderNodeTransformMult::new_instance(){
    return VisualShaderNodeTransformMult(_wasgo_VisualShaderNodeTransformMult_constructor());
}