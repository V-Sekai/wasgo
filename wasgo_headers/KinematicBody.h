/* THIS FILE IS GENERATED */
#ifndef KINEMATICBODY_H
#define KINEMATICBODY_H

#include "wasgo\wasgo.h"

#include "Vector3.h"
#include "PhysicsServer.h"
#include "Transform.h"
#include "KinematicCollision.h"
#include "PhysicsBody.h"
class KinematicBody : public PhysicsBody{
public:
bool get_axis_lock(PhysicsServer::BodyAxis p_axis);
Vector3 get_floor_normal();
Vector3 get_floor_velocity();
float get_safe_margin();
KinematicCollision get_slide_collision(int p_slide_idx);
int get_slide_count();
bool is_on_ceiling();
bool is_on_floor();
bool is_on_wall();
KinematicCollision move_and_collide(Vector3 p_rel_vec, bool p_infinite_inertia = (bool) true, bool p_exclude_raycast_shapes = (bool) true, bool p_test_only = (bool) false);
Vector3 move_and_slide(Vector3 p_linear_velocity, Vector3 p_up_direction = Vector3((0, 0, 0)), bool p_stop_on_slope = (bool) false, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) true);
Vector3 move_and_slide_with_snap(Vector3 p_linear_velocity, Vector3 p_snap, Vector3 p_up_direction = Vector3((0, 0, 0)), bool p_stop_on_slope = (bool) false, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) true);
void set_axis_lock(PhysicsServer::BodyAxis p_axis, bool p_lock);
void set_safe_margin(float p_pixels);
bool test_move(Transform p_from, Vector3 p_rel_vec, bool p_infinite_inertia = (bool) true);

protected:
public:
explicit KinematicBody(WasGoID p_wasgo_id);
explicit KinematicBody(PhysicsBody other);
KinematicBody new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_KinematicBody_wrapper_get_axis_lock(WasGoID wasgo_id, WasGoID p_axis);
void _wasgo_KinematicBody_wrapper_get_floor_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicBody_wrapper_get_floor_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_KinematicBody_wrapper_get_safe_margin(WasGoID wasgo_id);
WasGoID _wasgo_KinematicBody_wrapper_get_slide_collision(WasGoID wasgo_id, int p_slide_idx);
int _wasgo_KinematicBody_wrapper_get_slide_count(WasGoID wasgo_id);
int _wasgo_KinematicBody_wrapper_is_on_ceiling(WasGoID wasgo_id);
int _wasgo_KinematicBody_wrapper_is_on_floor(WasGoID wasgo_id);
int _wasgo_KinematicBody_wrapper_is_on_wall(WasGoID wasgo_id);
WasGoID _wasgo_KinematicBody_wrapper_move_and_collide(WasGoID wasgo_id, const uint8_t * p_rel_vec, int p_rel_vec_wasgo_buffer_size, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only);
void _wasgo_KinematicBody_wrapper_move_and_slide(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_linear_velocity, int p_linear_velocity_wasgo_buffer_size, const uint8_t * p_up_direction, int p_up_direction_wasgo_buffer_size, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
void _wasgo_KinematicBody_wrapper_move_and_slide_with_snap(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_linear_velocity, int p_linear_velocity_wasgo_buffer_size, const uint8_t * p_snap, int p_snap_wasgo_buffer_size, const uint8_t * p_up_direction, int p_up_direction_wasgo_buffer_size, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
void _wasgo_KinematicBody_wrapper_set_axis_lock(WasGoID wasgo_id, WasGoID p_axis, bool p_lock);
void _wasgo_KinematicBody_wrapper_set_safe_margin(WasGoID wasgo_id, float p_pixels);
int _wasgo_KinematicBody_wrapper_test_move(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_rel_vec, int p_rel_vec_wasgo_buffer_size, bool p_infinite_inertia);

    //constructor wrappers
    WasGoID _wasgo_KinematicBody_constructor();
            
}
#endif