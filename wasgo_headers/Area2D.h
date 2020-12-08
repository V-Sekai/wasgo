/* THIS FILE IS GENERATED */
#ifndef AREA2D_H
#define AREA2D_H

#include "wasgo\wasgoid.h"

#include "CollisionObject2D.h"
#include "Vector2.h"
class Node;
#include "Variant.h"
#include "Ustring.h"
class Area2D : public CollisionObject2D{
public:
enum SpaceOverride{
SPACE_OVERRIDE_DISABLED,
SPACE_OVERRIDE_COMBINE,
SPACE_OVERRIDE_COMBINE_REPLACE,
SPACE_OVERRIDE_REPLACE,
SPACE_OVERRIDE_REPLACE_COMBINE
};
float get_angular_damp();
String get_audio_bus_name();
int get_collision_layer();
bool get_collision_layer_bit(int p_bit);
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
float get_gravity();
float get_gravity_distance_scale();
Vector2 get_gravity_vector();
float get_linear_damp();
Array get_overlapping_areas();
Array get_overlapping_bodies();
float get_priority();
Area2D::SpaceOverride get_space_override_mode();
bool is_gravity_a_point();
bool is_monitorable();
bool is_monitoring();
bool is_overriding_audio_bus();
bool overlaps_area(Node p_area);
bool overlaps_body(Node p_body);
void set_angular_damp(float p_angular_damp);
void set_audio_bus_name(String p_name);
void set_audio_bus_override(bool p_enable);
void set_collision_layer(int p_collision_layer);
void set_collision_layer_bit(int p_bit, bool p_value);
void set_collision_mask(int p_collision_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_gravity(float p_gravity);
void set_gravity_distance_scale(float p_distance_scale);
void set_gravity_is_point(bool p_enable);
void set_gravity_vector(Vector2 p_vector);
void set_linear_damp(float p_linear_damp);
void set_monitorable(bool p_enable);
void set_monitoring(bool p_enable);
void set_priority(float p_priority);
void set_space_override_mode(Area2D::SpaceOverride p_space_override_mode);

protected:
public:
explicit Area2D(WasGoID p_wasgo_id);
explicit Area2D(CollisionObject2D other);
Area2D();
Area2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_Area2D_wrapper_get_angular_damp(WasGoID wasgo_id);
void _wasgo_Area2D_wrapper_get_audio_bus_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Area2D_wrapper_get_collision_layer(WasGoID wasgo_id);
int _wasgo_Area2D_wrapper_get_collision_layer_bit(WasGoID wasgo_id, int p_bit);
int _wasgo_Area2D_wrapper_get_collision_mask(WasGoID wasgo_id);
int _wasgo_Area2D_wrapper_get_collision_mask_bit(WasGoID wasgo_id, int p_bit);
float _wasgo_Area2D_wrapper_get_gravity(WasGoID wasgo_id);
float _wasgo_Area2D_wrapper_get_gravity_distance_scale(WasGoID wasgo_id);
void _wasgo_Area2D_wrapper_get_gravity_vector(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Area2D_wrapper_get_linear_damp(WasGoID wasgo_id);
WasGoID _wasgo_Area2D_wrapper_get_overlapping_areas(WasGoID wasgo_id);
WasGoID _wasgo_Area2D_wrapper_get_overlapping_bodies(WasGoID wasgo_id);
float _wasgo_Area2D_wrapper_get_priority(WasGoID wasgo_id);
WasGoID _wasgo_Area2D_wrapper_get_space_override_mode(WasGoID wasgo_id);
int _wasgo_Area2D_wrapper_is_gravity_a_point(WasGoID wasgo_id);
int _wasgo_Area2D_wrapper_is_monitorable(WasGoID wasgo_id);
int _wasgo_Area2D_wrapper_is_monitoring(WasGoID wasgo_id);
int _wasgo_Area2D_wrapper_is_overriding_audio_bus(WasGoID wasgo_id);
int _wasgo_Area2D_wrapper_overlaps_area(WasGoID wasgo_id, WasGoID p_area);
int _wasgo_Area2D_wrapper_overlaps_body(WasGoID wasgo_id, WasGoID p_body);
void _wasgo_Area2D_wrapper_set_angular_damp(WasGoID wasgo_id, float p_angular_damp);
void _wasgo_Area2D_wrapper_set_audio_bus_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Area2D_wrapper_set_audio_bus_override(WasGoID wasgo_id, bool p_enable);
void _wasgo_Area2D_wrapper_set_collision_layer(WasGoID wasgo_id, int p_collision_layer);
void _wasgo_Area2D_wrapper_set_collision_layer_bit(WasGoID wasgo_id, int p_bit, bool p_value);
void _wasgo_Area2D_wrapper_set_collision_mask(WasGoID wasgo_id, int p_collision_mask);
void _wasgo_Area2D_wrapper_set_collision_mask_bit(WasGoID wasgo_id, int p_bit, bool p_value);
void _wasgo_Area2D_wrapper_set_gravity(WasGoID wasgo_id, float p_gravity);
void _wasgo_Area2D_wrapper_set_gravity_distance_scale(WasGoID wasgo_id, float p_distance_scale);
void _wasgo_Area2D_wrapper_set_gravity_is_point(WasGoID wasgo_id, bool p_enable);
void _wasgo_Area2D_wrapper_set_gravity_vector(WasGoID wasgo_id, const uint8_t * p_vector, int p_vector_wasgo_buffer_size);
void _wasgo_Area2D_wrapper_set_linear_damp(WasGoID wasgo_id, float p_linear_damp);
void _wasgo_Area2D_wrapper_set_monitorable(WasGoID wasgo_id, bool p_enable);
void _wasgo_Area2D_wrapper_set_monitoring(WasGoID wasgo_id, bool p_enable);
void _wasgo_Area2D_wrapper_set_priority(WasGoID wasgo_id, float p_priority);
void _wasgo_Area2D_wrapper_set_space_override_mode(WasGoID wasgo_id, WasGoID p_space_override_mode);

    //constructor wrappers
    WasGoID _wasgo_Area2D_constructor();
            
}
#endif