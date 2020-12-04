/* THIS FILE IS GENERATED */
#ifndef COLLISIONOBJECT2D_H
#define COLLISIONOBJECT2D_H

#include "wasgo\wasgo.h"

#include "Shape2D.h"
#include "Object.h"
#include "Variant.h"
#include "Transform2D.h"
#include "RID.h"
#include "Node2D.h"
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
int _wasgo_CollisionObject2D_wrapper_create_shape_owner(WasGoID wasgo_id, WasGoID p_owner);
void _wasgo_CollisionObject2D_wrapper_get_rid(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_CollisionObject2D_wrapper_get_shape_owner_one_way_collision_margin(WasGoID wasgo_id, int p_owner_id);
WasGoID _wasgo_CollisionObject2D_wrapper_get_shape_owners(WasGoID wasgo_id);
int _wasgo_CollisionObject2D_wrapper_is_pickable(WasGoID wasgo_id);
int _wasgo_CollisionObject2D_wrapper_is_shape_owner_disabled(WasGoID wasgo_id, int p_owner_id);
int _wasgo_CollisionObject2D_wrapper_is_shape_owner_one_way_collision_enabled(WasGoID wasgo_id, int p_owner_id);
void _wasgo_CollisionObject2D_wrapper_remove_shape_owner(WasGoID wasgo_id, int p_owner_id);
void _wasgo_CollisionObject2D_wrapper_set_pickable(WasGoID wasgo_id, bool p_enabled);
int _wasgo_CollisionObject2D_wrapper_shape_find_owner(WasGoID wasgo_id, int p_shape_index);
void _wasgo_CollisionObject2D_wrapper_shape_owner_add_shape(WasGoID wasgo_id, int p_owner_id, WasGoID p_shape);
void _wasgo_CollisionObject2D_wrapper_shape_owner_clear_shapes(WasGoID wasgo_id, int p_owner_id);
WasGoID _wasgo_CollisionObject2D_wrapper_shape_owner_get_owner(WasGoID wasgo_id, int p_owner_id);
WasGoID _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape(WasGoID wasgo_id, int p_owner_id, int p_shape_id);
int _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape_count(WasGoID wasgo_id, int p_owner_id);
int _wasgo_CollisionObject2D_wrapper_shape_owner_get_shape_index(WasGoID wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject2D_wrapper_shape_owner_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_owner_id);
void _wasgo_CollisionObject2D_wrapper_shape_owner_remove_shape(WasGoID wasgo_id, int p_owner_id, int p_shape_id);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_disabled(WasGoID wasgo_id, int p_owner_id, bool p_disabled);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_one_way_collision(WasGoID wasgo_id, int p_owner_id, bool p_enable);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_one_way_collision_margin(WasGoID wasgo_id, int p_owner_id, float p_margin);
void _wasgo_CollisionObject2D_wrapper_shape_owner_set_transform(WasGoID wasgo_id, int p_owner_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_CollisionObject2D_constructor();
            
}
#endif