/* THIS FILE IS GENERATED */
#include "InterpolatedCamera.h"
float InterpolatedCamera::get_speed(){
	return (float) _wasgo_InterpolatedCamera_wrapper_get_speed(wasgo_id));
}
NodePath InterpolatedCamera::get_target_path(){
	return NodePath::from_wasgo_id(_wasgo_InterpolatedCamera_wrapper_get_target_path(wasgo_id));
}
bool InterpolatedCamera::is_interpolation_enabled(){
	return (bool) _wasgo_InterpolatedCamera_wrapper_is_interpolation_enabled(wasgo_id));
}
void InterpolatedCamera::set_interpolation_enabled(bool p_target_path){
	_wasgo_InterpolatedCamera_wrapper_set_interpolation_enabled(wasgo_id, target_path);
}
void InterpolatedCamera::set_speed(float p_speed){
	_wasgo_InterpolatedCamera_wrapper_set_speed(wasgo_id, speed);
}
void InterpolatedCamera::set_target(Object p_target){
	_wasgo_InterpolatedCamera_wrapper_set_target(wasgo_id, ((Variant) target).get_wasgo_id());
}
void InterpolatedCamera::set_target_path(NodePath p_target_path){
	_wasgo_InterpolatedCamera_wrapper_set_target_path(wasgo_id, ((Variant) target_path).get_wasgo_id());
}

InterpolatedCamera::InterpolatedCamera(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InterpolatedCamera::~InterpolatedCamera(){
}