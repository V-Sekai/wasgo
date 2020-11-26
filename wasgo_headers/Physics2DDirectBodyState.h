/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DDIRECTBODYSTATE_H
#define PHYSICS2DDIRECTBODYSTATE_H

#include <stdint.h>

#include "Vector2.h"
#include "RID.h"
#include "Transform2D.h"
#include "Object.h"
#include "Physics2DDirectSpaceState.h"
#include "Variant.h"
class Physics2DDirectBodyState : public Object{
public: Physics2DDirectBodyState();
void  add_central_force(Vector2 force);
void  add_force(Vector2 offset, Vector2 force);
void  add_torque(float torque);
void  apply_central_impulse(Vector2 impulse);
void  apply_impulse(Vector2 offset, Vector2 impulse);
void  apply_torque_impulse(float impulse);
float  get_angular_velocity();
float  get_angular_velocity();
RID  get_contact_collider(int contact_idx);
int  get_contact_collider_id(int contact_idx);
Object  get_contact_collider_object(int contact_idx);
Vector2  get_contact_collider_position(int contact_idx);
int  get_contact_collider_shape(int contact_idx);
Variant  get_contact_collider_shape_metadata(int contact_idx);
Vector2  get_contact_collider_velocity_at_position(int contact_idx);
int  get_contact_count();
int  get_contact_count();
Vector2  get_contact_local_normal(int contact_idx);
Vector2  get_contact_local_position(int contact_idx);
int  get_contact_local_shape(int contact_idx);
float  get_inverse_inertia();
float  get_inverse_inertia();
float  get_inverse_mass();
float  get_inverse_mass();
Vector2  get_linear_velocity();
Vector2  get_linear_velocity();
Physics2DDirectSpaceState  get_space_state();
Physics2DDirectSpaceState  get_space_state();
float  get_step();
float  get_step();
float  get_total_angular_damp();
float  get_total_angular_damp();
Vector2  get_total_gravity();
Vector2  get_total_gravity();
float  get_total_linear_damp();
float  get_total_linear_damp();
Transform2D  get_transform();
Transform2D  get_transform();
void  integrate_forces();
void  integrate_forces();
bool  is_sleeping();
bool  is_sleeping();
void  set_angular_velocity(float velocity);
void  set_linear_velocity(Vector2 velocity);
void  set_sleep_state(bool enabled);
void  set_transform(Transform2D transform);
};
#endif