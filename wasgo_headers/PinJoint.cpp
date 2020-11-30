/* THIS FILE IS GENERATED */
#include "PinJoint.h"
float PinJoint::get_param(PinJoint::Param p_param){
	return (float) _wasgo_PinJoint_wrapper_get_param(wasgo_id, ((Variant) param).get_wasgo_id()));
}
void PinJoint::set_param(PinJoint::Param p_param, float p_value){
	_wasgo_PinJoint_wrapper_set_param(wasgo_id, ((Variant) param).get_wasgo_id(), value);
}

PinJoint::PinJoint(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PinJoint::~PinJoint(){
}