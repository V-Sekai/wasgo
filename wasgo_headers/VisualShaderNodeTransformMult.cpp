/* THIS FILE IS GENERATED */
#include "VisualShaderNodeTransformMult.h"
VisualShaderNodeTransformMult::Operator VisualShaderNodeTransformMult::get_operator(){
	return VisualShaderNodeTransformMult::Operator::from_wasgo_id(_wasgo_VisualShaderNodeTransformMult_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeTransformMult::set_operator(VisualShaderNodeTransformMult::Operator p_op){
	_wasgo_VisualShaderNodeTransformMult_wrapper_set_operator(wasgo_id, ((Variant) p_op).get_wasgo_id());
}