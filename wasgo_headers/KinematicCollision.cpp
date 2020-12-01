/* THIS FILE IS GENERATED */
#include "KinematicCollision.h"
Object KinematicCollision::get_collider(){
	return Object::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_collider(wasgo_id));
}
int KinematicCollision::get_collider_id(){
	return (int) _wasgo_KinematicCollision_wrapper_get_collider_id(wasgo_id);
}
Variant KinematicCollision::get_collider_metadata(){
	return Variant::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_collider_metadata(wasgo_id));
}
Object KinematicCollision::get_collider_shape(){
	return Object::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_collider_shape(wasgo_id));
}
int KinematicCollision::get_collider_shape_index(){
	return (int) _wasgo_KinematicCollision_wrapper_get_collider_shape_index(wasgo_id);
}
Vector3 KinematicCollision::get_collider_velocity(){
	return Vector3::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_collider_velocity(wasgo_id));
}
Object KinematicCollision::get_local_shape(){
	return Object::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_local_shape(wasgo_id));
}
Vector3 KinematicCollision::get_normal(){
	return Vector3::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_normal(wasgo_id));
}
Vector3 KinematicCollision::get_position(){
	return Vector3::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_position(wasgo_id));
}
Vector3 KinematicCollision::get_remainder(){
	return Vector3::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_remainder(wasgo_id));
}
Vector3 KinematicCollision::get_travel(){
	return Vector3::from_wasgo_id(_wasgo_KinematicCollision_wrapper_get_travel(wasgo_id));
}