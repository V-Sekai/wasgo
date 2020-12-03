/* THIS FILE IS GENERATED */
#ifndef AREA_H
#define AREA_H

#include "wasgo\wasgo.h"

#include "CollisionObject.h"
#include "ustring.h"
#include "Vector3.h"
#include "Variant.h"
#include "Node.h"
class Area : public CollisionObject{
public:
enum SpaceOverride{
SPACE_OVERRIDE_DISABLED,
SPACE_OVERRIDE_COMBINE,
SPACE_OVERRIDE_COMBINE_REPLACE,
SPACE_OVERRIDE_REPLACE,
SPACE_OVERRIDE_REPLACE_COMBINE
};
float get_angular_damp();
String get_audio_bus();
int get_collision_layer();
bool get_collision_layer_bit(int p_bit);
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
float get_gravity();
float get_gravity_distance_scale();
Vector3 get_gravity_vector();
float get_linear_damp();
Array get_overlapping_areas();
Array get_overlapping_bodies();
float get_priority();
float get_reverb_amount();
String get_reverb_bus();
float get_reverb_uniformity();
Area::SpaceOverride get_space_override_mode();
bool is_gravity_a_point();
bool is_monitorable();
bool is_monitoring();
bool is_overriding_audio_bus();
bool is_using_reverb_bus();
bool overlaps_area(Node p_area);
bool overlaps_body(Node p_body);
void set_angular_damp(float p_angular_damp);
void set_audio_bus(String p_name);
void set_audio_bus_override(bool p_enable);
void set_collision_layer(int p_collision_layer);
void set_collision_layer_bit(int p_bit, bool p_value);
void set_collision_mask(int p_collision_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_gravity(float p_gravity);
void set_gravity_distance_scale(float p_distance_scale);
void set_gravity_is_point(bool p_enable);
void set_gravity_vector(Vector3 p_vector);
void set_linear_damp(float p_linear_damp);
void set_monitorable(bool p_enable);
void set_monitoring(bool p_enable);
void set_priority(float p_priority);
void set_reverb_amount(float p_amount);
void set_reverb_bus(String p_name);
void set_reverb_uniformity(float p_amount);
void set_space_override_mode(Area::SpaceOverride p_enable);
void set_use_reverb_bus(bool p_enable);

protected:
Area(WasGoId p_wasgo_id);
public:
Area();
~Area();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_Area_wrapper_get_angular_damp(WasGoId wasgo_id);
void _wasgo_Area_wrapper_get_audio_bus(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Area_wrapper_get_collision_layer(WasGoId wasgo_id);
int _wasgo_Area_wrapper_get_collision_layer_bit(WasGoId wasgo_id, int p_bit);
int _wasgo_Area_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_Area_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
float _wasgo_Area_wrapper_get_gravity(WasGoId wasgo_id);
float _wasgo_Area_wrapper_get_gravity_distance_scale(WasGoId wasgo_id);
void _wasgo_Area_wrapper_get_gravity_vector(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Area_wrapper_get_linear_damp(WasGoId wasgo_id);
WasGoId _wasgo_Area_wrapper_get_overlapping_areas(WasGoId wasgo_id);
WasGoId _wasgo_Area_wrapper_get_overlapping_bodies(WasGoId wasgo_id);
float _wasgo_Area_wrapper_get_priority(WasGoId wasgo_id);
float _wasgo_Area_wrapper_get_reverb_amount(WasGoId wasgo_id);
void _wasgo_Area_wrapper_get_reverb_bus(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Area_wrapper_get_reverb_uniformity(WasGoId wasgo_id);
WasGoId _wasgo_Area_wrapper_get_space_override_mode(WasGoId wasgo_id);
int _wasgo_Area_wrapper_is_gravity_a_point(WasGoId wasgo_id);
int _wasgo_Area_wrapper_is_monitorable(WasGoId wasgo_id);
int _wasgo_Area_wrapper_is_monitoring(WasGoId wasgo_id);
int _wasgo_Area_wrapper_is_overriding_audio_bus(WasGoId wasgo_id);
int _wasgo_Area_wrapper_is_using_reverb_bus(WasGoId wasgo_id);
int _wasgo_Area_wrapper_overlaps_area(WasGoId wasgo_id, WasGoId p_area);
int _wasgo_Area_wrapper_overlaps_body(WasGoId wasgo_id, WasGoId p_body);
void _wasgo_Area_wrapper_set_angular_damp(WasGoId wasgo_id, float p_angular_damp);
void _wasgo_Area_wrapper_set_audio_bus(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Area_wrapper_set_audio_bus_override(WasGoId wasgo_id, bool p_enable);
void _wasgo_Area_wrapper_set_collision_layer(WasGoId wasgo_id, int p_collision_layer);
void _wasgo_Area_wrapper_set_collision_layer_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_Area_wrapper_set_collision_mask(WasGoId wasgo_id, int p_collision_mask);
void _wasgo_Area_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_Area_wrapper_set_gravity(WasGoId wasgo_id, float p_gravity);
void _wasgo_Area_wrapper_set_gravity_distance_scale(WasGoId wasgo_id, float p_distance_scale);
void _wasgo_Area_wrapper_set_gravity_is_point(WasGoId wasgo_id, bool p_enable);
void _wasgo_Area_wrapper_set_gravity_vector(WasGoId wasgo_id, const uint8_t * p_vector, int p_vector_wasgo_buffer_size);
void _wasgo_Area_wrapper_set_linear_damp(WasGoId wasgo_id, float p_linear_damp);
void _wasgo_Area_wrapper_set_monitorable(WasGoId wasgo_id, bool p_enable);
void _wasgo_Area_wrapper_set_monitoring(WasGoId wasgo_id, bool p_enable);
void _wasgo_Area_wrapper_set_priority(WasGoId wasgo_id, float p_priority);
void _wasgo_Area_wrapper_set_reverb_amount(WasGoId wasgo_id, float p_amount);
void _wasgo_Area_wrapper_set_reverb_bus(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Area_wrapper_set_reverb_uniformity(WasGoId wasgo_id, float p_amount);
void _wasgo_Area_wrapper_set_space_override_mode(WasGoId wasgo_id, WasGoId p_enable);
void _wasgo_Area_wrapper_set_use_reverb_bus(WasGoId wasgo_id, bool p_enable);

    //constructor and destructor wrappers
    WasGoId _wasgo_Area_constructor();
    void _wasgo_Area_destructor(WasGoId p_wasgo_id);
            
}
#endif