/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RayCast.h"
void RayCast::add_exception(Object p_node){
	_wasgo_RayCast_wrapper_add_exception(wasgo_id, p_node._get_wasgo_id());
}
void RayCast::add_exception_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[0];
    int wasgo_size_rid = 0;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_RayCast_wrapper_add_exception_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
void RayCast::clear_exceptions(){
	_wasgo_RayCast_wrapper_clear_exceptions(wasgo_id);
}
void RayCast::force_raycast_update(){
	_wasgo_RayCast_wrapper_force_raycast_update(wasgo_id);
}
Vector3 RayCast::get_cast_to(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_RayCast_wrapper_get_cast_to(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Object RayCast::get_collider(){
	return Object(_wasgo_RayCast_wrapper_get_collider(wasgo_id));
}
int RayCast::get_collider_shape(){
	return (int) _wasgo_RayCast_wrapper_get_collider_shape(wasgo_id);
}
int RayCast::get_collision_mask(){
	return (int) _wasgo_RayCast_wrapper_get_collision_mask(wasgo_id);
}
bool RayCast::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_RayCast_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
Vector3 RayCast::get_collision_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_RayCast_wrapper_get_collision_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 RayCast::get_collision_point(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_RayCast_wrapper_get_collision_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
bool RayCast::get_exclude_parent_body(){
	return (bool) _wasgo_RayCast_wrapper_get_exclude_parent_body(wasgo_id);
}
bool RayCast::is_collide_with_areas_enabled(){
	return (bool) _wasgo_RayCast_wrapper_is_collide_with_areas_enabled(wasgo_id);
}
bool RayCast::is_collide_with_bodies_enabled(){
	return (bool) _wasgo_RayCast_wrapper_is_collide_with_bodies_enabled(wasgo_id);
}
bool RayCast::is_colliding(){
	return (bool) _wasgo_RayCast_wrapper_is_colliding(wasgo_id);
}
bool RayCast::is_enabled(){
	return (bool) _wasgo_RayCast_wrapper_is_enabled(wasgo_id);
}
void RayCast::remove_exception(Object p_node){
	_wasgo_RayCast_wrapper_remove_exception(wasgo_id, p_node._get_wasgo_id());
}
void RayCast::remove_exception_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[0];
    int wasgo_size_rid = 0;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_RayCast_wrapper_remove_exception_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
void RayCast::set_cast_to(Vector3 p_local_point){

    Variant wasgo_var_local_point = p_local_point;
    uint8_t wasgo_buffer_local_point[16];
    int wasgo_size_local_point = 16;
    encode_variant(wasgo_var_local_point, wasgo_buffer_local_point, wasgo_size_local_point);
    
	_wasgo_RayCast_wrapper_set_cast_to(wasgo_id, wasgo_buffer_local_point, wasgo_size_local_point);
}
void RayCast::set_collide_with_areas(bool p_enable){
	_wasgo_RayCast_wrapper_set_collide_with_areas(wasgo_id, p_enable);
}
void RayCast::set_collide_with_bodies(bool p_enable){
	_wasgo_RayCast_wrapper_set_collide_with_bodies(wasgo_id, p_enable);
}
void RayCast::set_collision_mask(int p_mask){
	_wasgo_RayCast_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void RayCast::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_RayCast_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void RayCast::set_enabled(bool p_enabled){
	_wasgo_RayCast_wrapper_set_enabled(wasgo_id, p_enabled);
}
void RayCast::set_exclude_parent_body(bool p_mask){
	_wasgo_RayCast_wrapper_set_exclude_parent_body(wasgo_id, p_mask);
}

RayCast::RayCast(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
RayCast::RayCast(Spatial other) : Spatial(other._get_wasgo_id()){
}
RayCast::RayCast():Spatial(){
}
RayCast RayCast::new_instance(){
    return RayCast(_wasgo_RayCast_constructor());
}
WasGoID RayCast::_get_wasgo_id(){
    return wasgo_id;
}
RayCast::operator bool(){
    return (bool) wasgo_id;
}
