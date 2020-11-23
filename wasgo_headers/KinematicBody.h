/* THIS FILE IS GENERATED */
#ifndef KINEMATICBODY_H
#define KINEMATICBODY_H

#include <stdint.h>

#include "Transform.h"
#include "Vector3.h"
#include "KinematicCollision.h"
#include "PhysicsBody.h"
class KinematicBody : public PhysicsBody{
public: KinematicBody();
bool  get_axis_lock(int axis);
Vector3  get_floor_normal();
Vector3  get_floor_normal();
Vector3  get_floor_velocity();
Vector3  get_floor_velocity();
float  get_safe_margin();
float  get_safe_margin();
KinematicCollision  get_slide_collision(int slide_idx);
int  get_slide_count();
int  get_slide_count();
bool  is_on_ceiling();
bool  is_on_ceiling();
bool  is_on_floor();
bool  is_on_floor();
bool  is_on_wall();
bool  is_on_wall();
KinematicCollision  move_and_collide(Vector3 rel_vec, bool infinite_inertia = true, bool exclude_raycast_shapes = true, bool test_only = false);
Vector3  move_and_slide(Vector3 linear_velocity, Vector3 up_direction = (0, 0, 0), bool stop_on_slope = false, int max_slides = 4, float floor_max_angle = 0.785398, bool infinite_inertia = true);
Vector3  move_and_slide_with_snap(Vector3 linear_velocity, Vector3 snap, Vector3 up_direction = (0, 0, 0), bool stop_on_slope = false, int max_slides = 4, float floor_max_angle = 0.785398, bool infinite_inertia = true);
void  set_axis_lock(int axis, bool lock);
void  set_safe_margin(float pixels);
bool  test_move(Transform from, Vector3 rel_vec, bool infinite_inertia = true);
};
#endif