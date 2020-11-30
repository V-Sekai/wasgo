/* THIS FILE IS GENERATED */
#include "ClippedCamera.h"
void ClippedCamera::add_exception(Object p_node){
	_wasgo_ClippedCamera_wrapper_add_exception(wasgo_id, ((Variant) node).get_wasgo_id());
}
void ClippedCamera::add_exception_rid(RID p_rid){
	_wasgo_ClippedCamera_wrapper_add_exception_rid(wasgo_id, ((Variant) rid).get_wasgo_id());
}
void ClippedCamera::clear_exceptions(){
	_wasgo_ClippedCamera_wrapper_clear_exceptions(wasgo_id);
}
float ClippedCamera::get_clip_offset(){
	return (float) _wasgo_ClippedCamera_wrapper_get_clip_offset(wasgo_id));
}
int ClippedCamera::get_collision_mask(){
	return (int) _wasgo_ClippedCamera_wrapper_get_collision_mask(wasgo_id));
}
bool ClippedCamera::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_ClippedCamera_wrapper_get_collision_mask_bit(wasgo_id, bit));
}
float ClippedCamera::get_margin(){
	return (float) _wasgo_ClippedCamera_wrapper_get_margin(wasgo_id));
}
ClippedCamera::ProcessMode ClippedCamera::get_process_mode(){
	return ClippedCamera::ProcessMode::from_wasgo_id(_wasgo_ClippedCamera_wrapper_get_process_mode(wasgo_id));
}
bool ClippedCamera::is_clip_to_areas_enabled(){
	return (bool) _wasgo_ClippedCamera_wrapper_is_clip_to_areas_enabled(wasgo_id));
}
bool ClippedCamera::is_clip_to_bodies_enabled(){
	return (bool) _wasgo_ClippedCamera_wrapper_is_clip_to_bodies_enabled(wasgo_id));
}
void ClippedCamera::remove_exception(Object p_node){
	_wasgo_ClippedCamera_wrapper_remove_exception(wasgo_id, ((Variant) node).get_wasgo_id());
}
void ClippedCamera::remove_exception_rid(RID p_rid){
	_wasgo_ClippedCamera_wrapper_remove_exception_rid(wasgo_id, ((Variant) rid).get_wasgo_id());
}
void ClippedCamera::set_clip_to_areas(bool p_enable){
	_wasgo_ClippedCamera_wrapper_set_clip_to_areas(wasgo_id, enable);
}
void ClippedCamera::set_clip_to_bodies(bool p_enable){
	_wasgo_ClippedCamera_wrapper_set_clip_to_bodies(wasgo_id, enable);
}
void ClippedCamera::set_collision_mask(int p_mask){
	_wasgo_ClippedCamera_wrapper_set_collision_mask(wasgo_id, mask);
}
void ClippedCamera::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_ClippedCamera_wrapper_set_collision_mask_bit(wasgo_id, bit, value);
}
void ClippedCamera::set_margin(float p_margin){
	_wasgo_ClippedCamera_wrapper_set_margin(wasgo_id, margin);
}
void ClippedCamera::set_process_mode(ClippedCamera::ProcessMode p_process_mode){
	_wasgo_ClippedCamera_wrapper_set_process_mode(wasgo_id, ((Variant) process_mode).get_wasgo_id());
}

ClippedCamera::ClippedCamera(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ClippedCamera::~ClippedCamera(){
}