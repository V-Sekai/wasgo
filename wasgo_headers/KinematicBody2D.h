/* THIS FILE IS GENERATED */
#ifndef KINEMATICBODY2D_H
#define KINEMATICBODY2D_H

#include <stdint.h>

#include "Vector2.h"
#include "Transform2D.h"
#include "KinematicCollision2D.h"
#include "Object.h"
#include "PhysicsBody2D.h"
class KinematicBody2D : public PhysicsBody2D{
public: KinematicBody2D();
void  _direct_state_changed(Object arg0);
Vector2  get_floor_normal();
Vector2  get_floor_normal();
Vector2  get_floor_velocity();
Vector2  get_floor_velocity();
float  get_safe_margin();
float  get_safe_margin();
KinematicCollision2D  get_slide_collision(int slide_idx);
int  get_slide_count();
int  get_slide_count();
bool  is_on_ceiling();
bool  is_on_ceiling();
bool  is_on_floor();
bool  is_on_floor();
bool  is_on_wall();
bool  is_on_wall();
bool  is_sync_to_physics_enabled();
bool  is_sync_to_physics_enabled();
KinematicCollision2D  move_and_collide(Vector2 rel_vec, bool infinite_inertia = true, bool exclude_raycast_shapes = true, bool test_only = false);
Vector2  move_and_slide(Vector2 linear_velocity, Vector2 up_direction = (0, 0), bool stop_on_slope = false, int max_slides = 4, float floor_max_angle = 0.785398, bool infinite_inertia = true);
Vector2  move_and_slide_with_snap(Vector2 linear_velocity, Vector2 snap, Vector2 up_direction = (0, 0), bool stop_on_slope = false, int max_slides = 4, float floor_max_angle = 0.785398, bool infinite_inertia = true);
void  set_safe_margin(float pixels);
void  set_sync_to_physics(bool enable);
bool  test_move(Transform2D from, Vector2 rel_vec, bool infinite_inertia = true);
};
#endif