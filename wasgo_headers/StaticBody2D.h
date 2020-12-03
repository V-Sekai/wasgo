/* THIS FILE IS GENERATED */
#ifndef STATICBODY2D_H
#define STATICBODY2D_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "PhysicsBody2D.h"
#include "PhysicsMaterial.h"
class StaticBody2D : public PhysicsBody2D{
public:
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

protected:
StaticBody2D(WasGoId p_wasgo_id);
public:
StaticBody2D();
~StaticBody2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_StaticBody2D_wrapper_get_bounce(WasGoId wasgo_id);
float _wasgo_StaticBody2D_wrapper_get_constant_angular_velocity(WasGoId wasgo_id);
void _wasgo_StaticBody2D_wrapper_get_constant_linear_velocity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_StaticBody2D_wrapper_get_friction(WasGoId wasgo_id);
WasGoId _wasgo_StaticBody2D_wrapper_get_physics_material_override(WasGoId wasgo_id);
void _wasgo_StaticBody2D_wrapper_set_bounce(WasGoId wasgo_id, float p_bounce);
void _wasgo_StaticBody2D_wrapper_set_constant_angular_velocity(WasGoId wasgo_id, float p_vel);
void _wasgo_StaticBody2D_wrapper_set_constant_linear_velocity(WasGoId wasgo_id, const uint8_t * p_vel, int p_vel_wasgo_buffer_size);
void _wasgo_StaticBody2D_wrapper_set_friction(WasGoId wasgo_id, float p_friction);
void _wasgo_StaticBody2D_wrapper_set_physics_material_override(WasGoId wasgo_id, WasGoId p_physics_material_override);

    //constructor and destructor wrappers
    WasGoId _wasgo_StaticBody2D_constructor();
    void _wasgo_StaticBody2D_destructor(WasGoId p_wasgo_id);
            
}
#endif