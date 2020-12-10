/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "KinematicCollision2D.h"
Object KinematicCollision2D::get_collider(){
	return Object(_wasgo_KinematicCollision2D_wrapper_get_collider(wasgo_id));
}
int KinematicCollision2D::get_collider_id(){
	return (int) _wasgo_KinematicCollision2D_wrapper_get_collider_id(wasgo_id);
}
Variant KinematicCollision2D::get_collider_metadata(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_KinematicCollision2D_wrapper_get_collider_metadata(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Object KinematicCollision2D::get_collider_shape(){
	return Object(_wasgo_KinematicCollision2D_wrapper_get_collider_shape(wasgo_id));
}
int KinematicCollision2D::get_collider_shape_index(){
	return (int) _wasgo_KinematicCollision2D_wrapper_get_collider_shape_index(wasgo_id);
}
Vector2 KinematicCollision2D::get_collider_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicCollision2D_wrapper_get_collider_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Object KinematicCollision2D::get_local_shape(){
	return Object(_wasgo_KinematicCollision2D_wrapper_get_local_shape(wasgo_id));
}
Vector2 KinematicCollision2D::get_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicCollision2D_wrapper_get_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 KinematicCollision2D::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicCollision2D_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 KinematicCollision2D::get_remainder(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicCollision2D_wrapper_get_remainder(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 KinematicCollision2D::get_travel(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_KinematicCollision2D_wrapper_get_travel(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}

KinematicCollision2D::KinematicCollision2D(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
KinematicCollision2D::KinematicCollision2D(Reference other) : Reference(other._get_wasgo_id()){
}
KinematicCollision2D::KinematicCollision2D():Reference(){
}
KinematicCollision2D KinematicCollision2D::new_instance(){
    return KinematicCollision2D(_wasgo_KinematicCollision2D_constructor());
}
WasGoID KinematicCollision2D::_get_wasgo_id(){
    return wasgo_id;
}
KinematicCollision2D::operator bool(){
    return (bool) wasgo_id;
}
