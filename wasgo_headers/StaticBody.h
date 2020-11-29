/* THIS FILE IS GENERATED */
#ifndef STATICBODY_H
#define STATICBODY_H

#include "stdint.h"

#include "Variant.h"
#include "PhysicsMaterial.h"
#include "PhysicsBody.h"
class StaticBody : public PhysicsBody{
public: StaticBody();
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
};
#endif