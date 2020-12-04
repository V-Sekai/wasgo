/* THIS FILE IS GENERATED */
#ifndef SPATIALVELOCITYTRACKER_H
#define SPATIALVELOCITYTRACKER_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Vector3.h"
class SpatialVelocityTracker : public Reference{
public:
Vector3 get_tracked_linear_velocity();
bool is_tracking_physics_step();
void reset(Vector3 p_position);
void set_track_physics_step(bool p_enable);
void update_position(Vector3 p_position);

protected:
SpatialVelocityTracker(WasGoId p_wasgo_id);
public:
SpatialVelocityTracker();
~SpatialVelocityTracker();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpatialVelocityTracker_wrapper_get_tracked_linear_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_SpatialVelocityTracker_wrapper_is_tracking_physics_step(WasGoId wasgo_id);
void _wasgo_SpatialVelocityTracker_wrapper_reset(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_SpatialVelocityTracker_wrapper_set_track_physics_step(WasGoId wasgo_id, bool p_enable);
void _wasgo_SpatialVelocityTracker_wrapper_update_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_SpatialVelocityTracker_constructor();
    void _wasgo_SpatialVelocityTracker_destructor(WasGoId p_wasgo_id);
            
}
#endif