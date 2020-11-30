/* THIS FILE IS GENERATED */
#include "GrooveJoint2D.h"
float GrooveJoint2D::get_initial_offset(){
	return (float) _wasgo_GrooveJoint2D_wrapper_get_initial_offset(wasgo_id));
}
float GrooveJoint2D::get_length(){
	return (float) _wasgo_GrooveJoint2D_wrapper_get_length(wasgo_id));
}
void GrooveJoint2D::set_initial_offset(float p_offset){
	_wasgo_GrooveJoint2D_wrapper_set_initial_offset(wasgo_id, offset);
}
void GrooveJoint2D::set_length(float p_length){
	_wasgo_GrooveJoint2D_wrapper_set_length(wasgo_id, length);
}

GrooveJoint2D::GrooveJoint2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
GrooveJoint2D::~GrooveJoint2D(){
}