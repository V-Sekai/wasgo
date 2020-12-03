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
VisualShaderNodeTransformMult::VisualShaderNodeTransformMult(){
    wasgo_id = _wasgo_VisualShaderNodeTransformMult_constructor();
}
VisualShaderNodeTransformMult::~VisualShaderNodeTransformMult(){
    _wasgo_VisualShaderNodeTransformMult_destructor(wasgo_id);
}