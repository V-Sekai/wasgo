/* THIS FILE IS GENERATED */
#ifndef STATICBODY_H
#define STATICBODY_H

#include "stdint.h"
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

StaticBody(WasGoId p_wasgo_id);
~StaticBody();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_StaticBody_wrapper_get_bounce(WasGoId wasgo_id);
WasGoId _wasgo_StaticBody_wrapper_get_constant_angular_velocity(WasGoId wasgo_id);
WasGoId _wasgo_StaticBody_wrapper_get_constant_linear_velocity(WasGoId wasgo_id);
float _wasgo_StaticBody_wrapper_get_friction(WasGoId wasgo_id);
WasGoId _wasgo_StaticBody_wrapper_get_physics_material_override(WasGoId wasgo_id);
void _wasgo_StaticBody_wrapper_set_bounce(WasGoId wasgo_id, float p_bounce);
void _wasgo_StaticBody_wrapper_set_constant_angular_velocity(WasGoId wasgo_id, WasGoId p_vel);
void _wasgo_StaticBody_wrapper_set_constant_linear_velocity(WasGoId wasgo_id, WasGoId p_vel);
void _wasgo_StaticBody_wrapper_set_friction(WasGoId wasgo_id, float p_friction);
void _wasgo_StaticBody_wrapper_set_physics_material_override(WasGoId wasgo_id, WasGoId p_physics_material_override);
}
#endif