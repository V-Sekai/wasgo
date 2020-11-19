/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DSHAPEQUERYPARAMETERS_H
#define PHYSICS2DSHAPEQUERYPARAMETERS_H

#include <stdint.h>

#include "Vector2.h"
#include "Resource.h"
#include "Reference.h"
#include "Transform2D.h"
#include "Variant.h"
#include "RID.h"
class Physics2DShapeQueryParameters : public Reference{
public: Physics2DShapeQueryParameters();
int  get_collision_layer();
int  get_collision_layer();
Array  get_exclude();
Array  get_exclude();
float  get_margin();
float  get_margin();
Vector2  get_motion();
Vector2  get_motion();
RID  get_shape_rid();
RID  get_shape_rid();
Transform2D  get_transform();
Transform2D  get_transform();
bool  is_collide_with_areas_enabled();
bool  is_collide_with_areas_enabled();
bool  is_collide_with_bodies_enabled();
bool  is_collide_with_bodies_enabled();
void  set_collide_with_areas(bool enable);
void  set_collide_with_bodies(bool enable);
void  set_collision_layer(int collision_layer);
void  set_exclude(Array exclude);
void  set_margin(float margin);
void  set_motion(Vector2 motion);
void  set_shape(Resource shape);
void  set_shape_rid(RID shape);
void  set_transform(Transform2D transform);
};
#endif