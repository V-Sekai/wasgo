/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "DampedSpringJoint2D.h"
float DampedSpringJoint2D::get_damping(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_damping(wasgo_id);
}
float DampedSpringJoint2D::get_length(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_length(wasgo_id);
}
float DampedSpringJoint2D::get_rest_length(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_rest_length(wasgo_id);
}
float DampedSpringJoint2D::get_stiffness(){
	return (float) _wasgo_DampedSpringJoint2D_wrapper_get_stiffness(wasgo_id);
}
void DampedSpringJoint2D::set_damping(float p_damping){
	_wasgo_DampedSpringJoint2D_wrapper_set_damping(wasgo_id, p_damping);
}
void DampedSpringJoint2D::set_length(float p_length){
	_wasgo_DampedSpringJoint2D_wrapper_set_length(wasgo_id, p_length);
}
void DampedSpringJoint2D::set_rest_length(float p_rest_length){
	_wasgo_DampedSpringJoint2D_wrapper_set_rest_length(wasgo_id, p_rest_length);
}
void DampedSpringJoint2D::set_stiffness(float p_stiffness){
	_wasgo_DampedSpringJoint2D_wrapper_set_stiffness(wasgo_id, p_stiffness);
}

DampedSpringJoint2D::DampedSpringJoint2D(WasGoID p_wasgo_id) : Joint2D(p_wasgo_id){
}
DampedSpringJoint2D::DampedSpringJoint2D(Joint2D other) : Joint2D(other._get_wasgo_id()){
}
DampedSpringJoint2D::DampedSpringJoint2D():Joint2D(){
}
DampedSpringJoint2D DampedSpringJoint2D::new_instance(){
    return DampedSpringJoint2D(_wasgo_DampedSpringJoint2D_constructor());
}
WasGoID DampedSpringJoint2D::_get_wasgo_id(){
    return wasgo_id;
}
DampedSpringJoint2D::operator bool(){
    return (bool) wasgo_id;
}
