/* THIS FILE IS GENERATED */
#include "PinJoint2D.h"
float PinJoint2D::get_softness(){
	return (float) _wasgo_PinJoint2D_wrapper_get_softness(wasgo_id));
}
void PinJoint2D::set_softness(float p_softness){
	_wasgo_PinJoint2D_wrapper_set_softness(wasgo_id, softness);
}

PinJoint2D::PinJoint2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PinJoint2D::~PinJoint2D(){
}