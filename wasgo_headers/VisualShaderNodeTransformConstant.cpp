/* THIS FILE IS GENERATED */
#include "VisualShaderNodeTransformConstant.h"
Transform VisualShaderNodeTransformConstant::get_constant(){
	return Transform::from_wasgo_id(_wasgo_VisualShaderNodeTransformConstant_wrapper_get_constant(wasgo_id));
}
void VisualShaderNodeTransformConstant::set_constant(Transform p_value){
	_wasgo_VisualShaderNodeTransformConstant_wrapper_set_constant(wasgo_id, ((Variant) p_value).get_wasgo_id());
}