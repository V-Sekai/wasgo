/* THIS FILE IS GENERATED */
#ifndef RAYCAST_H
#define RAYCAST_H

#include "stdint.h"

#include "Object.h"
#include "Spatial.h"
#include "Variant.h"
class RayCast : public Spatial{
public: RayCast();
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
};
#endif