/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Physics2DTestMotionResult.h"
Object Physics2DTestMotionResult::get_collider(){
	return Object(_wasgo_Physics2DTestMotionResult_wrapper_get_collider(wasgo_id));
}
int Physics2DTestMotionResult::get_collider_id(){
	return (int) _wasgo_Physics2DTestMotionResult_wrapper_get_collider_id(wasgo_id);
}
RID Physics2DTestMotionResult::get_collider_rid(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DTestMotionResult_wrapper_get_collider_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int Physics2DTestMotionResult::get_collider_shape(){
	return (int) _wasgo_Physics2DTestMotionResult_wrapper_get_collider_shape(wasgo_id);
}
Vector2 Physics2DTestMotionResult::get_collider_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DTestMotionResult_wrapper_get_collider_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Physics2DTestMotionResult::get_collision_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DTestMotionResult_wrapper_get_collision_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Physics2DTestMotionResult::get_collision_point(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DTestMotionResult_wrapper_get_collision_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Physics2DTestMotionResult::get_motion(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DTestMotionResult_wrapper_get_motion(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Physics2DTestMotionResult::get_motion_remainder(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DTestMotionResult_wrapper_get_motion_remainder(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}

Physics2DTestMotionResult::Physics2DTestMotionResult(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
Physics2DTestMotionResult::Physics2DTestMotionResult(Reference other) : Reference(other._get_wasgo_id()){
}
Physics2DTestMotionResult::Physics2DTestMotionResult():Reference(){
}
Physics2DTestMotionResult Physics2DTestMotionResult::new_instance(){
    return Physics2DTestMotionResult(_wasgo_Physics2DTestMotionResult_constructor());
}
WasGoID Physics2DTestMotionResult::_get_wasgo_id(){
    return wasgo_id;
}
Physics2DTestMotionResult::operator bool(){
    return (bool) wasgo_id;
}
