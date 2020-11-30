/* THIS FILE IS GENERATED */
#include "PathFollow.h"
bool PathFollow::get_cubic_interpolation(){
	return (bool) _wasgo_PathFollow_wrapper_get_cubic_interpolation(wasgo_id));
}
float PathFollow::get_h_offset(){
	return (float) _wasgo_PathFollow_wrapper_get_h_offset(wasgo_id));
}
float PathFollow::get_offset(){
	return (float) _wasgo_PathFollow_wrapper_get_offset(wasgo_id));
}
PathFollow::RotationMode PathFollow::get_rotation_mode(){
	return PathFollow::RotationMode::from_wasgo_id(_wasgo_PathFollow_wrapper_get_rotation_mode(wasgo_id));
}
float PathFollow::get_unit_offset(){
	return (float) _wasgo_PathFollow_wrapper_get_unit_offset(wasgo_id));
}
float PathFollow::get_v_offset(){
	return (float) _wasgo_PathFollow_wrapper_get_v_offset(wasgo_id));
}
bool PathFollow::has_loop(){
	return (bool) _wasgo_PathFollow_wrapper_has_loop(wasgo_id));
}
void PathFollow::set_cubic_interpolation(bool p_enable){
	_wasgo_PathFollow_wrapper_set_cubic_interpolation(wasgo_id, enable);
}
void PathFollow::set_h_offset(float p_h_offset){
	_wasgo_PathFollow_wrapper_set_h_offset(wasgo_id, h_offset);
}
void PathFollow::set_loop(bool p_loop){
	_wasgo_PathFollow_wrapper_set_loop(wasgo_id, loop);
}
void PathFollow::set_offset(float p_offset){
	_wasgo_PathFollow_wrapper_set_offset(wasgo_id, offset);
}
void PathFollow::set_rotation_mode(PathFollow::RotationMode p_rotation_mode){
	_wasgo_PathFollow_wrapper_set_rotation_mode(wasgo_id, ((Variant) rotation_mode).get_wasgo_id());
}
void PathFollow::set_unit_offset(float p_unit_offset){
	_wasgo_PathFollow_wrapper_set_unit_offset(wasgo_id, unit_offset);
}
void PathFollow::set_v_offset(float p_v_offset){
	_wasgo_PathFollow_wrapper_set_v_offset(wasgo_id, v_offset);
}

PathFollow::PathFollow(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PathFollow::~PathFollow(){
}