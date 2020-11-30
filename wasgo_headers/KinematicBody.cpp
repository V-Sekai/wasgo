/* THIS FILE IS GENERATED */
#include "KinematicBody.h"
bool KinematicBody::get_axis_lock(PhysicsServer::BodyAxis p_axis){
	return (bool) _wasgo_KinematicBody_wrapper_get_axis_lock(wasgo_id, ((Variant) axis).get_wasgo_id()));
}
Vector3 KinematicBody::get_floor_normal(){
	return Vector3::from_wasgo_id(_wasgo_KinematicBody_wrapper_get_floor_normal(wasgo_id));
}
Vector3 KinematicBody::get_floor_velocity(){
	return Vector3::from_wasgo_id(_wasgo_KinematicBody_wrapper_get_floor_velocity(wasgo_id));
}
float KinematicBody::get_safe_margin(){
	return (float) _wasgo_KinematicBody_wrapper_get_safe_margin(wasgo_id));
}
KinematicCollision KinematicBody::get_slide_collision(int p_slide_idx){
	return KinematicCollision::from_wasgo_id(_wasgo_KinematicBody_wrapper_get_slide_collision(wasgo_id, slide_idx));
}
int KinematicBody::get_slide_count(){
	return (int) _wasgo_KinematicBody_wrapper_get_slide_count(wasgo_id));
}
bool KinematicBody::is_on_ceiling(){
	return (bool) _wasgo_KinematicBody_wrapper_is_on_ceiling(wasgo_id));
}
bool KinematicBody::is_on_floor(){
	return (bool) _wasgo_KinematicBody_wrapper_is_on_floor(wasgo_id));
}
bool KinematicBody::is_on_wall(){
	return (bool) _wasgo_KinematicBody_wrapper_is_on_wall(wasgo_id));
}
KinematicCollision KinematicBody::move_and_collide(Vector3 p_rel_vec, bool p_infinite_inertia = (bool) True, bool p_exclude_raycast_shapes = (bool) True, bool p_test_only = (bool) False){
	return KinematicCollision::from_wasgo_id(_wasgo_KinematicBody_wrapper_move_and_collide(wasgo_id, ((Variant) rel_vec).get_wasgo_id(), infinite_inertia, exclude_raycast_shapes, test_only));
}
Vector3 KinematicBody::move_and_slide(Vector3 p_linear_velocity, Vector3 p_up_direction = (Vector3) (0, 0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True){
	return Vector3::from_wasgo_id(_wasgo_KinematicBody_wrapper_move_and_slide(wasgo_id, ((Variant) linear_velocity).get_wasgo_id(), ((Variant) up_direction).get_wasgo_id(), stop_on_slope, max_slides, floor_max_angle, infinite_inertia));
}
Vector3 KinematicBody::move_and_slide_with_snap(Vector3 p_linear_velocity, Vector3 p_snap, Vector3 p_up_direction = (Vector3) (0, 0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True){
	return Vector3::from_wasgo_id(_wasgo_KinematicBody_wrapper_move_and_slide_with_snap(wasgo_id, ((Variant) linear_velocity).get_wasgo_id(), ((Variant) snap).get_wasgo_id(), ((Variant) up_direction).get_wasgo_id(), stop_on_slope, max_slides, floor_max_angle, infinite_inertia));
}
void KinematicBody::set_axis_lock(PhysicsServer::BodyAxis p_axis, bool p_lock){
	_wasgo_KinematicBody_wrapper_set_axis_lock(wasgo_id, ((Variant) axis).get_wasgo_id(), lock);
}
void KinematicBody::set_safe_margin(float p_pixels){
	_wasgo_KinematicBody_wrapper_set_safe_margin(wasgo_id, pixels);
}
bool KinematicBody::test_move(Transform p_from, Vector3 p_rel_vec, bool p_infinite_inertia = (bool) True){
	return (bool) _wasgo_KinematicBody_wrapper_test_move(wasgo_id, ((Variant) from).get_wasgo_id(), ((Variant) rel_vec).get_wasgo_id(), infinite_inertia));
}

KinematicBody::KinematicBody(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
KinematicBody::~KinematicBody(){
}