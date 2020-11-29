/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTBODYSTATE_H
#define PHYSICSDIRECTBODYSTATE_H

#include "stdint.h"

#include "Variant.h"
#include "PhysicsDirectSpaceState.h"
#include "Object.h"
class PhysicsDirectBodyState : public Object{
public: PhysicsDirectBodyState();
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
#endif