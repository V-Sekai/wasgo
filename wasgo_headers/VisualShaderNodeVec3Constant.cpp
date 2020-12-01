/* THIS FILE IS GENERATED */
#include "VisualShaderNodeVec3Constant.h"
Vector3 VisualShaderNodeVec3Constant::get_constant(){
	return Vector3::from_wasgo_id(_wasgo_VisualShaderNodeVec3Constant_wrapper_get_constant(wasgo_id));
}
void VisualShaderNodeVec3Constant::set_constant(Vector3 p_value){
	_wasgo_VisualShaderNodeVec3Constant_wrapper_set_constant(wasgo_id, ((Variant) p_value).get_wasgo_id());
}