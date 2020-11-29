/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DDIRECTBODYSTATE_H
#define PHYSICS2DDIRECTBODYSTATE_H

#include "stdint.h"

#include "Variant.h"
#include "Physics2DDirectSpaceState.h"
#include "Object.h"
class Physics2DDirectBodyState : public Object{
public: Physics2DDirectBodyState();
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
#endif