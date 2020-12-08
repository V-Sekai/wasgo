/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpatialVelocityTracker.h"
Vector3 SpatialVelocityTracker::get_tracked_linear_velocity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_SpatialVelocityTracker_wrapper_get_tracked_linear_velocity(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
bool SpatialVelocityTracker::is_tracking_physics_step(){
	return (bool) _wasgo_SpatialVelocityTracker_wrapper_is_tracking_physics_step(wasgo_id);
}
void SpatialVelocityTracker::reset(Vector3 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_SpatialVelocityTracker_wrapper_reset(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void SpatialVelocityTracker::set_track_physics_step(bool p_enable){
	_wasgo_SpatialVelocityTracker_wrapper_set_track_physics_step(wasgo_id, p_enable);
}
void SpatialVelocityTracker::update_position(Vector3 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_SpatialVelocityTracker_wrapper_update_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}

SpatialVelocityTracker::SpatialVelocityTracker(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
SpatialVelocityTracker::SpatialVelocityTracker(Reference other) : Reference(other._get_wasgo_id()){
}
SpatialVelocityTracker::SpatialVelocityTracker():Reference(){
}
SpatialVelocityTracker SpatialVelocityTracker::new_instance(){
    return SpatialVelocityTracker(_wasgo_SpatialVelocityTracker_constructor());
}
WasGoID SpatialVelocityTracker::_get_wasgo_id(){
    return wasgo_id;
}
SpatialVelocityTracker::operator bool(){
    return (bool) wasgo_id;
}
