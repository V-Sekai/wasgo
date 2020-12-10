/* THIS FILE IS GENERATED */
#ifndef COLLISIONOBJECT_H
#define COLLISIONOBJECT_H

#include "wasgo\wasgoid.h"

#include "RID.h"
#include "Spatial.h"
#include "Object.h"
#include "Variant.h"
#include "Transform.h"
#include "Shape.h"
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

protected:
public:
explicit CollisionObject(WasGoID p_wasgo_id);
explicit CollisionObject(Spatial other);
CollisionObject();
CollisionObject new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CollisionObject_wrapper_create_shape_owner(WasGoID wasgo_id, WasGoID p_owner);
int _wasgo_CollisionObject_wrapper_get_capture_input_on_drag(WasGoID wasgo_id);
void _wasgo_CollisionObject_wrapper_get_rid(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_CollisionObject_wrapper_get_shape_owners(WasGoID wasgo_id);
int _wasgo_CollisionObject_wrapper_is_ray_pickable(WasGoID wasgo_id);
int _wasgo_CollisionObject_wrapper_is_shape_owner_disabled(WasGoID wasgo_id, int p_owner_id);
void _wasgo_CollisionObject_wrapper_remove_shape_owner(WasGoID wasgo_id, int p_owner_id);
void _wasgo_CollisionObject_wrapper_set_capture_input_on_drag(WasGoID wasgo_id, bool p_enable);
void _wasgo_CollisionObject_wrapper_set_ray_pickable(WasGoID wasgo_id, bool p_ray_pickable);
int _wasgo_CollisionObject_wrapper_shape_find_owner(WasGoID wasgo_id, int p_shape_index);
void _wasgo_CollisionObject_wrapper_shape_owner_add_shape(WasGoID wasgo_id, int p_owner_id, WasGoID p_shape);
void _wasgo_CollisionObject_wrapper_shape_owner_clear_shapes(WasGoID wasgo_id, int p_owner_id);
WasGoID _wasgo_CollisionObject_wrapper_shape_owner_get_owner(WasGoID wasgo_id, int p_owner_id);
WasGoID _wasgo_CollisionObject_wrapper_shape_owner_get_shape(WasGoID wasgo_id, int p_owner_id, int p_shape_id);
int _wasgo_CollisionObject_wrapper_shape_owner_get_shape_count(WasGoID wasgo_id, int p_owner_id);
int _wasgo_CollisionObject_wrapper_shape_owner_get_shape_index(WasGoID wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject_wrapper_shape_owner_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_owner_id);
void _wasgo_CollisionObject_wrapper_shape_owner_remove_shape(WasGoID wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject_wrapper_shape_owner_set_disabled(WasGoID wasgo_id, int p_owner_id, bool p_disabled);
void _wasgo_CollisionObject_wrapper_shape_owner_set_transform(WasGoID wasgo_id, int p_owner_id, const uint8_t * p_transform, int wasgo_throwaway, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_CollisionObject_constructor();
            
}
#endif