/* THIS FILE IS GENERATED */
#include "DampedSpringJoint2D.h"
float DampedSpringJoint2D::get_damping(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_damping(wasgo_id));
}
float DampedSpringJoint2D::get_length(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_length(wasgo_id));
}
float DampedSpringJoint2D::get_rest_length(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_rest_length(wasgo_id));
}
float DampedSpringJoint2D::get_stiffness(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_stiffness(wasgo_id));
}
void DampedSpringJoint2D::set_damping(float p_damping){
	_wasgo_DampedSpringJoint2D_wrapper_set_damping(wasgo_id, damping);
}
void DampedSpringJoint2D::set_length(float p_length){
	_wasgo_DampedSpringJoint2D_wrapper_set_length(wasgo_id, length);
}
void DampedSpringJoint2D::set_rest_length(float p_rest_length){
	_wasgo_DampedSpringJoint2D_wrapper_set_rest_length(wasgo_id, rest_length);
}
void DampedSpringJoint2D::set_stiffness(float p_stiffness){
	_wasgo_DampedSpringJoint2D_wrapper_set_stiffness(wasgo_id, stiffness);
}

DampedSpringJoint2D::DampedSpringJoint2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
DampedSpringJoint2D::~DampedSpringJoint2D(){
}