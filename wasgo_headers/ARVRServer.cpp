/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVRServer.h"
void ARVRServer::center_on_hmd(ARVRServer::RotationMode p_rotation_mode, bool p_keep_height){
	_wasgo_ARVRServer_wrapper_center_on_hmd(wasgo_id, p_rotation_mode._get_wasgo_id(), p_keep_height);
}
ARVRInterface ARVRServer::find_interface(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return ARVRInterface(_wasgo_ARVRServer_wrapper_find_interface(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
Transform ARVRServer::get_hmd_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_ARVRServer_wrapper_get_hmd_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
ARVRInterface ARVRServer::get_interface(int p_idx){
	return ARVRInterface(_wasgo_ARVRServer_wrapper_get_interface(wasgo_id, p_idx));
}
int ARVRServer::get_interface_count(){
	return (int) _wasgo_ARVRServer_wrapper_get_interface_count(wasgo_id);
}
Array ARVRServer::get_interfaces(){
	return Array(_wasgo_ARVRServer_wrapper_get_interfaces(wasgo_id));
}
int ARVRServer::get_last_commit_usec(){
	return (int) _wasgo_ARVRServer_wrapper_get_last_commit_usec(wasgo_id);
}
int ARVRServer::get_last_frame_usec(){
	return (int) _wasgo_ARVRServer_wrapper_get_last_frame_usec(wasgo_id);
}
int ARVRServer::get_last_process_usec(){
	return (int) _wasgo_ARVRServer_wrapper_get_last_process_usec(wasgo_id);
}
ARVRInterface ARVRServer::get_primary_interface(){
	return ARVRInterface(_wasgo_ARVRServer_wrapper_get_primary_interface(wasgo_id));
}
Transform ARVRServer::get_reference_frame(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_ARVRServer_wrapper_get_reference_frame(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
ARVRPositionalTracker ARVRServer::get_tracker(int p_idx){
	return ARVRPositionalTracker(_wasgo_ARVRServer_wrapper_get_tracker(wasgo_id, p_idx));
}
int ARVRServer::get_tracker_count(){
	return (int) _wasgo_ARVRServer_wrapper_get_tracker_count(wasgo_id);
}
float ARVRServer::get_world_scale(){
	return (float) _wasgo_ARVRServer_wrapper_get_world_scale(wasgo_id);
}
void ARVRServer::set_primary_interface(ARVRInterface p_interface){
	_wasgo_ARVRServer_wrapper_set_primary_interface(wasgo_id, p_interface._get_wasgo_id());
}
void ARVRServer::set_world_scale(float p_arg0){
	_wasgo_ARVRServer_wrapper_set_world_scale(wasgo_id, p_arg0);
}

ARVRServer::ARVRServer(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
ARVRServer::ARVRServer(Object other) : Object(other._get_wasgo_id()){
}
ARVRServer::ARVRServer():Object(){
}
ARVRServer ARVRServer::new_instance(){
    return ARVRServer(_wasgo_ARVRServer_constructor());
}
WasGoID ARVRServer::_get_wasgo_id(){
    return wasgo_id;
}
ARVRServer::operator bool(){
    return (bool) wasgo_id;
}
