/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DDIRECTBODYSTATE_H
#define PHYSICS2DDIRECTBODYSTATE_H

#include "wasgo\wasgo.h"

#include "Transform2D.h"
#include "Physics2DDirectSpaceState.h"
#include "Vector2.h"
#include "Object.h"
#include "RID.h"
#include "Variant.h"
class Physics2DDirectBodyState : public Object{
public:
void add_central_force(Vector2 p_force);
void add_force(Vector2 p_offset, Vector2 p_force);
void add_torque(float p_torque);
void apply_central_impulse(Vector2 p_impulse);
void apply_impulse(Vector2 p_offset, Vector2 p_impulse);
void apply_torque_impulse(float p_impulse);
float get_angular_velocity();
RID get_contact_collider(int p_contact_idx);
int get_contact_collider_id(int p_contact_idx);
Object get_contact_collider_object(int p_contact_idx);
Vector2 get_contact_collider_position(int p_contact_idx);
int get_contact_collider_shape(int p_contact_idx);
Variant get_contact_collider_shape_metadata(int p_contact_idx);
Vector2 get_contact_collider_velocity_at_position(int p_contact_idx);
int get_contact_count();
Vector2 get_contact_local_normal(int p_contact_idx);
Vector2 get_contact_local_position(int p_contact_idx);
int get_contact_local_shape(int p_contact_idx);
float get_inverse_inertia();
float get_inverse_mass();
Vector2 get_linear_velocity();
Physics2DDirectSpaceState get_space_state();
float get_step();
float get_total_angular_damp();
Vector2 get_total_gravity();
float get_total_linear_damp();
Transform2D get_transform();
void integrate_forces();
bool is_sleeping();
void set_angular_velocity(float p_velocity);
void set_linear_velocity(Vector2 p_velocity);
void set_sleep_state(bool p_enabled);
void set_transform(Transform2D p_transform);
};


//Wrapper Functions
extern "C"{
void _wasgo_Physics2DDirectBodyState_wrapper_add_central_force(WasGoId wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_add_force(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_add_torque(WasGoId wasgo_id, float p_torque);
void _wasgo_Physics2DDirectBodyState_wrapper_apply_central_impulse(WasGoId wasgo_id, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_apply_impulse(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_apply_torque_impulse(WasGoId wasgo_id, float p_impulse);
float _wasgo_Physics2DDirectBodyState_wrapper_get_angular_velocity(WasGoId wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_id(WasGoId wasgo_id, int p_contact_idx);
WasGoId _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_object(WasGoId wasgo_id, int p_contact_idx);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape(WasGoId wasgo_id, int p_contact_idx);
WasGoId _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape_metadata(WasGoId wasgo_id, int p_contact_idx);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_velocity_at_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_count(WasGoId wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_shape(WasGoId wasgo_id, int p_contact_idx);
float _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_inertia(WasGoId wasgo_id);
float _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_mass(WasGoId wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_linear_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Physics2DDirectBodyState_wrapper_get_space_state(WasGoId wasgo_id);
float _wasgo_Physics2DDirectBodyState_wrapper_get_step(WasGoId wasgo_id);
float _wasgo_Physics2DDirectBodyState_wrapper_get_total_angular_damp(WasGoId wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_total_gravity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Physics2DDirectBodyState_wrapper_get_total_linear_damp(WasGoId wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DDirectBodyState_wrapper_integrate_forces(WasGoId wasgo_id);
int _wasgo_Physics2DDirectBodyState_wrapper_is_sleeping(WasGoId wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_set_angular_velocity(WasGoId wasgo_id, float p_velocity);
void _wasgo_Physics2DDirectBodyState_wrapper_set_linear_velocity(WasGoId wasgo_id, const uint8_t * p_velocity, int p_velocity_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_set_sleep_state(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Physics2DDirectBodyState_wrapper_set_transform(WasGoId wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_Physics2DDirectBodyState_constructor();
            
}
#endif