/* THIS FILE IS GENERATED */
#include "VisualShaderNodeTransformVecMult.h"
VisualShaderNodeTransformVecMult::Operator VisualShaderNodeTransformVecMult::get_operator(){
	return VisualShaderNodeTransformVecMult::Operator::from_wasgo_id(_wasgo_VisualShaderNodeTransformVecMult_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeTransformVecMult::set_operator(VisualShaderNodeTransformVecMult::Operator p_op){
	_wasgo_VisualShaderNodeTransformVecMult_wrapper_set_operator(wasgo_id, ((Variant) p_op).get_wasgo_id());
}