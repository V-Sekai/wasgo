/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Vector3.h"
#include "PhysicsBody.h"
#include "PhysicsMaterial.h"
class StaticBody : public PhysicsBody{
public: StaticBody();
void  _reload_physics_characteristics();
void  _reload_physics_characteristics();
float  get_bounce();
float  get_bounce();
Vector3  get_constant_angular_velocity();
Vector3  get_constant_angular_velocity();
Vector3  get_constant_linear_velocity();
Vector3  get_constant_linear_velocity();
float  get_friction();
float  get_friction();
PhysicsMaterial  get_physics_material_override();
PhysicsMaterial  get_physics_material_override();
void  set_bounce(float bounce);
void  set_constant_angular_velocity(Vector3 vel);
void  set_constant_linear_velocity(Vector3 vel);
void  set_friction(float friction);
void  set_physics_material_override(PhysicsMaterial physics_material_override);
};