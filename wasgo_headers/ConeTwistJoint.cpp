/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConeTwistJoint.h"
float ConeTwistJoint::get_param(ConeTwistJoint::Param p_param){
	return (float) _wasgo_ConeTwistJoint_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
void ConeTwistJoint::set_param(ConeTwistJoint::Param p_param, float p_value){
	_wasgo_ConeTwistJoint_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}

ConeTwistJoint::ConeTwistJoint(WasGoID p_wasgo_id) : Joint(p_wasgo_id){
}
ConeTwistJoint::ConeTwistJoint(Joint other) : Joint(other._get_wasgo_id()){
    wasgo_id = _wasgo_ConeTwistJoint_constructor();
}
ConeTwistJoint::new_instance(){
    return ConeTwistJoint(_wasgo_ConeTwistJoint_constructor());
}