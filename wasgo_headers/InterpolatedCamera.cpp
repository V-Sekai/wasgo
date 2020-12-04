/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InterpolatedCamera.h"
float InterpolatedCamera::get_speed(){
	return (float) _wasgo_InterpolatedCamera_wrapper_get_speed(wasgo_id);
}
NodePath InterpolatedCamera::get_target_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_InterpolatedCamera_wrapper_get_target_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
bool InterpolatedCamera::is_interpolation_enabled(){
	return (bool) _wasgo_InterpolatedCamera_wrapper_is_interpolation_enabled(wasgo_id);
}
void InterpolatedCamera::set_interpolation_enabled(bool p_target_path){
	_wasgo_InterpolatedCamera_wrapper_set_interpolation_enabled(wasgo_id, p_target_path);
}
void InterpolatedCamera::set_speed(float p_speed){
	_wasgo_InterpolatedCamera_wrapper_set_speed(wasgo_id, p_speed);
}
void InterpolatedCamera::set_target(Object p_target){
	_wasgo_InterpolatedCamera_wrapper_set_target(wasgo_id, p_target._get_wasgo_id());
}
void InterpolatedCamera::set_target_path(NodePath p_target_path){

    Variant wasgo_var_target_path = p_target_path;
    int wasgo_size_target_path = String(p_target_path).size();
    uint8_t wasgo_buffer_target_path[wasgo_size_target_path];
    encode_variant(wasgo_var_target_path, wasgo_buffer_target_path, wasgo_size_target_path);
    
	_wasgo_InterpolatedCamera_wrapper_set_target_path(wasgo_id, wasgo_buffer_target_path, wasgo_size_target_path);
}

InterpolatedCamera::InterpolatedCamera(WasGoID p_wasgo_id) : Camera(p_wasgo_id){
}
InterpolatedCamera::InterpolatedCamera(Camera other) : Camera(other._get_wasgo_id()){
    wasgo_id = _wasgo_InterpolatedCamera_constructor();
}
InterpolatedCamera::new_instance(){
    return InterpolatedCamera(_wasgo_InterpolatedCamera_constructor());
}