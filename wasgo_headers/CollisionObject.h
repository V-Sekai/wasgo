/* THIS FILE IS GENERATED */
#ifndef COLLISIONOBJECT_H
#define COLLISIONOBJECT_H

#include "wasgo\wasgo.h"

#include "RID.h"
#include "Variant.h"
#include "Shape.h"
#include "Spatial.h"
#include "Transform.h"
#include "Object.h"
class CollisionObject : public Spatial{
public:
int create_shape_owner(Object p_owner);
bool get_capture_input_on_drag();
RID get_rid();
Array get_shape_owners();
bool is_ray_pickable();
bool is_shape_owner_disabled(int p_owner_id);
void remove_shape_owner(int p_owner_id);
void set_capture_input_on_drag(bool p_enable);
void set_ray_pickable(bool p_ray_pickable);
int shape_find_owner(int p_shape_index);
void shape_owner_add_shape(int p_owner_id, Shape p_shape);
void shape_owner_clear_shapes(int p_owner_id);
Object shape_owner_get_owner(int p_owner_id);
Shape shape_owner_get_shape(int p_owner_id, int p_shape_id);
int shape_owner_get_shape_count(int p_owner_id);
int shape_owner_get_shape_index(int p_owner_id, int p_shape_id);
Transform shape_owner_get_transform(int p_owner_id);
void shape_owner_remove_shape(int p_owner_id, int p_shape_id);
void shape_owner_set_disabled(int p_owner_id, bool p_disabled);
void shape_owner_set_transform(int p_owner_id, Transform p_transform);
};


//Wrapper Functions
extern "C"{
int _wasgo_CollisionObject_wrapper_create_shape_owner(WasGoId wasgo_id, WasGoId p_owner);
int _wasgo_CollisionObject_wrapper_get_capture_input_on_drag(WasGoId wasgo_id);
void _wasgo_CollisionObject_wrapper_get_rid(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_CollisionObject_wrapper_get_shape_owners(WasGoId wasgo_id);
int _wasgo_CollisionObject_wrapper_is_ray_pickable(WasGoId wasgo_id);
int _wasgo_CollisionObject_wrapper_is_shape_owner_disabled(WasGoId wasgo_id, int p_owner_id);
void _wasgo_CollisionObject_wrapper_remove_shape_owner(WasGoId wasgo_id, int p_owner_id);
void _wasgo_CollisionObject_wrapper_set_capture_input_on_drag(WasGoId wasgo_id, bool p_enable);
void _wasgo_CollisionObject_wrapper_set_ray_pickable(WasGoId wasgo_id, bool p_ray_pickable);
int _wasgo_CollisionObject_wrapper_shape_find_owner(WasGoId wasgo_id, int p_shape_index);
void _wasgo_CollisionObject_wrapper_shape_owner_add_shape(WasGoId wasgo_id, int p_owner_id, WasGoId p_shape);
void _wasgo_CollisionObject_wrapper_shape_owner_clear_shapes(WasGoId wasgo_id, int p_owner_id);
WasGoId _wasgo_CollisionObject_wrapper_shape_owner_get_owner(WasGoId wasgo_id, int p_owner_id);
WasGoId _wasgo_CollisionObject_wrapper_shape_owner_get_shape(WasGoId wasgo_id, int p_owner_id, int p_shape_id);
int _wasgo_CollisionObject_wrapper_shape_owner_get_shape_count(WasGoId wasgo_id, int p_owner_id);
int _wasgo_CollisionObject_wrapper_shape_owner_get_shape_index(WasGoId wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject_wrapper_shape_owner_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_owner_id);
void _wasgo_CollisionObject_wrapper_shape_owner_remove_shape(WasGoId wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject_wrapper_shape_owner_set_disabled(WasGoId wasgo_id, int p_owner_id, bool p_disabled);
void _wasgo_CollisionObject_wrapper_shape_owner_set_transform(WasGoId wasgo_id, int p_owner_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_CollisionObject_constructor();
    void _wasgo_CollisionObject_destructor(WasGoId p_wasgo_id);
            
}
#endif