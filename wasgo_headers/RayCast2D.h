/* THIS FILE IS GENERATED */
#ifndef RAYCAST2D_H
#define RAYCAST2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Node2D.h"
class RayCast2D : public Node2D{
void add_exception(Object p_node);
void add_exception_rid(RID p_rid);
void clear_exceptions();
void force_raycast_update();
Vector2 get_cast_to();
Object get_collider();
int get_collider_shape();
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
Vector2 get_collision_normal();
Vector2 get_collision_point();
bool get_exclude_parent_body();
bool is_collide_with_areas_enabled();
bool is_collide_with_bodies_enabled();
bool is_colliding();
bool is_enabled();
void remove_exception(Object p_node);
void remove_exception_rid(RID p_rid);
void set_cast_to(Vector2 p_local_point);
void set_collide_with_areas(bool p_enable);
void set_collide_with_bodies(bool p_enable);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_enabled(bool p_enabled);
void set_exclude_parent_body(bool p_mask);

RayCast2D(WasGoId p_wasgo_id);
~RayCast2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RayCast2D_wrapper_add_exception(WasGoId wasgo_id, WasGo::WasGoId p_node);
void _wasgo_RayCast2D_wrapper_add_exception_rid(WasGoId wasgo_id, WasGo::WasGoId p_rid);
void _wasgo_RayCast2D_wrapper_clear_exceptions(WasGoId wasgo_id);
void _wasgo_RayCast2D_wrapper_force_raycast_update(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_RayCast2D_wrapper_get_cast_to(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_RayCast2D_wrapper_get_collider(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_get_collider_shape(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
WasGo::WasGoId _wasgo_RayCast2D_wrapper_get_collision_normal(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_RayCast2D_wrapper_get_collision_point(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_get_exclude_parent_body(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_is_collide_with_areas_enabled(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_is_collide_with_bodies_enabled(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_is_colliding(WasGoId wasgo_id);
int _wasgo_RayCast2D_wrapper_is_enabled(WasGoId wasgo_id);
void _wasgo_RayCast2D_wrapper_remove_exception(WasGoId wasgo_id, WasGo::WasGoId p_node);
void _wasgo_RayCast2D_wrapper_remove_exception_rid(WasGoId wasgo_id, WasGo::WasGoId p_rid);
void _wasgo_RayCast2D_wrapper_set_cast_to(WasGoId wasgo_id, WasGo::WasGoId p_local_point);
void _wasgo_RayCast2D_wrapper_set_collide_with_areas(WasGoId wasgo_id, bool p_enable);
void _wasgo_RayCast2D_wrapper_set_collide_with_bodies(WasGoId wasgo_id, bool p_enable);
void _wasgo_RayCast2D_wrapper_set_collision_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_RayCast2D_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_RayCast2D_wrapper_set_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_RayCast2D_wrapper_set_exclude_parent_body(WasGoId wasgo_id, bool p_mask);
}
#endif