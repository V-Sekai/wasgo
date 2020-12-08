/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DDIRECTBODYSTATE_H
#define PHYSICS2DDIRECTBODYSTATE_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "Object.h"
#include "Variant.h"
#include "Physics2DDirectSpaceState.h"
#include "Transform2D.h"
#include "RID.h"
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

protected:
public:
explicit Physics2DDirectBodyState(WasGoID p_wasgo_id);
explicit Physics2DDirectBodyState(Object other);
Physics2DDirectBodyState();
Physics2DDirectBodyState new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Physics2DDirectBodyState_wrapper_add_central_force(WasGoID wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_add_force(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_add_torque(WasGoID wasgo_id, float p_torque);
void _wasgo_Physics2DDirectBodyState_wrapper_apply_central_impulse(WasGoID wasgo_id, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_apply_impulse(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_apply_torque_impulse(WasGoID wasgo_id, float p_impulse);
float _wasgo_Physics2DDirectBodyState_wrapper_get_angular_velocity(WasGoID wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_id(WasGoID wasgo_id, int p_contact_idx);
WasGoID _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_object(WasGoID wasgo_id, int p_contact_idx);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape(WasGoID wasgo_id, int p_contact_idx);
WasGoID _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape_metadata(WasGoID wasgo_id, int p_contact_idx);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_velocity_at_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_count(WasGoID wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
void _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_shape(WasGoID wasgo_id, int p_contact_idx);
float _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_inertia(WasGoID wasgo_id);
float _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_mass(WasGoID wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_linear_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Physics2DDirectBodyState_wrapper_get_space_state(WasGoID wasgo_id);
float _wasgo_Physics2DDirectBodyState_wrapper_get_step(WasGoID wasgo_id);
float _wasgo_Physics2DDirectBodyState_wrapper_get_total_angular_damp(WasGoID wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_total_gravity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Physics2DDirectBodyState_wrapper_get_total_linear_damp(WasGoID wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DDirectBodyState_wrapper_integrate_forces(WasGoID wasgo_id);
int _wasgo_Physics2DDirectBodyState_wrapper_is_sleeping(WasGoID wasgo_id);
void _wasgo_Physics2DDirectBodyState_wrapper_set_angular_velocity(WasGoID wasgo_id, float p_velocity);
void _wasgo_Physics2DDirectBodyState_wrapper_set_linear_velocity(WasGoID wasgo_id, const uint8_t * p_velocity, int p_velocity_wasgo_buffer_size);
void _wasgo_Physics2DDirectBodyState_wrapper_set_sleep_state(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Physics2DDirectBodyState_wrapper_set_transform(WasGoID wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Physics2DDirectBodyState_constructor();
            
}
#endif