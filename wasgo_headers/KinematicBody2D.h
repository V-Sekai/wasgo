/* THIS FILE IS GENERATED */
#ifndef KINEMATICBODY2D_H
#define KINEMATICBODY2D_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "PhysicsBody2D.h"
#include "KinematicCollision2D.h"
#include "Transform2D.h"
class KinematicBody2D : public PhysicsBody2D{
public:
Vector2 get_floor_normal();
Vector2 get_floor_velocity();
float get_safe_margin();
KinematicCollision2D get_slide_collision(int p_slide_idx);
int get_slide_count();
bool is_on_ceiling();
bool is_on_floor();
bool is_on_wall();
bool is_sync_to_physics_enabled();
KinematicCollision2D move_and_collide(Vector2 p_rel_vec, bool p_infinite_inertia = (bool) true, bool p_exclude_raycast_shapes = (bool) true, bool p_test_only = (bool) false);
Vector2 move_and_slide(Vector2 p_linear_velocity, Vector2 p_up_direction = Vector2(0, 0), bool p_stop_on_slope = (bool) false, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) true);
Vector2 move_and_slide_with_snap(Vector2 p_linear_velocity, Vector2 p_snap, Vector2 p_up_direction = Vector2(0, 0), bool p_stop_on_slope = (bool) false, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) true);
void set_safe_margin(float p_pixels);
void set_sync_to_physics(bool p_enable);
bool test_move(Transform2D p_from, Vector2 p_rel_vec, bool p_infinite_inertia = (bool) true);

protected:
public:
explicit KinematicBody2D(WasGoID p_wasgo_id);
explicit KinematicBody2D(PhysicsBody2D other);
KinematicBody2D();
KinematicBody2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_KinematicBody2D_wrapper_get_floor_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_KinematicBody2D_wrapper_get_floor_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_KinematicBody2D_wrapper_get_safe_margin(WasGoID wasgo_id);
WasGoID _wasgo_KinematicBody2D_wrapper_get_slide_collision(WasGoID wasgo_id, int p_slide_idx);
int _wasgo_KinematicBody2D_wrapper_get_slide_count(WasGoID wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_on_ceiling(WasGoID wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_on_floor(WasGoID wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_on_wall(WasGoID wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_sync_to_physics_enabled(WasGoID wasgo_id);
WasGoID _wasgo_KinematicBody2D_wrapper_move_and_collide(WasGoID wasgo_id, const uint8_t * p_rel_vec, int p_rel_vec_wasgo_buffer_size, int wasgo_throwaway, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only);
void _wasgo_KinematicBody2D_wrapper_move_and_slide(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_linear_velocity, int p_linear_velocity_wasgo_buffer_size, const uint8_t * p_up_direction, int p_up_direction_wasgo_buffer_size, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
void _wasgo_KinematicBody2D_wrapper_move_and_slide_with_snap(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_linear_velocity, int p_linear_velocity_wasgo_buffer_size, const uint8_t * p_snap, int p_snap_wasgo_buffer_size, const uint8_t * p_up_direction, int p_up_direction_wasgo_buffer_size, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
void _wasgo_KinematicBody2D_wrapper_set_safe_margin(WasGoID wasgo_id, float p_pixels);
void _wasgo_KinematicBody2D_wrapper_set_sync_to_physics(WasGoID wasgo_id, bool p_enable);
int _wasgo_KinematicBody2D_wrapper_test_move(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_rel_vec, int p_rel_vec_wasgo_buffer_size, bool p_infinite_inertia);

    //constructor wrappers
    WasGoID _wasgo_KinematicBody2D_constructor();
            
}
#endif