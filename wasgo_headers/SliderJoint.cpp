/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SliderJoint.h"
float SliderJoint::get_param(SliderJoint::Param p_param){
	return (float) _wasgo_SliderJoint_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
void SliderJoint::set_param(SliderJoint::Param p_param, float p_value){
	_wasgo_SliderJoint_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}

SliderJoint::SliderJoint(WasGoID p_wasgo_id) : Joint(p_wasgo_id){
}
SliderJoint::SliderJoint(Joint other) : Joint(other._get_wasgo_id()){
    wasgo_id = _wasgo_SliderJoint_constructor();
}
SliderJoint::new_instance(){
    return SliderJoint(_wasgo_SliderJoint_constructor());
}