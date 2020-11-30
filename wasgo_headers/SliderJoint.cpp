/* THIS FILE IS GENERATED */
#include "SliderJoint.h"
float SliderJoint::get_param(SliderJoint::Param p_param){
	return (float) _wasgo_SliderJoint_wrapper_get_param(wasgo_id, ((Variant) param).get_wasgo_id()));
}
void SliderJoint::set_param(SliderJoint::Param p_param, float p_value){
	_wasgo_SliderJoint_wrapper_set_param(wasgo_id, ((Variant) param).get_wasgo_id(), value);
}

SliderJoint::SliderJoint(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
SliderJoint::~SliderJoint(){
}