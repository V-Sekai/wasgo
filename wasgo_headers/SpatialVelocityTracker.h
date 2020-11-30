/* THIS FILE IS GENERATED */
#ifndef SPATIALVELOCITYTRACKER_H
#define SPATIALVELOCITYTRACKER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
class SpatialVelocityTracker : public Reference{
Vector3 get_tracked_linear_velocity();
bool is_tracking_physics_step();
void reset(Vector3 p_position);
void set_track_physics_step(bool p_enable);
void update_position(Vector3 p_position);

SpatialVelocityTracker(WasGoId p_wasgo_id);
~SpatialVelocityTracker();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_SpatialVelocityTracker_wrapper_get_tracked_linear_velocity(WasGoId wasgo_id);
int _wasgo_SpatialVelocityTracker_wrapper_is_tracking_physics_step(WasGoId wasgo_id);
void _wasgo_SpatialVelocityTracker_wrapper_reset(WasGoId wasgo_id, WasGo::WasGoId p_position);
void _wasgo_SpatialVelocityTracker_wrapper_set_track_physics_step(WasGoId wasgo_id, bool p_enable);
void _wasgo_SpatialVelocityTracker_wrapper_update_position(WasGoId wasgo_id, WasGo::WasGoId p_position);
}
#endif