/* THIS FILE IS GENERATED */
#ifndef STATICBODY2D_H
#define STATICBODY2D_H

#include "stdint.h"

#include "Variant.h"
#include "PhysicsMaterial.h"
#include "PhysicsBody2D.h"
class StaticBody2D : public PhysicsBody2D{
public: StaticBody2D();
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
};
#endif