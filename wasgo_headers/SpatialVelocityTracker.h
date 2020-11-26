/* THIS FILE IS GENERATED */
#ifndef SPATIALVELOCITYTRACKER_H
#define SPATIALVELOCITYTRACKER_H

#include <stdint.h>

#include "Vector3.h"
#include "Reference.h"
class SpatialVelocityTracker : public Reference{
public: SpatialVelocityTracker();
Vector3  get_tracked_linear_velocity();
Vector3  get_tracked_linear_velocity();
bool  is_tracking_physics_step();
bool  is_tracking_physics_step();
void  reset(Vector3 position);
void  set_track_physics_step(bool enable);
void  update_position(Vector3 position);
};
#endif