/* THIS FILE IS GENERATED */
#ifndef STATICBODY_H
#define STATICBODY_H

#include "wasgo\wasgo.h"

#include "PhysicsBody.h"
#include "PhysicsMaterial.h"
#include "Vector3.h"
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
StaticBody(WasGoId p_wasgo_id);
public:
StaticBody();
~StaticBody();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_StaticBody_wrapper_get_bounce(WasGoId wasgo_id);
void _wasgo_StaticBody_wrapper_get_constant_angular_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_StaticBody_wrapper_get_constant_linear_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_StaticBody_wrapper_get_friction(WasGoId wasgo_id);
WasGoId _wasgo_StaticBody_wrapper_get_physics_material_override(WasGoId wasgo_id);
void _wasgo_StaticBody_wrapper_set_bounce(WasGoId wasgo_id, float p_bounce);
void _wasgo_StaticBody_wrapper_set_constant_angular_velocity(WasGoId wasgo_id, const uint8_t * p_vel, int p_vel_wasgo_buffer_size);
void _wasgo_StaticBody_wrapper_set_constant_linear_velocity(WasGoId wasgo_id, const uint8_t * p_vel, int p_vel_wasgo_buffer_size);
void _wasgo_StaticBody_wrapper_set_friction(WasGoId wasgo_id, float p_friction);
void _wasgo_StaticBody_wrapper_set_physics_material_override(WasGoId wasgo_id, WasGoId p_physics_material_override);

    //constructor and destructor wrappers
    WasGoId _wasgo_StaticBody_constructor();
    void _wasgo_StaticBody_destructor(WasGoId p_wasgo_id);
            
}
#endif