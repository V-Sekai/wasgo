/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConeTwistJoint.h"
float ConeTwistJoint::get_param(ConeTwistJoint::Param p_param){
	return (float) _wasgo_ConeTwistJoint_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
void ConeTwistJoint::set_param(ConeTwistJoint::Param p_param, float p_value){
	_wasgo_ConeTwistJoint_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}

ConeTwistJoint::ConeTwistJoint(WasGoId p_wasgo_id) : Joint(p_wasgo_id){
}
ConeTwistJoint::ConeTwistJoint(){
    wasgo_id = _wasgo_ConeTwistJoint_constructor();
}
ConeTwistJoint::~ConeTwistJoint(){
    _wasgo_ConeTwistJoint_destructor(wasgo_id);
}