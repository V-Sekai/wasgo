/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DSHAPEQUERYPARAMETERS_H
#define PHYSICS2DSHAPEQUERYPARAMETERS_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Resource.h"
class Physics2DShapeQueryParameters : public Reference{
public: Physics2DShapeQueryParameters();
int get_collision_layer();
Array get_exclude();
float get_margin();
Vector2 get_motion();
RID get_shape_rid();
Transform2D get_transform();
bool is_collide_with_areas_enabled();
bool is_collide_with_bodies_enabled();
void set_collide_with_areas(bool p_enable);
void set_collide_with_bodies(bool p_enable);
void set_collision_layer(int p_collision_layer);
void set_exclude(Array p_exclude);
void set_margin(float p_margin);
void set_motion(Vector2 p_motion);
void set_shape(Resource p_shape);
void set_shape_rid(RID p_shape);
void set_transform(Transform2D p_transform);
};
#endif