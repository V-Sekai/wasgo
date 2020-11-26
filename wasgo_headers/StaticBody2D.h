/* THIS FILE IS GENERATED */
#ifndef STATICBODY2D_H
#define STATICBODY2D_H

#include <stdint.h>

#include "Vector2.h"
#include "PhysicsMaterial.h"
#include "PhysicsBody2D.h"
class StaticBody2D : public PhysicsBody2D{
public: StaticBody2D();
void  _reload_physics_characteristics();
void  _reload_physics_characteristics();
float  get_bounce();
float  get_bounce();
float  get_constant_angular_velocity();
float  get_constant_angular_velocity();
Vector2  get_constant_linear_velocity();
Vector2  get_constant_linear_velocity();
float  get_friction();
float  get_friction();
PhysicsMaterial  get_physics_material_override();
PhysicsMaterial  get_physics_material_override();
void  set_bounce(float bounce);
void  set_constant_angular_velocity(float vel);
void  set_constant_linear_velocity(Vector2 vel);
void  set_friction(float friction);
void  set_physics_material_override(PhysicsMaterial physics_material_override);
};
#endif