/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PinJoint.h"
float PinJoint::get_param(PinJoint::Param p_param){
	return (float) _wasgo_PinJoint_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
void PinJoint::set_param(PinJoint::Param p_param, float p_value){
	_wasgo_PinJoint_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}

PinJoint::PinJoint(WasGoID p_wasgo_id) : Joint(p_wasgo_id){
}
PinJoint::PinJoint(Joint other) : Joint(other._get_wasgo_id()){
    wasgo_id = _wasgo_PinJoint_constructor();
}
PinJoint::new_instance(){
    return PinJoint(_wasgo_PinJoint_constructor());
}