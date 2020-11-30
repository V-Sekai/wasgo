/* THIS FILE IS GENERATED */
#include "KinematicBody2D.h"
Vector2 KinematicBody2D::get_floor_normal(){
	return Vector2::from_wasgo_id(_wasgo_KinematicBody2D_wrapper_get_floor_normal(wasgo_id));
}
Vector2 KinematicBody2D::get_floor_velocity(){
	return Vector2::from_wasgo_id(_wasgo_KinematicBody2D_wrapper_get_floor_velocity(wasgo_id));
}
float KinematicBody2D::get_safe_margin(){
	return (float) _wasgo_KinematicBody2D_wrapper_get_safe_margin(wasgo_id));
}
KinematicCollision2D KinematicBody2D::get_slide_collision(int p_slide_idx){
	return KinematicCollision2D::from_wasgo_id(_wasgo_KinematicBody2D_wrapper_get_slide_collision(wasgo_id, slide_idx));
}
int KinematicBody2D::get_slide_count(){
	return (int) _wasgo_KinematicBody2D_wrapper_get_slide_count(wasgo_id));
}
bool KinematicBody2D::is_on_ceiling(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_on_ceiling(wasgo_id));
}
bool KinematicBody2D::is_on_floor(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_on_floor(wasgo_id));
}
bool KinematicBody2D::is_on_wall(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_on_wall(wasgo_id));
}
bool KinematicBody2D::is_sync_to_physics_enabled(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_sync_to_physics_enabled(wasgo_id));
}
KinematicCollision2D KinematicBody2D::move_and_collide(Vector2 p_rel_vec, bool p_infinite_inertia = (bool) True, bool p_exclude_raycast_shapes = (bool) True, bool p_test_only = (bool) False){
	return KinematicCollision2D::from_wasgo_id(_wasgo_KinematicBody2D_wrapper_move_and_collide(wasgo_id, ((Variant) rel_vec).get_wasgo_id(), infinite_inertia, exclude_raycast_shapes, test_only));
}
Vector2 KinematicBody2D::move_and_slide(Vector2 p_linear_velocity, Vector2 p_up_direction = (Vector2) (0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True){
	return Vector2::from_wasgo_id(_wasgo_KinematicBody2D_wrapper_move_and_slide(wasgo_id, ((Variant) linear_velocity).get_wasgo_id(), ((Variant) up_direction).get_wasgo_id(), stop_on_slope, max_slides, floor_max_angle, infinite_inertia));
}
Vector2 KinematicBody2D::move_and_slide_with_snap(Vector2 p_linear_velocity, Vector2 p_snap, Vector2 p_up_direction = (Vector2) (0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True){
	return Vector2::from_wasgo_id(_wasgo_KinematicBody2D_wrapper_move_and_slide_with_snap(wasgo_id, ((Variant) linear_velocity).get_wasgo_id(), ((Variant) snap).get_wasgo_id(), ((Variant) up_direction).get_wasgo_id(), stop_on_slope, max_slides, floor_max_angle, infinite_inertia));
}
void KinematicBody2D::set_safe_margin(float p_pixels){
	_wasgo_KinematicBody2D_wrapper_set_safe_margin(wasgo_id, pixels);
}
void KinematicBody2D::set_sync_to_physics(bool p_enable){
	_wasgo_KinematicBody2D_wrapper_set_sync_to_physics(wasgo_id, enable);
}
bool KinematicBody2D::test_move(Transform2D p_from, Vector2 p_rel_vec, bool p_infinite_inertia = (bool) True){
	return (bool) _wasgo_KinematicBody2D_wrapper_test_move(wasgo_id, ((Variant) from).get_wasgo_id(), ((Variant) rel_vec).get_wasgo_id(), infinite_inertia));
}

KinematicBody2D::KinematicBody2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
KinematicBody2D::~KinematicBody2D(){
}