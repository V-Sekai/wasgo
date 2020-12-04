/* THIS FILE IS GENERATED */
#ifndef RAYCAST_H
#define RAYCAST_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Object.h"
#include "Vector3.h"
#include "RID.h"
class RayCast : public Spatial{
public:
void add_exception(Object p_node);
void add_exception_rid(RID p_rid);
void clear_exceptions();
void force_raycast_update();
Vector3 get_cast_to();
Object get_collider();
int get_collider_shape();
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
Vector3 get_collision_normal();
Vector3 get_collision_point();
bool get_exclude_parent_body();
bool is_collide_with_areas_enabled();
bool is_collide_with_bodies_enabled();
bool is_colliding();
bool is_enabled();
void remove_exception(Object p_node);
void remove_exception_rid(RID p_rid);
void set_cast_to(Vector3 p_local_point);
void set_collide_with_areas(bool p_enable);
void set_collide_with_bodies(bool p_enable);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_enabled(bool p_enabled);
void set_exclude_parent_body(bool p_mask);

protected:
RayCast(WasGoId p_wasgo_id);
public:
RayCast();
~RayCast();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RayCast_wrapper_add_exception(WasGoId wasgo_id, WasGoId p_node);
void _wasgo_RayCast_wrapper_add_exception_rid(WasGoId wasgo_id, const uint8_t * p_rid, int p_rid_wasgo_buffer_size);
void _wasgo_RayCast_wrapper_clear_exceptions(WasGoId wasgo_id);
void _wasgo_RayCast_wrapper_force_raycast_update(WasGoId wasgo_id);
void _wasgo_RayCast_wrapper_get_cast_to(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_RayCast_wrapper_get_collider(WasGoId wasgo_id);
int _wasgo_RayCast_wrapper_get_collider_shape(WasGoId wasgo_id);
int _wasgo_RayCast_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_RayCast_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
void _wasgo_RayCast_wrapper_get_collision_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_RayCast_wrapper_get_collision_point(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RayCast_wrapper_get_exclude_parent_body(WasGoId wasgo_id);
int _wasgo_RayCast_wrapper_is_collide_with_areas_enabled(WasGoId wasgo_id);
int _wasgo_RayCast_wrapper_is_collide_with_bodies_enabled(WasGoId wasgo_id);
int _wasgo_RayCast_wrapper_is_colliding(WasGoId wasgo_id);
int _wasgo_RayCast_wrapper_is_enabled(WasGoId wasgo_id);
void _wasgo_RayCast_wrapper_remove_exception(WasGoId wasgo_id, WasGoId p_node);
void _wasgo_RayCast_wrapper_remove_exception_rid(WasGoId wasgo_id, const uint8_t * p_rid, int p_rid_wasgo_buffer_size);
void _wasgo_RayCast_wrapper_set_cast_to(WasGoId wasgo_id, const uint8_t * p_local_point, int p_local_point_wasgo_buffer_size);
void _wasgo_RayCast_wrapper_set_collide_with_areas(WasGoId wasgo_id, bool p_enable);
void _wasgo_RayCast_wrapper_set_collide_with_bodies(WasGoId wasgo_id, bool p_enable);
void _wasgo_RayCast_wrapper_set_collision_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_RayCast_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_RayCast_wrapper_set_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_RayCast_wrapper_set_exclude_parent_body(WasGoId wasgo_id, bool p_mask);

    //constructor and destructor wrappers
    WasGoId _wasgo_RayCast_constructor();
    void _wasgo_RayCast_destructor(WasGoId p_wasgo_id);
            
}
#endif