/* THIS FILE IS GENERATED */
#include "SpatialVelocityTracker.h"
Vector3 SpatialVelocityTracker::get_tracked_linear_velocity(){
	return Vector3::from_wasgo_id(_wasgo_SpatialVelocityTracker_wrapper_get_tracked_linear_velocity(wasgo_id));
}
bool SpatialVelocityTracker::is_tracking_physics_step(){
	return (bool) _wasgo_SpatialVelocityTracker_wrapper_is_tracking_physics_step(wasgo_id);
}
void SpatialVelocityTracker::reset(Vector3 p_position){
	_wasgo_SpatialVelocityTracker_wrapper_reset(wasgo_id, ((Variant) p_position).get_wasgo_id());
}
void SpatialVelocityTracker::set_track_physics_step(bool p_enable){
	_wasgo_SpatialVelocityTracker_wrapper_set_track_physics_step(wasgo_id, p_enable);
}
void SpatialVelocityTracker::update_position(Vector3 p_position){
	_wasgo_SpatialVelocityTracker_wrapper_update_position(wasgo_id, ((Variant) p_position).get_wasgo_id());
}