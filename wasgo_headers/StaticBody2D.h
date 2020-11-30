/* THIS FILE IS GENERATED */
#ifndef STATICBODY2D_H
#define STATICBODY2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "PhysicsMaterial.h"
#include "PhysicsBody2D.h"
class StaticBody2D : public PhysicsBody2D{
float get_bounce();
float get_constant_angular_velocity();
Vector2 get_constant_linear_velocity();
float get_friction();
PhysicsMaterial get_physics_material_override();
void set_bounce(float p_bounce);
void set_constant_angular_velocity(float p_vel);
void set_constant_linear_velocity(Vector2 p_vel);
void set_friction(float p_friction);
void set_physics_material_override(PhysicsMaterial p_physics_material_override);

StaticBody2D(WasGoId p_wasgo_id);
~StaticBody2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_StaticBody2D_wrapper_get_bounce(WasGoId wasgo_id);
float _wasgo_StaticBody2D_wrapper_get_constant_angular_velocity(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StaticBody2D_wrapper_get_constant_linear_velocity(WasGoId wasgo_id);
float _wasgo_StaticBody2D_wrapper_get_friction(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StaticBody2D_wrapper_get_physics_material_override(WasGoId wasgo_id);
void _wasgo_StaticBody2D_wrapper_set_bounce(WasGoId wasgo_id, float p_bounce);
void _wasgo_StaticBody2D_wrapper_set_constant_angular_velocity(WasGoId wasgo_id, float p_vel);
void _wasgo_StaticBody2D_wrapper_set_constant_linear_velocity(WasGoId wasgo_id, WasGo::WasGoId p_vel);
void _wasgo_StaticBody2D_wrapper_set_friction(WasGoId wasgo_id, float p_friction);
void _wasgo_StaticBody2D_wrapper_set_physics_material_override(WasGoId wasgo_id, WasGo::WasGoId p_physics_material_override);
}
#endif