/* THIS FILE IS GENERATED */
#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include <stdint.h>

#include "PhysicsMaterial.h"
#include "PhysicsBody.h"
#include "Object.h"
#include "Vector3.h"
#include "PhysicsDirectBodyState.h"
#include "Variant.h"
class RigidBody : public PhysicsBody{
public: RigidBody();
enum Mode{
MODE_RIGID: 0,
MODE_STATIC: 1,
MODE_CHARACTER: 2,
};
void  _body_enter_tree(int arg0);
void  _body_exit_tree(int arg0);
void  _direct_state_changed(Object arg0);
void  _integrate_forces(PhysicsDirectBodyState state);
void  _reload_physics_characteristics();
void  _reload_physics_characteristics();
void  add_central_force(Vector3 force);
void  add_force(Vector3 force, Vector3 position);
void  add_torque(Vector3 torque);
void  apply_central_impulse(Vector3 impulse);
void  apply_impulse(Vector3 position, Vector3 impulse);
void  apply_torque_impulse(Vector3 impulse);
float  get_angular_damp();
float  get_angular_damp();
Vector3  get_angular_velocity();
Vector3  get_angular_velocity();
bool  get_axis_lock(int axis);
float  get_bounce();
float  get_bounce();
Array  get_colliding_bodies();
Array  get_colliding_bodies();
float  get_friction();
float  get_friction();
float  get_gravity_scale();
float  get_gravity_scale();
float  get_linear_damp();
float  get_linear_damp();
Vector3  get_linear_velocity();
Vector3  get_linear_velocity();
float  get_mass();
float  get_mass();
int  get_max_contacts_reported();
int  get_max_contacts_reported();
enum.RigidBody::Mode  get_mode();
enum.RigidBody::Mode  get_mode();
PhysicsMaterial  get_physics_material_override();
PhysicsMaterial  get_physics_material_override();
float  get_weight();
float  get_weight();
bool  is_able_to_sleep();
bool  is_able_to_sleep();
bool  is_contact_monitor_enabled();
bool  is_contact_monitor_enabled();
bool  is_sleeping();
bool  is_sleeping();
bool  is_using_continuous_collision_detection();
bool  is_using_continuous_collision_detection();
bool  is_using_custom_integrator();
bool  is_using_custom_integrator();
void  set_angular_damp(float angular_damp);
void  set_angular_velocity(Vector3 angular_velocity);
void  set_axis_lock(int axis, bool lock);
void  set_axis_velocity(Vector3 axis_velocity);
void  set_bounce(float bounce);
void  set_can_sleep(bool able_to_sleep);
void  set_contact_monitor(bool enabled);
void  set_friction(float friction);
void  set_gravity_scale(float gravity_scale);
void  set_linear_damp(float linear_damp);
void  set_linear_velocity(Vector3 linear_velocity);
void  set_mass(float mass);
void  set_max_contacts_reported(int amount);
void  set_mode(int mode);
void  set_physics_material_override(PhysicsMaterial physics_material_override);
void  set_sleeping(bool sleeping);
void  set_use_continuous_collision_detection(bool enable);
void  set_use_custom_integrator(bool enable);
void  set_weight(float weight);
};
#endif