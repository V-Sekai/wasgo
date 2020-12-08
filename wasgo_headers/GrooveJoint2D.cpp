/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GrooveJoint2D.h"
float GrooveJoint2D::get_initial_offset(){
	return (float) _wasgo_GrooveJoint2D_wrapper_get_initial_offset(wasgo_id);
}
float GrooveJoint2D::get_length(){
	return (float) _wasgo_GrooveJoint2D_wrapper_get_length(wasgo_id);
}
void GrooveJoint2D::set_initial_offset(float p_offset){
	_wasgo_GrooveJoint2D_wrapper_set_initial_offset(wasgo_id, p_offset);
}
void GrooveJoint2D::set_length(float p_length){
	_wasgo_GrooveJoint2D_wrapper_set_length(wasgo_id, p_length);
}

GrooveJoint2D::GrooveJoint2D(WasGoID p_wasgo_id) : Joint2D(p_wasgo_id){
}
GrooveJoint2D::GrooveJoint2D(Joint2D other) : Joint2D(other._get_wasgo_id()){
}
GrooveJoint2D::GrooveJoint2D():Joint2D(){
}
GrooveJoint2D GrooveJoint2D::new_instance(){
    return GrooveJoint2D(_wasgo_GrooveJoint2D_constructor());
}
WasGoID GrooveJoint2D::_get_wasgo_id(){
    return wasgo_id;
}
GrooveJoint2D::operator bool(){
    return (bool) wasgo_id;
}
