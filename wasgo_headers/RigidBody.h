/* THIS FILE IS GENERATED */
#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include "wasgo\wasgo.h"

#include "Basis.h"
#include "Vector3.h"
#include "Variant.h"
#include "PhysicsServer.h"
#include "PhysicsMaterial.h"
#include "PhysicsBody.h"
class RigidBody : public PhysicsBody{
public:
enum Mode{
MODE_RIGID,
MODE_STATIC,
MODE_CHARACTER,
MODE_KINEMATIC
};
void add_central_force(Vector3 p_force);
void add_force(Vector3 p_force, Vector3 p_position);
void add_torque(Vector3 p_torque);
void apply_central_impulse(Vector3 p_impulse);
void apply_impulse(Vector3 p_position, Vector3 p_impulse);
void apply_torque_impulse(Vector3 p_impulse);
float get_angular_damp();
Vector3 get_angular_velocity();
bool get_axis_lock(PhysicsServer::BodyAxis p_axis);
float get_bounce();
Array get_colliding_bodies();
float get_friction();
float get_gravity_scale();
Basis get_inverse_inertia_tensor();
float get_linear_damp();
Vector3 get_linear_velocity();
float get_mass();
int get_max_contacts_reported();
RigidBody::Mode get_mode();
PhysicsMaterial get_physics_material_override();
float get_weight();
bool is_able_to_sleep();
bool is_contact_monitor_enabled();
bool is_sleeping();
bool is_using_continuous_collision_detection();
bool is_using_custom_integrator();
void set_angular_damp(float p_angular_damp);
void set_angular_velocity(Vector3 p_angular_velocity);
void set_axis_lock(PhysicsServer::BodyAxis p_axis, bool p_lock);
void set_axis_velocity(Vector3 p_axis_velocity);
void set_bounce(float p_bounce);
void set_can_sleep(bool p_able_to_sleep);
void set_contact_monitor(bool p_enabled);
void set_friction(float p_friction);
void set_gravity_scale(float p_gravity_scale);
void set_linear_damp(float p_linear_damp);
void set_linear_velocity(Vector3 p_linear_velocity);
void set_mass(float p_mass);
void set_max_contacts_reported(int p_amount);
void set_mode(RigidBody::Mode p_mode);
void set_physics_material_override(PhysicsMaterial p_physics_material_override);
void set_sleeping(bool p_sleeping);
void set_use_continuous_collision_detection(bool p_enable);
void set_use_custom_integrator(bool p_enable);
void set_weight(float p_weight);

protected:
public:
explicit RigidBody(WasGoID p_wasgo_id);
explicit RigidBody(PhysicsBody other);
RigidBody new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RigidBody_wrapper_add_central_force(WasGoID wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_add_force(WasGoID wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_add_torque(WasGoID wasgo_id, const uint8_t * p_torque, int p_torque_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_apply_central_impulse(WasGoID wasgo_id, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_apply_impulse(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_apply_torque_impulse(WasGoID wasgo_id, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
float _wasgo_RigidBody_wrapper_get_angular_damp(WasGoID wasgo_id);
void _wasgo_RigidBody_wrapper_get_angular_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RigidBody_wrapper_get_axis_lock(WasGoID wasgo_id, WasGoID p_axis);
float _wasgo_RigidBody_wrapper_get_bounce(WasGoID wasgo_id);
WasGoID _wasgo_RigidBody_wrapper_get_colliding_bodies(WasGoID wasgo_id);
float _wasgo_RigidBody_wrapper_get_friction(WasGoID wasgo_id);
float _wasgo_RigidBody_wrapper_get_gravity_scale(WasGoID wasgo_id);
void _wasgo_RigidBody_wrapper_get_inverse_inertia_tensor(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_RigidBody_wrapper_get_linear_damp(WasGoID wasgo_id);
void _wasgo_RigidBody_wrapper_get_linear_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_RigidBody_wrapper_get_mass(WasGoID wasgo_id);
int _wasgo_RigidBody_wrapper_get_max_contacts_reported(WasGoID wasgo_id);
WasGoID _wasgo_RigidBody_wrapper_get_mode(WasGoID wasgo_id);
WasGoID _wasgo_RigidBody_wrapper_get_physics_material_override(WasGoID wasgo_id);
float _wasgo_RigidBody_wrapper_get_weight(WasGoID wasgo_id);
int _wasgo_RigidBody_wrapper_is_able_to_sleep(WasGoID wasgo_id);
int _wasgo_RigidBody_wrapper_is_contact_monitor_enabled(WasGoID wasgo_id);
int _wasgo_RigidBody_wrapper_is_sleeping(WasGoID wasgo_id);
int _wasgo_RigidBody_wrapper_is_using_continuous_collision_detection(WasGoID wasgo_id);
int _wasgo_RigidBody_wrapper_is_using_custom_integrator(WasGoID wasgo_id);
void _wasgo_RigidBody_wrapper_set_angular_damp(WasGoID wasgo_id, float p_angular_damp);
void _wasgo_RigidBody_wrapper_set_angular_velocity(WasGoID wasgo_id, const uint8_t * p_angular_velocity, int p_angular_velocity_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_set_axis_lock(WasGoID wasgo_id, WasGoID p_axis, bool p_lock);
void _wasgo_RigidBody_wrapper_set_axis_velocity(WasGoID wasgo_id, const uint8_t * p_axis_velocity, int p_axis_velocity_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_set_bounce(WasGoID wasgo_id, float p_bounce);
void _wasgo_RigidBody_wrapper_set_can_sleep(WasGoID wasgo_id, bool p_able_to_sleep);
void _wasgo_RigidBody_wrapper_set_contact_monitor(WasGoID wasgo_id, bool p_enabled);
void _wasgo_RigidBody_wrapper_set_friction(WasGoID wasgo_id, float p_friction);
void _wasgo_RigidBody_wrapper_set_gravity_scale(WasGoID wasgo_id, float p_gravity_scale);
void _wasgo_RigidBody_wrapper_set_linear_damp(WasGoID wasgo_id, float p_linear_damp);
void _wasgo_RigidBody_wrapper_set_linear_velocity(WasGoID wasgo_id, const uint8_t * p_linear_velocity, int p_linear_velocity_wasgo_buffer_size);
void _wasgo_RigidBody_wrapper_set_mass(WasGoID wasgo_id, float p_mass);
void _wasgo_RigidBody_wrapper_set_max_contacts_reported(WasGoID wasgo_id, int p_amount);
void _wasgo_RigidBody_wrapper_set_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_RigidBody_wrapper_set_physics_material_override(WasGoID wasgo_id, WasGoID p_physics_material_override);
void _wasgo_RigidBody_wrapper_set_sleeping(WasGoID wasgo_id, bool p_sleeping);
void _wasgo_RigidBody_wrapper_set_use_continuous_collision_detection(WasGoID wasgo_id, bool p_enable);
void _wasgo_RigidBody_wrapper_set_use_custom_integrator(WasGoID wasgo_id, bool p_enable);
void _wasgo_RigidBody_wrapper_set_weight(WasGoID wasgo_id, float p_weight);

    //constructor wrappers
    WasGoID _wasgo_RigidBody_constructor();
            
}
#endif