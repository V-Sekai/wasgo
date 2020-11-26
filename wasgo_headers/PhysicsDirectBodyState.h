/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTBODYSTATE_H
#define PHYSICSDIRECTBODYSTATE_H

#include <stdint.h>

#include "Basis.h"
#include "Vector3.h"
#include "PhysicsDirectSpaceState.h"
#include "Transform.h"
#include "RID.h"
#include "Object.h"
class PhysicsDirectBodyState : public Object{
public: PhysicsDirectBodyState();
void  add_central_force(Vector3 force);
void  add_force(Vector3 force, Vector3 position);
void  add_torque(Vector3 torque);
void  apply_central_impulse(Vector3 j);
void  apply_impulse(Vector3 position, Vector3 j);
void  apply_torque_impulse(Vector3 j);
Vector3  get_angular_velocity();
Vector3  get_angular_velocity();
Vector3  get_center_of_mass();
Vector3  get_center_of_mass();
RID  get_contact_collider(int contact_idx);
int  get_contact_collider_id(int contact_idx);
Object  get_contact_collider_object(int contact_idx);
Vector3  get_contact_collider_position(int contact_idx);
int  get_contact_collider_shape(int contact_idx);
Vector3  get_contact_collider_velocity_at_position(int contact_idx);
int  get_contact_count();
int  get_contact_count();
float  get_contact_impulse(int contact_idx);
Vector3  get_contact_local_normal(int contact_idx);
Vector3  get_contact_local_position(int contact_idx);
int  get_contact_local_shape(int contact_idx);
Vector3  get_inverse_inertia();
Vector3  get_inverse_inertia();
float  get_inverse_mass();
float  get_inverse_mass();
Vector3  get_linear_velocity();
Vector3  get_linear_velocity();
Basis  get_principal_inertia_axes();
Basis  get_principal_inertia_axes();
PhysicsDirectSpaceState  get_space_state();
PhysicsDirectSpaceState  get_space_state();
float  get_step();
float  get_step();
float  get_total_angular_damp();
float  get_total_angular_damp();
Vector3  get_total_gravity();
Vector3  get_total_gravity();
float  get_total_linear_damp();
float  get_total_linear_damp();
Transform  get_transform();
Transform  get_transform();
void  integrate_forces();
void  integrate_forces();
bool  is_sleeping();
bool  is_sleeping();
void  set_angular_velocity(Vector3 velocity);
void  set_linear_velocity(Vector3 velocity);
void  set_sleep_state(bool enabled);
void  set_transform(Transform transform);
};
#endif