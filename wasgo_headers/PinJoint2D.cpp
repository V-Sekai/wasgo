/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PinJoint2D.h"
float PinJoint2D::get_softness(){
	return (float) _wasgo_PinJoint2D_wrapper_get_softness(wasgo_id);
}
void PinJoint2D::set_softness(float p_softness){
	_wasgo_PinJoint2D_wrapper_set_softness(wasgo_id, p_softness);
}

PinJoint2D::PinJoint2D(WasGoID p_wasgo_id) : Joint2D(p_wasgo_id){
}
PinJoint2D::PinJoint2D(Joint2D other) : Joint2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_PinJoint2D_constructor();
}
PinJoint2D::new_instance(){
    return PinJoint2D(_wasgo_PinJoint2D_constructor());
}