/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYPARAMETERS_H
#define PHYSICSSHAPEQUERYPARAMETERS_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Resource.h"
class PhysicsShapeQueryParameters : public Reference{
public: PhysicsShapeQueryParameters();
int get_collision_mask();
Array get_exclude();
float get_margin();
RID get_shape_rid();
Transform get_transform();
bool is_collide_with_areas_enabled();
bool is_collide_with_bodies_enabled();
void set_collide_with_areas(bool p_enable);
void set_collide_with_bodies(bool p_enable);
void set_collision_mask(int p_collision_mask);
void set_exclude(Array p_exclude);
void set_margin(float p_margin);
void set_shape(Resource p_shape);
void set_shape_rid(RID p_shape);
void set_transform(Transform p_transform);
};
#endif