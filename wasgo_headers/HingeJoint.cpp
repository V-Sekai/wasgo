/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HingeJoint.h"
bool HingeJoint::get_flag(HingeJoint::Flag p_flag){
	return (bool) _wasgo_HingeJoint_wrapper_get_flag(wasgo_id, p_flag._get_wasgo_id());
}
float HingeJoint::get_param(HingeJoint::Param p_param){
	return (float) _wasgo_HingeJoint_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
void HingeJoint::set_flag(HingeJoint::Flag p_flag, bool p_enabled){
	_wasgo_HingeJoint_wrapper_set_flag(wasgo_id, p_flag._get_wasgo_id(), p_enabled);
}
void HingeJoint::set_param(HingeJoint::Param p_param, float p_value){
	_wasgo_HingeJoint_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}

HingeJoint::HingeJoint(WasGoID p_wasgo_id) : Joint(p_wasgo_id){
}
HingeJoint::HingeJoint(Joint other) : Joint(other._get_wasgo_id()){
    wasgo_id = _wasgo_HingeJoint_constructor();
}
HingeJoint::new_instance(){
    return HingeJoint(_wasgo_HingeJoint_constructor());
}