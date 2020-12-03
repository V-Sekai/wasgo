/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTBODYSTATE_H
#define PHYSICSDIRECTBODYSTATE_H

#include "wasgo\wasgo.h"

#include "PhysicsDirectSpaceState.h"
#include "RID.h"
#include "Vector3.h"
#include "Basis.h"
#include "Transform.h"
#include "Object.h"
class PhysicsDirectBodyState : public Object{
public:
void add_central_force(Vector3 p_force);
void add_force(Vector3 p_force, Vector3 p_position);
void add_torque(Vector3 p_torque);
void apply_central_impulse(Vector3 p_j);
void apply_impulse(Vector3 p_position, Vector3 p_j);
void apply_torque_impulse(Vector3 p_j);
Vector3 get_angular_velocity();
Vector3 get_center_of_mass();
RID get_contact_collider(int p_contact_idx);
int get_contact_collider_id(int p_contact_idx);
Object get_contact_collider_object(int p_contact_idx);
Vector3 get_contact_collider_position(int p_contact_idx);
int get_contact_collider_shape(int p_contact_idx);
Vector3 get_contact_collider_velocity_at_position(int p_contact_idx);
int get_contact_count();
float get_contact_impulse(int p_contact_idx);
Vector3 get_contact_local_normal(int p_contact_idx);
Vector3 get_contact_local_position(int p_contact_idx);
int get_contact_local_shape(int p_contact_idx);
Vector3 get_inverse_inertia();
float get_inverse_mass();
Vector3 get_linear_velocity();
Basis get_principal_inertia_axes();
PhysicsDirectSpaceState get_space_state();
float get_step();
float get_total_angular_damp();
Vector3 get_total_gravity();
float get_total_linear_damp();
Transform get_transform();
void integrate_forces();
bool is_sleeping();
void set_angular_velocity(Vector3 p_velocity);
void set_linear_velocity(Vector3 p_velocity);
void set_sleep_state(bool p_enabled);
void set_transform(Transform p_transform);
};


//Wrapper Functions
extern "C"{
void _wasgo_PhysicsDirectBodyState_wrapper_add_central_force(WasGoId wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_add_force(WasGoId wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_add_torque(WasGoId wasgo_id, const uint8_t * p_torque, int p_torque_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_apply_central_impulse(WasGoId wasgo_id, const uint8_t * p_j, int p_j_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_apply_impulse(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_j, int p_j_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_apply_torque_impulse(WasGoId wasgo_id, const uint8_t * p_j, int p_j_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_angular_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_center_of_mass(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_id(WasGoId wasgo_id, int p_contact_idx);
WasGoId _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_object(WasGoId wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_shape(WasGoId wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_velocity_at_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_count(WasGoId wasgo_id);
float _wasgo_PhysicsDirectBodyState_wrapper_get_contact_impulse(WasGoId wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_shape(WasGoId wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_inverse_inertia(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_PhysicsDirectBodyState_wrapper_get_inverse_mass(WasGoId wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_get_linear_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_principal_inertia_axes(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_PhysicsDirectBodyState_wrapper_get_space_state(WasGoId wasgo_id);
float _wasgo_PhysicsDirectBodyState_wrapper_get_step(WasGoId wasgo_id);
float _wasgo_PhysicsDirectBodyState_wrapper_get_total_angular_damp(WasGoId wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_get_total_gravity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_PhysicsDirectBodyState_wrapper_get_total_linear_damp(WasGoId wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_integrate_forces(WasGoId wasgo_id);
int _wasgo_PhysicsDirectBodyState_wrapper_is_sleeping(WasGoId wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_set_angular_velocity(WasGoId wasgo_id, const uint8_t * p_velocity, int p_velocity_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_set_linear_velocity(WasGoId wasgo_id, const uint8_t * p_velocity, int p_velocity_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_set_sleep_state(WasGoId wasgo_id, bool p_enabled);
void _wasgo_PhysicsDirectBodyState_wrapper_set_transform(WasGoId wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_PhysicsDirectBodyState_constructor();
    void _wasgo_PhysicsDirectBodyState_destructor(WasGoId p_wasgo_id);
            
}
#endif