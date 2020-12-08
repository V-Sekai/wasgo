/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "KinematicBody.h"
bool KinematicBody::get_axis_lock(PhysicsServer::BodyAxis p_axis){
	return (bool) _wasgo_KinematicBody_wrapper_get_axis_lock(wasgo_id, p_axis._get_wasgo_id());
}
Vector3 KinematicBody::get_floor_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicBody_wrapper_get_floor_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 KinematicBody::get_floor_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicBody_wrapper_get_floor_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float KinematicBody::get_safe_margin(){
	return (float) _wasgo_KinematicBody_wrapper_get_safe_margin(wasgo_id);
}
KinematicCollision KinematicBody::get_slide_collision(int p_slide_idx){
	return KinematicCollision(_wasgo_KinematicBody_wrapper_get_slide_collision(wasgo_id, p_slide_idx));
}
int KinematicBody::get_slide_count(){
	return (int) _wasgo_KinematicBody_wrapper_get_slide_count(wasgo_id);
}
bool KinematicBody::is_on_ceiling(){
	return (bool) _wasgo_KinematicBody_wrapper_is_on_ceiling(wasgo_id);
}
bool KinematicBody::is_on_floor(){
	return (bool) _wasgo_KinematicBody_wrapper_is_on_floor(wasgo_id);
}
bool KinematicBody::is_on_wall(){
	return (bool) _wasgo_KinematicBody_wrapper_is_on_wall(wasgo_id);
}
KinematicCollision KinematicBody::move_and_collide(Vector3 p_rel_vec, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only){

    Variant wasgo_var_rel_vec = p_rel_vec;
    uint8_t wasgo_buffer_rel_vec[16];
    int wasgo_size_rel_vec = 16;
    encode_variant(wasgo_var_rel_vec, wasgo_buffer_rel_vec, wasgo_size_rel_vec);
    
	return KinematicCollision(_wasgo_KinematicBody_wrapper_move_and_collide(wasgo_id, wasgo_buffer_rel_vec, wasgo_size_rel_vec, p_infinite_inertia, p_exclude_raycast_shapes, p_test_only));
}
Vector3 KinematicBody::move_and_slide(Vector3 p_linear_velocity, Vector3 p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){

    Variant wasgo_var_linear_velocity = p_linear_velocity;
    uint8_t wasgo_buffer_linear_velocity[16];
    int wasgo_size_linear_velocity = 16;
    encode_variant(wasgo_var_linear_velocity, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
    

    Variant wasgo_var_up_direction = p_up_direction;
    uint8_t wasgo_buffer_up_direction[16];
    int wasgo_size_up_direction = 16;
    encode_variant(wasgo_var_up_direction, wasgo_buffer_up_direction, wasgo_size_up_direction);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicBody_wrapper_move_and_slide(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity, wasgo_buffer_up_direction, wasgo_size_up_direction, p_stop_on_slope, p_max_slides, p_floor_max_angle, p_infinite_inertia);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 KinematicBody::move_and_slide_with_snap(Vector3 p_linear_velocity, Vector3 p_snap, Vector3 p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){

    Variant wasgo_var_linear_velocity = p_linear_velocity;
    uint8_t wasgo_buffer_linear_velocity[16];
    int wasgo_size_linear_velocity = 16;
    encode_variant(wasgo_var_linear_velocity, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity);
    

    Variant wasgo_var_snap = p_snap;
    uint8_t wasgo_buffer_snap[16];
    int wasgo_size_snap = 16;
    encode_variant(wasgo_var_snap, wasgo_buffer_snap, wasgo_size_snap);
    

    Variant wasgo_var_up_direction = p_up_direction;
    uint8_t wasgo_buffer_up_direction[16];
    int wasgo_size_up_direction = 16;
    encode_variant(wasgo_var_up_direction, wasgo_buffer_up_direction, wasgo_size_up_direction);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicBody_wrapper_move_and_slide_with_snap(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_linear_velocity, wasgo_size_linear_velocity, wasgo_buffer_snap, wasgo_size_snap, wasgo_buffer_up_direction, wasgo_size_up_direction, p_stop_on_slope, p_max_slides, p_floor_max_angle, p_infinite_inertia);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
void KinematicBody::set_axis_lock(PhysicsServer::BodyAxis p_axis, bool p_lock){
	_wasgo_KinematicBody_wrapper_set_axis_lock(wasgo_id, p_axis._get_wasgo_id(), p_lock);
}
void KinematicBody::set_safe_margin(float p_pixels){
	_wasgo_KinematicBody_wrapper_set_safe_margin(wasgo_id, p_pixels);
}
bool KinematicBody::test_move(Transform p_from, Vector3 p_rel_vec, bool p_infinite_inertia){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[52];
    int wasgo_size_from = 52;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_rel_vec = p_rel_vec;
    uint8_t wasgo_buffer_rel_vec[16];
    int wasgo_size_rel_vec = 16;
    encode_variant(wasgo_var_rel_vec, wasgo_buffer_rel_vec, wasgo_size_rel_vec);
    
	return (bool) _wasgo_KinematicBody_wrapper_test_move(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_rel_vec, wasgo_size_rel_vec, p_infinite_inertia);
}

KinematicBody::KinematicBody(WasGoID p_wasgo_id) : PhysicsBody(p_wasgo_id){
}
KinematicBody::KinematicBody(PhysicsBody other) : PhysicsBody(other._get_wasgo_id()){
}
KinematicBody::KinematicBody():PhysicsBody(){
}
KinematicBody KinematicBody::new_instance(){
    return KinematicBody(_wasgo_KinematicBody_constructor());
}
WasGoID KinematicBody::_get_wasgo_id(){
    return wasgo_id;
}
KinematicBody::operator bool(){
    return (bool) wasgo_id;
}
