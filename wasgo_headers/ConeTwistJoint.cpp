/* THIS FILE IS GENERATED */
#include "ConeTwistJoint.h"
float ConeTwistJoint::get_param(ConeTwistJoint::Param p_param){
	return (float) _wasgo_ConeTwistJoint_wrapper_get_param(wasgo_id, ((Variant) param).get_wasgo_id()));
}
void ConeTwistJoint::set_param(ConeTwistJoint::Param p_param, float p_value){
	_wasgo_ConeTwistJoint_wrapper_set_param(wasgo_id, ((Variant) param).get_wasgo_id(), value);
}

ConeTwistJoint::ConeTwistJoint(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ConeTwistJoint::~ConeTwistJoint(){
}