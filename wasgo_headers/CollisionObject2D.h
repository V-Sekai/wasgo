/* THIS FILE IS GENERATED */
#ifndef COLLISIONOBJECT2D_H
#define COLLISIONOBJECT2D_H

#include "wasgo\wasgo.h"

#include "Transform2D.h"
#include "Object.h"
#include "Node2D.h"
#include "Shape2D.h"
#include "Variant.h"
#include "RID.h"
class CollisionObject2D : public Node2D{
public:
int create_shape_owner(Object p_owner);
RID get_rid();
float get_shape_owner_one_way_collision_margin(int p_owner_id);
Array get_shape_owners();
bool is_pickable();
bool is_shape_owner_disabled(int p_owner_id);
bool is_shape_owner_one_way_collision_enabled(int p_owner_id);
void remove_shape_owner(int p_owner_id);
void set_pickable(bool p_enabled);
int shape_find_owner(int p_shape_index);
void shape_owner_add_shape(int p_owner_id, Shape2D p_shape);
void shape_owner_clear_shapes(int p_owner_id);
Object shape_owner_get_owner(int p_owner_id);
Shape2D shape_owner_get_shape(int p_owner_id, int p_shape_id);
int shape_owner_get_shape_count(int p_owner_id);
int shape_owner_get_shape_index(int p_owner_id, int p_shape_id);
Transform2D shape_owner_get_transform(int p_owner_id);
void shape_owner_remove_shape(int p_owner_id, int p_shape_id);
void shape_owner_set_disabled(int p_owner_id, bool p_disabled);
void shape_owner_set_one_way_collision(int p_owner_id, bool p_enable);
void shape_owner_set_one_way_collision_margin(int p_owner_id, float p_margin);
void shape_owner_set_transform(int p_owner_id, Transform2D p_transform);
};


//Wrapper Functions
extern "C"{
int _wasgo_CollisionObject2D_wrapper_create_shape_owner(WasGoId wasgo_id, WasGoId p_owner);
void _wasgo_CollisionObject2D_wrapper_get_rid(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_CollisionObject2D_wrapper_get_shape_owner_one_way_collision_margin(WasGoId wasgo_id, int p_owner_id);
WasGoId _wasgo_CollisionObject2D_wrapper_get_shape_owners(WasGoId wasgo_id);
int _wasgo_CollisionObject2D_wrapper_is_pickable(WasGoId wasgo_id);
int _wasgo_CollisionObject2D_wrapper_is_shape_owner_disabled(WasGoId wasgo_id, int p_owner_id);
int _wasgo_CollisionObject2D_wrapper_is_shape_owner_one_way_collision_enabled(WasGoId wasgo_id, int p_owner_id);
void _wasgo_CollisionObject2D_wrapper_remove_shape_owner(WasGoId wasgo_id, int p_owner_id);
void _wasgo_CollisionObject2D_wrapper_set_pickable(WasGoId wasgo_id, bool p_enabled);
int _wasgo_CollisionObject2D_wrapper_shape_find_owner(WasGoId wasgo_id, int p_shape_index);
void _wasgo_CollisionObject2D_wrapper_shape_owner_add_shape(WasGoId wasgo_id, int p_owner_id, WasGoId p_shape);
void _wasgo_CollisionObject2D_wrapper_shape_owner_clear_shapes(WasGoId wasgo_id, int p_owner_id);
WasGoId _wasgo_CollisionObject2D_wrapper_shape_owner_get_owner(WasGoId wasgo_id, int p_owner_id);
WasGoId _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape(WasGoId wasgo_id, int p_owner_id, int p_shape_id);
int _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape_count(WasGoId wasgo_id, int p_owner_id);
int _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape_index(WasGoId wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject2D_wrapper_shape_owner_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_owner_id);
void _wasgo_CollisionObject2D_wrapper_shape_owner_remove_shape(WasGoId wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_disabled(WasGoId wasgo_id, int p_owner_id, bool p_disabled);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_one_way_collision(WasGoId wasgo_id, int p_owner_id, bool p_enable);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_one_way_collision_margin(WasGoId wasgo_id, int p_owner_id, float p_margin);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_transform(WasGoId wasgo_id, int p_owner_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_CollisionObject2D_constructor();
    void _wasgo_CollisionObject2D_destructor(WasGoId p_wasgo_id);
            
}
#endif