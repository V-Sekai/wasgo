/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SliderJoint.h"
float SliderJoint::get_param(SliderJoint::Param p_param){
	return (float) _wasgo_SliderJoint_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
void SliderJoint::set_param(SliderJoint::Param p_param, float p_value){
	_wasgo_SliderJoint_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}

SliderJoint::SliderJoint(WasGoId p_wasgo_id) : Joint(p_wasgo_id){
}
SliderJoint::SliderJoint(){
    wasgo_id = _wasgo_SliderJoint_constructor();
}
SliderJoint::~SliderJoint(){
    _wasgo_SliderJoint_destructor(wasgo_id);
}