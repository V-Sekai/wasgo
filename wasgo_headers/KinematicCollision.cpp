/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "KinematicCollision.h"
Object KinematicCollision::get_collider(){
	return Object(_wasgo_KinematicCollision_wrapper_get_collider(wasgo_id));
}
int KinematicCollision::get_collider_id(){
	return (int) _wasgo_KinematicCollision_wrapper_get_collider_id(wasgo_id);
}
Variant KinematicCollision::get_collider_metadata(){
	return Variant(_wasgo_KinematicCollision_wrapper_get_collider_metadata(wasgo_id));
}
Object KinematicCollision::get_collider_shape(){
	return Object(_wasgo_KinematicCollision_wrapper_get_collider_shape(wasgo_id));
}
int KinematicCollision::get_collider_shape_index(){
	return (int) _wasgo_KinematicCollision_wrapper_get_collider_shape_index(wasgo_id);
}
Vector3 KinematicCollision::get_collider_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicCollision_wrapper_get_collider_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Object KinematicCollision::get_local_shape(){
	return Object(_wasgo_KinematicCollision_wrapper_get_local_shape(wasgo_id));
}
Vector3 KinematicCollision::get_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicCollision_wrapper_get_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 KinematicCollision::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicCollision_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 KinematicCollision::get_remainder(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicCollision_wrapper_get_remainder(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 KinematicCollision::get_travel(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_KinematicCollision_wrapper_get_travel(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}

KinematicCollision::KinematicCollision(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
KinematicCollision::KinematicCollision(Reference other) : Reference(other._get_wasgo_id()){
}
KinematicCollision::KinematicCollision():Reference(){
}
KinematicCollision KinematicCollision::new_instance(){
    return KinematicCollision(_wasgo_KinematicCollision_constructor());
}
WasGoID KinematicCollision::_get_wasgo_id(){
    return wasgo_id;
}
KinematicCollision::operator bool(){
    return (bool) wasgo_id;
}
