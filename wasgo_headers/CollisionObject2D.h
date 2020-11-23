/* THIS FILE IS GENERATED */
#ifndef COLLISIONOBJECT2D_H
#define COLLISIONOBJECT2D_H

#include <stdint.h>

#include "InputEvent.h"
#include "RID.h"
#include "Node2D.h"
#include "Shape2D.h"
#include "Variant.h"
#include "Object.h"
#include "Transform2D.h"
class CollisionObject2D : public Node2D{
public: CollisionObject2D();
void  _input_event(Object viewport, InputEvent event, int shape_idx);
int  create_shape_owner(Object owner);
RID  get_rid();
RID  get_rid();
float  get_shape_owner_one_way_collision_margin(int owner_id);
Array  get_shape_owners();
Array  get_shape_owners();
bool  is_pickable();
bool  is_pickable();
bool  is_shape_owner_disabled(int owner_id);
bool  is_shape_owner_one_way_collision_enabled(int owner_id);
void  remove_shape_owner(int owner_id);
void  set_pickable(bool enabled);
int  shape_find_owner(int shape_index);
void  shape_owner_add_shape(int owner_id, Shape2D shape);
void  shape_owner_clear_shapes(int owner_id);
Object  shape_owner_get_owner(int owner_id);
Shape2D  shape_owner_get_shape(int owner_id, int shape_id);
int  shape_owner_get_shape_count(int owner_id);
int  shape_owner_get_shape_index(int owner_id, int shape_id);
Transform2D  shape_owner_get_transform(int owner_id);
void  shape_owner_remove_shape(int owner_id, int shape_id);
void  shape_owner_set_disabled(int owner_id, bool disabled);
void  shape_owner_set_one_way_collision(int owner_id, bool enable);
void  shape_owner_set_one_way_collision_margin(int owner_id, float margin);
void  shape_owner_set_transform(int owner_id, Transform2D transform);
};
#endif