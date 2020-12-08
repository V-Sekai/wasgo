/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVRPositionalTracker.h"
ARVRPositionalTracker::TrackerHand ARVRPositionalTracker::get_hand(){
	return ARVRPositionalTracker::TrackerHand(_wasgo_ARVRPositionalTracker_wrapper_get_hand(wasgo_id));
}
int ARVRPositionalTracker::get_joy_id(){
	return (int) _wasgo_ARVRPositionalTracker_wrapper_get_joy_id(wasgo_id);
}
Mesh ARVRPositionalTracker::get_mesh(){
	return Mesh(_wasgo_ARVRPositionalTracker_wrapper_get_mesh(wasgo_id));
}
String ARVRPositionalTracker::get_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ARVRPositionalTracker_wrapper_get_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Basis ARVRPositionalTracker::get_orientation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 40;
    uint8_t wasgo_ret_buffer[40];
    _wasgo_ARVRPositionalTracker_wrapper_get_orientation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Basis) wasgo_ret;
    
}
Vector3 ARVRPositionalTracker::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_ARVRPositionalTracker_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float ARVRPositionalTracker::get_rumble(){
	return (float) _wasgo_ARVRPositionalTracker_wrapper_get_rumble(wasgo_id);
}
int ARVRPositionalTracker::get_tracker_id(){
	return (int) _wasgo_ARVRPositionalTracker_wrapper_get_tracker_id(wasgo_id);
}
bool ARVRPositionalTracker::get_tracks_orientation(){
	return (bool) _wasgo_ARVRPositionalTracker_wrapper_get_tracks_orientation(wasgo_id);
}
bool ARVRPositionalTracker::get_tracks_position(){
	return (bool) _wasgo_ARVRPositionalTracker_wrapper_get_tracks_position(wasgo_id);
}
Transform ARVRPositionalTracker::get_transform(bool p_adjust_by_reference_frame){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_ARVRPositionalTracker_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_adjust_by_reference_frame);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
ARVRServer::TrackerType ARVRPositionalTracker::get_type(){
	return ARVRServer::TrackerType(_wasgo_ARVRPositionalTracker_wrapper_get_type(wasgo_id));
}
void ARVRPositionalTracker::set_rumble(float p_rumble){
	_wasgo_ARVRPositionalTracker_wrapper_set_rumble(wasgo_id, p_rumble);
}

ARVRPositionalTracker::ARVRPositionalTracker(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
ARVRPositionalTracker::ARVRPositionalTracker(Object other) : Object(other._get_wasgo_id()){
}
ARVRPositionalTracker::ARVRPositionalTracker():Object(){
}
ARVRPositionalTracker ARVRPositionalTracker::new_instance(){
    return ARVRPositionalTracker(_wasgo_ARVRPositionalTracker_constructor());
}
WasGoID ARVRPositionalTracker::_get_wasgo_id(){
    return wasgo_id;
}
ARVRPositionalTracker::operator bool(){
    return (bool) wasgo_id;
}
