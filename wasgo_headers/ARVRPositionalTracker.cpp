/* THIS FILE IS GENERATED */
#include "ARVRPositionalTracker.h"
ARVRPositionalTracker::TrackerHand ARVRPositionalTracker::get_hand(){
	return ARVRPositionalTracker::TrackerHand::from_wasgo_id(_wasgo_ARVRPositionalTracker_wrapper_get_hand(wasgo_id));
}
int ARVRPositionalTracker::get_joy_id(){
	return (int) _wasgo_ARVRPositionalTracker_wrapper_get_joy_id(wasgo_id));
}
Mesh ARVRPositionalTracker::get_mesh(){
	return Mesh::from_wasgo_id(_wasgo_ARVRPositionalTracker_wrapper_get_mesh(wasgo_id));
}
String ARVRPositionalTracker::get_name(){
	return String::from_wasgo_id(_wasgo_ARVRPositionalTracker_wrapper_get_name(wasgo_id));
}
Basis ARVRPositionalTracker::get_orientation(){
	return Basis::from_wasgo_id(_wasgo_ARVRPositionalTracker_wrapper_get_orientation(wasgo_id));
}
Vector3 ARVRPositionalTracker::get_position(){
	return Vector3::from_wasgo_id(_wasgo_ARVRPositionalTracker_wrapper_get_position(wasgo_id));
}
int ARVRPositionalTracker::get_tracker_id(){
	return (int) _wasgo_ARVRPositionalTracker_wrapper_get_tracker_id(wasgo_id));
}
bool ARVRPositionalTracker::get_tracks_orientation(){
	return (bool) _wasgo_ARVRPositionalTracker_wrapper_get_tracks_orientation(wasgo_id));
}
bool ARVRPositionalTracker::get_tracks_position(){
	return (bool) _wasgo_ARVRPositionalTracker_wrapper_get_tracks_position(wasgo_id));
}
Transform ARVRPositionalTracker::get_transform(bool p_adjust_by_reference_frame){
	return Transform::from_wasgo_id(_wasgo_ARVRPositionalTracker_wrapper_get_transform(wasgo_id, adjust_by_reference_frame));
}
ARVRServer::TrackerType ARVRPositionalTracker::get_type(){
	return ARVRServer::TrackerType::from_wasgo_id(_wasgo_ARVRPositionalTracker_wrapper_get_type(wasgo_id));
}

ARVRPositionalTracker::ARVRPositionalTracker(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ARVRPositionalTracker::~ARVRPositionalTracker(){
}