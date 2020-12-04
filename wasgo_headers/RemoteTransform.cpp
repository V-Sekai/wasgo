/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RemoteTransform.h"
void RemoteTransform::force_update_cache(){
	_wasgo_RemoteTransform_wrapper_force_update_cache(wasgo_id);
}
NodePath RemoteTransform::get_remote_node(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_RemoteTransform_wrapper_get_remote_node(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
bool RemoteTransform::get_update_position(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_update_position(wasgo_id);
}
bool RemoteTransform::get_update_rotation(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_update_rotation(wasgo_id);
}
bool RemoteTransform::get_update_scale(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_update_scale(wasgo_id);
}
bool RemoteTransform::get_use_global_coordinates(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_use_global_coordinates(wasgo_id);
}
void RemoteTransform::set_remote_node(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_RemoteTransform_wrapper_set_remote_node(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void RemoteTransform::set_update_position(bool p_update_remote_position){
	_wasgo_RemoteTransform_wrapper_set_update_position(wasgo_id, p_update_remote_position);
}
void RemoteTransform::set_update_rotation(bool p_update_remote_rotation){
	_wasgo_RemoteTransform_wrapper_set_update_rotation(wasgo_id, p_update_remote_rotation);
}
void RemoteTransform::set_update_scale(bool p_update_remote_scale){
	_wasgo_RemoteTransform_wrapper_set_update_scale(wasgo_id, p_update_remote_scale);
}
void RemoteTransform::set_use_global_coordinates(bool p_use_global_coordinates){
	_wasgo_RemoteTransform_wrapper_set_use_global_coordinates(wasgo_id, p_use_global_coordinates);
}

RemoteTransform::RemoteTransform(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
RemoteTransform::RemoteTransform(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_RemoteTransform_constructor();
}
RemoteTransform::new_instance(){
    return RemoteTransform(_wasgo_RemoteTransform_constructor());
}