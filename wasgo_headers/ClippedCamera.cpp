/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ClippedCamera.h"
void ClippedCamera::add_exception(Object p_node){
	_wasgo_ClippedCamera_wrapper_add_exception(wasgo_id, p_node._get_wasgo_id());
}
void ClippedCamera::add_exception_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[256];
    int wasgo_size_rid = 256;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_ClippedCamera_wrapper_add_exception_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
void ClippedCamera::clear_exceptions(){
	_wasgo_ClippedCamera_wrapper_clear_exceptions(wasgo_id);
}
float ClippedCamera::get_clip_offset(){
	return (float) _wasgo_ClippedCamera_wrapper_get_clip_offset(wasgo_id);
}
int ClippedCamera::get_collision_mask(){
	return (int) _wasgo_ClippedCamera_wrapper_get_collision_mask(wasgo_id);
}
bool ClippedCamera::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_ClippedCamera_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
float ClippedCamera::get_margin(){
	return (float) _wasgo_ClippedCamera_wrapper_get_margin(wasgo_id);
}
ClippedCamera::ProcessMode ClippedCamera::get_process_mode(){
	return ClippedCamera::ProcessMode(_wasgo_ClippedCamera_wrapper_get_process_mode(wasgo_id));
}
bool ClippedCamera::is_clip_to_areas_enabled(){
	return (bool) _wasgo_ClippedCamera_wrapper_is_clip_to_areas_enabled(wasgo_id);
}
bool ClippedCamera::is_clip_to_bodies_enabled(){
	return (bool) _wasgo_ClippedCamera_wrapper_is_clip_to_bodies_enabled(wasgo_id);
}
void ClippedCamera::remove_exception(Object p_node){
	_wasgo_ClippedCamera_wrapper_remove_exception(wasgo_id, p_node._get_wasgo_id());
}
void ClippedCamera::remove_exception_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[256];
    int wasgo_size_rid = 256;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_ClippedCamera_wrapper_remove_exception_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
void ClippedCamera::set_clip_to_areas(bool p_enable){
	_wasgo_ClippedCamera_wrapper_set_clip_to_areas(wasgo_id, p_enable);
}
void ClippedCamera::set_clip_to_bodies(bool p_enable){
	_wasgo_ClippedCamera_wrapper_set_clip_to_bodies(wasgo_id, p_enable);
}
void ClippedCamera::set_collision_mask(int p_mask){
	_wasgo_ClippedCamera_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void ClippedCamera::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_ClippedCamera_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void ClippedCamera::set_margin(float p_margin){
	_wasgo_ClippedCamera_wrapper_set_margin(wasgo_id, p_margin);
}
void ClippedCamera::set_process_mode(ClippedCamera::ProcessMode p_process_mode){
	_wasgo_ClippedCamera_wrapper_set_process_mode(wasgo_id, p_process_mode._get_wasgo_id());
}

ClippedCamera::ClippedCamera(WasGoID p_wasgo_id) : Camera(p_wasgo_id){
}
ClippedCamera::ClippedCamera(Camera other) : Camera(other._get_wasgo_id()){
}
ClippedCamera::ClippedCamera():Camera(){
}
ClippedCamera ClippedCamera::new_instance(){
    return ClippedCamera(_wasgo_ClippedCamera_constructor());
}
WasGoID ClippedCamera::_get_wasgo_id(){
    return wasgo_id;
}
ClippedCamera::operator bool(){
    return (bool) wasgo_id;
}
