/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RayCast2D.h"
void RayCast2D::add_exception(Object p_node){
	_wasgo_RayCast2D_wrapper_add_exception(wasgo_id, p_node._get_wasgo_id());
}
void RayCast2D::add_exception_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[256];
    int wasgo_size_rid = 256;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_RayCast2D_wrapper_add_exception_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
void RayCast2D::clear_exceptions(){
	_wasgo_RayCast2D_wrapper_clear_exceptions(wasgo_id);
}
void RayCast2D::force_raycast_update(){
	_wasgo_RayCast2D_wrapper_force_raycast_update(wasgo_id);
}
Vector2 RayCast2D::get_cast_to(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_RayCast2D_wrapper_get_cast_to(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Object RayCast2D::get_collider(){
	return Object(_wasgo_RayCast2D_wrapper_get_collider(wasgo_id));
}
int RayCast2D::get_collider_shape(){
	return (int) _wasgo_RayCast2D_wrapper_get_collider_shape(wasgo_id);
}
int RayCast2D::get_collision_mask(){
	return (int) _wasgo_RayCast2D_wrapper_get_collision_mask(wasgo_id);
}
bool RayCast2D::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_RayCast2D_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
Vector2 RayCast2D::get_collision_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_RayCast2D_wrapper_get_collision_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 RayCast2D::get_collision_point(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_RayCast2D_wrapper_get_collision_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool RayCast2D::get_exclude_parent_body(){
	return (bool) _wasgo_RayCast2D_wrapper_get_exclude_parent_body(wasgo_id);
}
bool RayCast2D::is_collide_with_areas_enabled(){
	return (bool) _wasgo_RayCast2D_wrapper_is_collide_with_areas_enabled(wasgo_id);
}
bool RayCast2D::is_collide_with_bodies_enabled(){
	return (bool) _wasgo_RayCast2D_wrapper_is_collide_with_bodies_enabled(wasgo_id);
}
bool RayCast2D::is_colliding(){
	return (bool) _wasgo_RayCast2D_wrapper_is_colliding(wasgo_id);
}
bool RayCast2D::is_enabled(){
	return (bool) _wasgo_RayCast2D_wrapper_is_enabled(wasgo_id);
}
void RayCast2D::remove_exception(Object p_node){
	_wasgo_RayCast2D_wrapper_remove_exception(wasgo_id, p_node._get_wasgo_id());
}
void RayCast2D::remove_exception_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[256];
    int wasgo_size_rid = 256;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_RayCast2D_wrapper_remove_exception_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
void RayCast2D::set_cast_to(Vector2 p_local_point){

    Variant wasgo_var_local_point = p_local_point;
    uint8_t wasgo_buffer_local_point[12];
    int wasgo_size_local_point = 12;
    encode_variant(wasgo_var_local_point, wasgo_buffer_local_point, wasgo_size_local_point);
    
	_wasgo_RayCast2D_wrapper_set_cast_to(wasgo_id, wasgo_buffer_local_point, wasgo_size_local_point);
}
void RayCast2D::set_collide_with_areas(bool p_enable){
	_wasgo_RayCast2D_wrapper_set_collide_with_areas(wasgo_id, p_enable);
}
void RayCast2D::set_collide_with_bodies(bool p_enable){
	_wasgo_RayCast2D_wrapper_set_collide_with_bodies(wasgo_id, p_enable);
}
void RayCast2D::set_collision_mask(int p_mask){
	_wasgo_RayCast2D_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void RayCast2D::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_RayCast2D_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void RayCast2D::set_enabled(bool p_enabled){
	_wasgo_RayCast2D_wrapper_set_enabled(wasgo_id, p_enabled);
}
void RayCast2D::set_exclude_parent_body(bool p_mask){
	_wasgo_RayCast2D_wrapper_set_exclude_parent_body(wasgo_id, p_mask);
}

RayCast2D::RayCast2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
RayCast2D::RayCast2D(Node2D other) : Node2D(other._get_wasgo_id()){
}
RayCast2D::RayCast2D():Node2D(){
}
RayCast2D RayCast2D::new_instance(){
    return RayCast2D(_wasgo_RayCast2D_constructor());
}
WasGoID RayCast2D::_get_wasgo_id(){
    return wasgo_id;
}
RayCast2D::operator bool(){
    return (bool) wasgo_id;
}
