/* THIS FILE IS GENERATED */
#ifndef COLLISIONOBJECT_H
#define COLLISIONOBJECT_H

#include <stdint.h>

#include "InputEvent.h"
#include "Transform.h"
#include "RID.h"
#include "Variant.h"
#include "Spatial.h"
#include "Shape.h"
#include "Object.h"
#include "Vector3.h"
class CollisionObject : public Spatial{
public: CollisionObject();
void  _input_event(Object camera, InputEvent event, Vector3 click_position, Vector3 click_normal, int shape_idx);
int  create_shape_owner(Object owner);
bool  get_capture_input_on_drag();
bool  get_capture_input_on_drag();
RID  get_rid();
RID  get_rid();
Array  get_shape_owners();
Array  get_shape_owners();
bool  is_ray_pickable();
bool  is_ray_pickable();
bool  is_shape_owner_disabled(int owner_id);
void  remove_shape_owner(int owner_id);
void  set_capture_input_on_drag(bool enable);
void  set_ray_pickable(bool ray_pickable);
int  shape_find_owner(int shape_index);
void  shape_owner_add_shape(int owner_id, Shape shape);
void  shape_owner_clear_shapes(int owner_id);
Object  shape_owner_get_owner(int owner_id);
Shape  shape_owner_get_shape(int owner_id, int shape_id);
int  shape_owner_get_shape_count(int owner_id);
int  shape_owner_get_shape_index(int owner_id, int shape_id);
Transform  shape_owner_get_transform(int owner_id);
void  shape_owner_remove_shape(int owner_id, int shape_id);
void  shape_owner_set_disabled(int owner_id, bool disabled);
void  shape_owner_set_transform(int owner_id, Transform transform);
};
#endif