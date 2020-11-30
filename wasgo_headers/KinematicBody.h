/* THIS FILE IS GENERATED */
#ifndef KINEMATICBODY_H
#define KINEMATICBODY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "KinematicCollision.h"
#include "PhysicsServer.h"
#include "PhysicsBody.h"
class KinematicBody : public PhysicsBody{
bool get_axis_lock(PhysicsServer::BodyAxis p_axis);
Vector3 get_floor_normal();
Vector3 get_floor_velocity();
float get_safe_margin();
KinematicCollision get_slide_collision(int p_slide_idx);
int get_slide_count();
bool is_on_ceiling();
bool is_on_floor();
bool is_on_wall();
KinematicCollision move_and_collide(Vector3 p_rel_vec, bool p_infinite_inertia = (bool) True, bool p_exclude_raycast_shapes = (bool) True, bool p_test_only = (bool) False);
Vector3 move_and_slide(Vector3 p_linear_velocity, Vector3 p_up_direction = (Vector3) (0, 0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True);
Vector3 move_and_slide_with_snap(Vector3 p_linear_velocity, Vector3 p_snap, Vector3 p_up_direction = (Vector3) (0, 0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True);
void set_axis_lock(PhysicsServer::BodyAxis p_axis, bool p_lock);
void set_safe_margin(float p_pixels);
bool test_move(Transform p_from, Vector3 p_rel_vec, bool p_infinite_inertia = (bool) True);

KinematicBody(WasGoId p_wasgo_id);
~KinematicBody();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_KinematicBody_wrapper_get_axis_lock(WasGoId wasgo_id, WasGo::WasGoId p_axis);
WasGo::WasGoId _wasgo_KinematicBody_wrapper_get_floor_normal(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_KinematicBody_wrapper_get_floor_velocity(WasGoId wasgo_id);
float _wasgo_KinematicBody_wrapper_get_safe_margin(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_KinematicBody_wrapper_get_slide_collision(WasGoId wasgo_id, int p_slide_idx);
int _wasgo_KinematicBody_wrapper_get_slide_count(WasGoId wasgo_id);
int _wasgo_KinematicBody_wrapper_is_on_ceiling(WasGoId wasgo_id);
int _wasgo_KinematicBody_wrapper_is_on_floor(WasGoId wasgo_id);
int _wasgo_KinematicBody_wrapper_is_on_wall(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_KinematicBody_wrapper_move_and_collide(WasGoId wasgo_id, WasGo::WasGoId p_rel_vec, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only);
WasGo::WasGoId _wasgo_KinematicBody_wrapper_move_and_slide(WasGoId wasgo_id, WasGo::WasGoId p_linear_velocity, WasGo::WasGoId p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
WasGo::WasGoId _wasgo_KinematicBody_wrapper_move_and_slide_with_snap(WasGoId wasgo_id, WasGo::WasGoId p_linear_velocity, WasGo::WasGoId p_snap, WasGo::WasGoId p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
void _wasgo_KinematicBody_wrapper_set_axis_lock(WasGoId wasgo_id, WasGo::WasGoId p_axis, bool p_lock);
void _wasgo_KinematicBody_wrapper_set_safe_margin(WasGoId wasgo_id, float p_pixels);
int _wasgo_KinematicBody_wrapper_test_move(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_rel_vec, bool p_infinite_inertia);
}
#endif