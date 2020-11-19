/* THIS FILE IS GENERATED */
#ifndef AREA_H
#define AREA_H

#include <stdint.h>

#include "String.h"
#include "Node.h"
#include "Vector3.h"
#include "CollisionObject.h"
#include "Variant.h"
#include "RID.h"
class Area : public CollisionObject{
public: Area();
enum SpaceOverride{
SPACE_OVERRIDE_DISABLED: 0,
SPACE_OVERRIDE_COMBINE: 1,
SPACE_OVERRIDE_COMBINE_REPLACE: 2,
SPACE_OVERRIDE_REPLACE: 3,
};
void  _area_enter_tree(int id);
void  _area_exit_tree(int id);
void  _area_inout(int arg0, RID arg1, int arg2, int arg3, int arg4);
void  _body_enter_tree(int id);
void  _body_exit_tree(int id);
void  _body_inout(int arg0, RID arg1, int arg2, int arg3, int arg4);
float  get_angular_damp();
float  get_angular_damp();
String  get_audio_bus();
String  get_audio_bus();
int  get_collision_layer();
int  get_collision_layer();
bool  get_collision_layer_bit(int bit);
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
float  get_gravity();
float  get_gravity();
float  get_gravity_distance_scale();
float  get_gravity_distance_scale();
Vector3  get_gravity_vector();
Vector3  get_gravity_vector();
float  get_linear_damp();
float  get_linear_damp();
Array  get_overlapping_areas();
Array  get_overlapping_areas();
Array  get_overlapping_bodies();
Array  get_overlapping_bodies();
float  get_priority();
float  get_priority();
float  get_reverb_amount();
float  get_reverb_amount();
String  get_reverb_bus();
String  get_reverb_bus();
float  get_reverb_uniformity();
float  get_reverb_uniformity();
enum.Area::SpaceOverride  get_space_override_mode();
enum.Area::SpaceOverride  get_space_override_mode();
bool  is_gravity_a_point();
bool  is_gravity_a_point();
bool  is_monitorable();
bool  is_monitorable();
bool  is_monitoring();
bool  is_monitoring();
bool  is_overriding_audio_bus();
bool  is_overriding_audio_bus();
bool  is_using_reverb_bus();
bool  is_using_reverb_bus();
bool  overlaps_area(Node area);
bool  overlaps_body(Node body);
void  set_angular_damp(float angular_damp);
void  set_audio_bus(String name);
void  set_audio_bus_override(bool enable);
void  set_collision_layer(int collision_layer);
void  set_collision_layer_bit(int bit, bool value);
void  set_collision_mask(int collision_mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_gravity(float gravity);
void  set_gravity_distance_scale(float distance_scale);
void  set_gravity_is_point(bool enable);
void  set_gravity_vector(Vector3 vector);
void  set_linear_damp(float linear_damp);
void  set_monitorable(bool enable);
void  set_monitoring(bool enable);
void  set_priority(float priority);
void  set_reverb_amount(float amount);
void  set_reverb_bus(String name);
void  set_reverb_uniformity(float amount);
void  set_space_override_mode(int enable);
void  set_use_reverb_bus(bool enable);
};
#endif