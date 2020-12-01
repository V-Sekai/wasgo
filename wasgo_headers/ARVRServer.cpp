/* THIS FILE IS GENERATED */
#include "ARVRServer.h"
void ARVRServer::center_on_hmd(ARVRServer::RotationMode p_rotation_mode, bool p_keep_height){
	_wasgo_ARVRServer_wrapper_center_on_hmd(wasgo_id, ((Variant) p_rotation_mode).get_wasgo_id(), p_keep_height);
}
ARVRInterface ARVRServer::find_interface(String p_name){
	return ARVRInterface::from_wasgo_id(_wasgo_ARVRServer_wrapper_find_interface(wasgo_id, ((Variant) p_name).get_wasgo_id()));
}
Transform ARVRServer::get_hmd_transform(){
	return Transform::from_wasgo_id(_wasgo_ARVRServer_wrapper_get_hmd_transform(wasgo_id));
}
ARVRInterface ARVRServer::get_interface(int p_idx){
	return ARVRInterface::from_wasgo_id(_wasgo_ARVRServer_wrapper_get_interface(wasgo_id, p_idx));
}
int ARVRServer::get_interface_count(){
	return (int) _wasgo_ARVRServer_wrapper_get_interface_count(wasgo_id);
}
Array ARVRServer::get_interfaces(){
	return Array::from_wasgo_id(_wasgo_ARVRServer_wrapper_get_interfaces(wasgo_id));
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
	return ARVRInterface::from_wasgo_id(_wasgo_ARVRServer_wrapper_get_primary_interface(wasgo_id));
}
Transform ARVRServer::get_reference_frame(){
	return Transform::from_wasgo_id(_wasgo_ARVRServer_wrapper_get_reference_frame(wasgo_id));
}
ARVRPositionalTracker ARVRServer::get_tracker(int p_idx){
	return ARVRPositionalTracker::from_wasgo_id(_wasgo_ARVRServer_wrapper_get_tracker(wasgo_id, p_idx));
}
int ARVRServer::get_tracker_count(){
	return (int) _wasgo_ARVRServer_wrapper_get_tracker_count(wasgo_id);
}
float ARVRServer::get_world_scale(){
	return (float) _wasgo_ARVRServer_wrapper_get_world_scale(wasgo_id);
}
void ARVRServer::set_primary_interface(ARVRInterface p_interface){
	_wasgo_ARVRServer_wrapper_set_primary_interface(wasgo_id, ((Variant) p_interface).get_wasgo_id());
}
void ARVRServer::set_world_scale(float p_arg0){
	_wasgo_ARVRServer_wrapper_set_world_scale(wasgo_id, p_arg0);
}