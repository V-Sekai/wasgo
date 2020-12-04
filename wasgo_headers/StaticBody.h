/* THIS FILE IS GENERATED */
#ifndef STATICBODY_H
#define STATICBODY_H

#include "wasgo\wasgo.h"

#include "PhysicsBody.h"
#include "Vector3.h"
#include "PhysicsMaterial.h"
class StaticBody : public PhysicsBody{
public:
float get_bounce();
Vector3 get_constant_angular_velocity();
Vector3 get_constant_linear_velocity();
float get_friction();
PhysicsMaterial get_physics_material_override();
void set_bounce(float p_bounce);
void set_constant_angular_velocity(Vector3 p_vel);
void set_constant_linear_velocity(Vector3 p_vel);
void set_friction(float p_friction);
void set_physics_material_override(PhysicsMaterial p_physics_material_override);

protected:
public:
explicit StaticBody(WasGoID p_wasgo_id);
explicit StaticBody(PhysicsBody other);
StaticBody new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_StaticBody_wrapper_get_bounce(WasGoID wasgo_id);
void _wasgo_StaticBody_wrapper_get_constant_angular_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_StaticBody_wrapper_get_constant_linear_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_StaticBody_wrapper_get_friction(WasGoID wasgo_id);
WasGoID _wasgo_StaticBody_wrapper_get_physics_material_override(WasGoID wasgo_id);
void _wasgo_StaticBody_wrapper_set_bounce(WasGoID wasgo_id, float p_bounce);
void _wasgo_StaticBody_wrapper_set_constant_angular_velocity(WasGoID wasgo_id, const uint8_t * p_vel, int p_vel_wasgo_buffer_size);
void _wasgo_StaticBody_wrapper_set_constant_linear_velocity(WasGoID wasgo_id, const uint8_t * p_vel, int p_vel_wasgo_buffer_size);
void _wasgo_StaticBody_wrapper_set_friction(WasGoID wasgo_id, float p_friction);
void _wasgo_StaticBody_wrapper_set_physics_material_override(WasGoID wasgo_id, WasGoID p_physics_material_override);

    //constructor wrappers
    WasGoID _wasgo_StaticBody_constructor();
            
}
#endif