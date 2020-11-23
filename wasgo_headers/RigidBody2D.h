/* THIS FILE IS GENERATED */
#ifndef RIGIDBODY2D_H
#define RIGIDBODY2D_H

#include <stdint.h>

#include "Vector2.h"
#include "Physics2DDirectBodyState.h"
#include "Physics2DTestMotionResult.h"
#include "Variant.h"
#include "Object.h"
#include "PhysicsBody2D.h"
#include "PhysicsMaterial.h"
class RigidBody2D : public PhysicsBody2D{
public: RigidBody2D();
enum Mode{
MODE_RIGID: 0,
MODE_STATIC: 1,
MODE_CHARACTER: 2,
};
enum CCDMode{
CCD_MODE_DISABLED: 0,
CCD_MODE_CAST_RAY: 1,
};
void  _body_enter_tree(int arg0);
void  _body_exit_tree(int arg0);
void  _direct_state_changed(Object arg0);
void  _integrate_forces(Physics2DDirectBodyState state);
void  _reload_physics_characteristics();
void  _reload_physics_characteristics();
void  add_central_force(Vector2 force);
void  add_force(Vector2 offset, Vector2 force);
void  add_torque(float torque);
void  apply_central_impulse(Vector2 impulse);
void  apply_impulse(Vector2 offset, Vector2 impulse);
void  apply_torque_impulse(float torque);
float  get_angular_damp();
float  get_angular_damp();
float  get_angular_velocity();
float  get_angular_velocity();
Vector2  get_applied_force();
Vector2  get_applied_force();
float  get_applied_torque();
float  get_applied_torque();
float  get_bounce();
float  get_bounce();
Array  get_colliding_bodies();
Array  get_colliding_bodies();
enum.RigidBody2D::CCDMode  get_continuous_collision_detection_mode();
enum.RigidBody2D::CCDMode  get_continuous_collision_detection_mode();
float  get_friction();
float  get_friction();
float  get_gravity_scale();
float  get_gravity_scale();
float  get_inertia();
float  get_inertia();
float  get_linear_damp();
float  get_linear_damp();
Vector2  get_linear_velocity();
Vector2  get_linear_velocity();
float  get_mass();
float  get_mass();
int  get_max_contacts_reported();
int  get_max_contacts_reported();
enum.RigidBody2D::Mode  get_mode();
enum.RigidBody2D::Mode  get_mode();
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
bool  is_using_custom_integrator();
bool  is_using_custom_integrator();
void  set_angular_damp(float angular_damp);
void  set_angular_velocity(float angular_velocity);
void  set_applied_force(Vector2 force);
void  set_applied_torque(float torque);
void  set_axis_velocity(Vector2 axis_velocity);
void  set_bounce(float bounce);
void  set_can_sleep(bool able_to_sleep);
void  set_contact_monitor(bool enabled);
void  set_continuous_collision_detection_mode(int mode);
void  set_friction(float friction);
void  set_gravity_scale(float gravity_scale);
void  set_inertia(float inertia);
void  set_linear_damp(float linear_damp);
void  set_linear_velocity(Vector2 linear_velocity);
void  set_mass(float mass);
void  set_max_contacts_reported(int amount);
void  set_mode(int mode);
void  set_physics_material_override(PhysicsMaterial physics_material_override);
void  set_sleeping(bool sleeping);
void  set_use_custom_integrator(bool enable);
void  set_weight(float weight);
bool  test_motion(Vector2 motion, bool infinite_inertia = true, float margin = 0.08, Physics2DTestMotionResult result = null);
};
#endif