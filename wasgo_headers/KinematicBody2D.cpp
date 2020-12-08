/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "KinematicBody2D.h"
Vector2 KinematicBody2D::get_floor_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicBody2D_wrapper_get_floor_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 KinematicBody2D::get_floor_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicBody2D_wrapper_get_floor_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float KinematicBody2D::get_safe_margin(){
	return (float) _wasgo_KinematicBody2D_wrapper_get_safe_margin(wasgo_id);
}
KinematicCollision2D KinematicBody2D::get_slide_collision(int p_slide_idx){
	return KinematicCollision2D(_wasgo_KinematicBody2D_wrapper_get_slide_collision(wasgo_id, p_slide_idx));
}
int KinematicBody2D::get_slide_count(){
	return (int) _wasgo_KinematicBody2D_wrapper_get_slide_count(wasgo_id);
}
bool KinematicBody2D::is_on_ceiling(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_on_ceiling(wasgo_id);
}
bool KinematicBody2D::is_on_floor(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_on_floor(wasgo_id);
}
bool KinematicBody2D::is_on_wall(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_on_wall(wasgo_id);
}
bool KinematicBody2D::is_sync_to_physics_enabled(){
	return (bool) _wasgo_KinematicBody2D_wrapper_is_sync_to_physics_enabled(wasgo_id);
}
KinematicCollision2D KinematicBody2D::move_and_collide(Vector2 p_rel_vec, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only){

    Variant wasgo_var_rel_vec = p_rel_vec;
    uint8_t wasgo_buffer_rel_vec[12];
    int wasgo_size_rel_vec = 12;
    encode_variant(wasgo_var_rel_vec, wasgo_buffer_rel_vec, wasgo_size_rel_vec);
    
	return KinematicCollision2D(_wasgo_KinematicBody2D_wrapper_move_and_collide(wasgo_id, wasgo_buffer_rel_vec, wasgo_size_rel_vec, p_infinite_inertia, p_exclude_raycast_shapes, p_test_only));
}
Vector2 KinematicBody2D::move_and_slide(Vector2 p_linear_velocity, Vector2 p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){

    Variant wasgo_var_linear_velocity = p_linear_velocity;
    uint8_t wasgo_buffer_linear_velocity[12];
    int wasgo_size_linear_velocity = 12;
    encode_variant(wasgo_var_linear_velocity, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
    

    Variant wasgo_var_up_direction = p_up_direction;
    uint8_t wasgo_buffer_up_direction[12];
    int wasgo_size_up_direction = 12;
    encode_variant(wasgo_var_up_direction, wasgo_buffer_up_direction, wasgo_size_up_direction);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicBody2D_wrapper_move_and_slide(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity, wasgo_buffer_up_direction, wasgo_size_up_direction, p_stop_on_slope, p_max_slides, p_floor_max_angle, p_infinite_inertia);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 KinematicBody2D::move_and_slide_with_snap(Vector2 p_linear_velocity, Vector2 p_snap, Vector2 p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){

    Variant wasgo_var_linear_velocity = p_linear_velocity;
    uint8_t wasgo_buffer_linear_velocity[12];
    int wasgo_size_linear_velocity = 12;
    encode_variant(wasgo_var_linear_velocity, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
    

    Variant wasgo_var_snap = p_snap;
    uint8_t wasgo_buffer_snap[12];
    int wasgo_size_snap = 12;
    encode_variant(wasgo_var_snap, wasgo_buffer_snap, wasgo_size_snap);
    

    Variant wasgo_var_up_direction = p_up_direction;
    uint8_t wasgo_buffer_up_direction[12];
    int wasgo_size_up_direction = 12;
    encode_variant(wasgo_var_up_direction, wasgo_buffer_up_direction, wasgo_size_up_direction);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicBody2D_wrapper_move_and_slide_with_snap(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity, wasgo_buffer_snap, wasgo_size_snap, wasgo_buffer_up_direction, wasgo_size_up_direction, p_stop_on_slope, p_max_slides, p_floor_max_angle, p_infinite_inertia);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void KinematicBody2D::set_safe_margin(float p_pixels){
	_wasgo_KinematicBody2D_wrapper_set_safe_margin(wasgo_id, p_pixels);
}
void KinematicBody2D::set_sync_to_physics(bool p_enable){
	_wasgo_KinematicBody2D_wrapper_set_sync_to_physics(wasgo_id, p_enable);
}
bool KinematicBody2D::test_move(Transform2D p_from, Vector2 p_rel_vec, bool p_infinite_inertia){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[28];
    int wasgo_size_from = 28;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_rel_vec = p_rel_vec;
    uint8_t wasgo_buffer_rel_vec[12];
    int wasgo_size_rel_vec = 12;
    encode_variant(wasgo_var_rel_vec, wasgo_buffer_rel_vec, wasgo_size_rel_vec);
    
	return (bool) _wasgo_KinematicBody2D_wrapper_test_move(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_rel_vec, wasgo_size_rel_vec, p_infinite_inertia);
}

KinematicBody2D::KinematicBody2D(WasGoID p_wasgo_id) : PhysicsBody2D(p_wasgo_id){
}
KinematicBody2D::KinematicBody2D(PhysicsBody2D other) : PhysicsBody2D(other._get_wasgo_id()){
}
KinematicBody2D::KinematicBody2D():PhysicsBody2D(){
}
KinematicBody2D KinematicBody2D::new_instance(){
    return KinematicBody2D(_wasgo_KinematicBody2D_constructor());
}
WasGoID KinematicBody2D::_get_wasgo_id(){
    return wasgo_id;
}
KinematicBody2D::operator bool(){
    return (bool) wasgo_id;
}
