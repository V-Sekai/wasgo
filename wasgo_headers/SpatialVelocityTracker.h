/* THIS FILE IS GENERATED */
#ifndef SPATIALVELOCITYTRACKER_H
#define SPATIALVELOCITYTRACKER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
class SpatialVelocityTracker : public Reference{
public: SpatialVelocityTracker();
Vector3 get_tracked_linear_velocity();
bool is_tracking_physics_step();
void reset(Vector3 p_position);
void set_track_physics_step(bool p_enable);
void update_position(Vector3 p_position);
};
#endif