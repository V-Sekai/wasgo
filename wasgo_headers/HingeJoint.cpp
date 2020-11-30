/* THIS FILE IS GENERATED */
#include "HingeJoint.h"
bool HingeJoint::get_flag(HingeJoint::Flag p_flag){
	return (bool) _wasgo_HingeJoint_wrapper_get_flag(wasgo_id, ((Variant) flag).get_wasgo_id()));
}
float HingeJoint::get_param(HingeJoint::Param p_param){
	return (float) _wasgo_HingeJoint_wrapper_get_param(wasgo_id, ((Variant) param).get_wasgo_id()));
}
void HingeJoint::set_flag(HingeJoint::Flag p_flag, bool p_enabled){
	_wasgo_HingeJoint_wrapper_set_flag(wasgo_id, ((Variant) flag).get_wasgo_id(), enabled);
}
void HingeJoint::set_param(HingeJoint::Param p_param, float p_value){
	_wasgo_HingeJoint_wrapper_set_param(wasgo_id, ((Variant) param).get_wasgo_id(), value);
}

HingeJoint::HingeJoint(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
HingeJoint::~HingeJoint(){
}