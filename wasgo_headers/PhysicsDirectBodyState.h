/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTBODYSTATE_H
#define PHYSICSDIRECTBODYSTATE_H

#include "wasgo\wasgoid.h"

#include "Vector3.h"
#include "Object.h"
#include "PhysicsDirectSpaceState.h"
#include "Transform.h"
#include "RID.h"
#include "Basis.h"
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

protected:
public:
explicit PhysicsDirectBodyState(WasGoID p_wasgo_id);
explicit PhysicsDirectBodyState(Object other);
PhysicsDirectBodyState();
PhysicsDirectBodyState new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PhysicsDirectBodyState_wrapper_add_central_force(WasGoID wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_add_force(WasGoID wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_add_torque(WasGoID wasgo_id, const uint8_t * p_torque, int p_torque_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_apply_central_impulse(WasGoID wasgo_id, const uint8_t * p_j, int p_j_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_apply_impulse(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_j, int p_j_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_apply_torque_impulse(WasGoID wasgo_id, const uint8_t * p_j, int p_j_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_angular_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_center_of_mass(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_id(WasGoID wasgo_id, int p_contact_idx);
WasGoID _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_object(WasGoID wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_shape(WasGoID wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_velocity_at_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_count(WasGoID wasgo_id);
float _wasgo_PhysicsDirectBodyState_wrapper_get_contact_impulse(WasGoID wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_contact_idx);
int _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_shape(WasGoID wasgo_id, int p_contact_idx);
void _wasgo_PhysicsDirectBodyState_wrapper_get_inverse_inertia(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_PhysicsDirectBodyState_wrapper_get_inverse_mass(WasGoID wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_get_linear_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_get_principal_inertia_axes(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_PhysicsDirectBodyState_wrapper_get_space_state(WasGoID wasgo_id);
float _wasgo_PhysicsDirectBodyState_wrapper_get_step(WasGoID wasgo_id);
float _wasgo_PhysicsDirectBodyState_wrapper_get_total_angular_damp(WasGoID wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_get_total_gravity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_PhysicsDirectBodyState_wrapper_get_total_linear_damp(WasGoID wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsDirectBodyState_wrapper_integrate_forces(WasGoID wasgo_id);
int _wasgo_PhysicsDirectBodyState_wrapper_is_sleeping(WasGoID wasgo_id);
void _wasgo_PhysicsDirectBodyState_wrapper_set_angular_velocity(WasGoID wasgo_id, const uint8_t * p_velocity, int p_velocity_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_set_linear_velocity(WasGoID wasgo_id, const uint8_t * p_velocity, int p_velocity_wasgo_buffer_size);
void _wasgo_PhysicsDirectBodyState_wrapper_set_sleep_state(WasGoID wasgo_id, bool p_enabled);
void _wasgo_PhysicsDirectBodyState_wrapper_set_transform(WasGoID wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_PhysicsDirectBodyState_constructor();
            
}
#endif