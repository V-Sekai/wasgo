/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "String.h"
#include "CollisionObject2D.h"
#include "Vector2.h"
#include "Variant.h"
#include "Node.h"
class Area2D : public CollisionObject2D{
public: Area2D();
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
String  get_audio_bus_name();
String  get_audio_bus_name();
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
Vector2  get_gravity_vector();
Vector2  get_gravity_vector();
float  get_linear_damp();
float  get_linear_damp();
Array  get_overlapping_areas();
Array  get_overlapping_areas();
Array  get_overlapping_bodies();
Array  get_overlapping_bodies();
float  get_priority();
float  get_priority();
enum.Area2D::SpaceOverride  get_space_override_mode();
enum.Area2D::SpaceOverride  get_space_override_mode();
bool  is_gravity_a_point();
bool  is_gravity_a_point();
bool  is_monitorable();
bool  is_monitorable();
bool  is_monitoring();
bool  is_monitoring();
bool  is_overriding_audio_bus();
bool  is_overriding_audio_bus();
bool  overlaps_area(Node area);
bool  overlaps_body(Node body);
void  set_angular_damp(float angular_damp);
void  set_audio_bus_name(String name);
void  set_audio_bus_override(bool enable);
void  set_collision_layer(int collision_layer);
void  set_collision_layer_bit(int bit, bool value);
void  set_collision_mask(int collision_mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_gravity(float gravity);
void  set_gravity_distance_scale(float distance_scale);
void  set_gravity_is_point(bool enable);
void  set_gravity_vector(Vector2 vector);
void  set_linear_damp(float linear_damp);
void  set_monitorable(bool enable);
void  set_monitoring(bool enable);
void  set_priority(float priority);
void  set_space_override_mode(int space_override_mode);
};