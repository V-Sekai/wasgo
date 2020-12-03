/* THIS FILE IS GENERATED */
#ifndef ANIMATION_H
#define ANIMATION_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Variant.h"
#include "Resource.h"
#include "Vector3.h"
#include "Quat.h"
#include "Vector2.h"
#include "NodePath.h"
class Animation : public Resource{
public:
enum InterpolationType{
INTERPOLATION_NEAREST,
INTERPOLATION_LINEAR,
INTERPOLATION_CUBIC
};
enum TrackType{
TYPE_VALUE,
TYPE_TRANSFORM,
TYPE_METHOD,
TYPE_BEZIER,
TYPE_AUDIO,
TYPE_ANIMATION
};
enum UpdateMode{
UPDATE_CONTINUOUS,
UPDATE_DISCRETE,
UPDATE_TRIGGER,
UPDATE_CAPTURE
};
int add_track(Animation::TrackType p_type, int p_at_position = (int) -1);
String animation_track_get_key_animation(int p_track_idx, int p_key_idx);
int animation_track_insert_key(int p_track_idx, float p_time, String p_animation);
void animation_track_set_key_animation(int p_track_idx, int p_key_idx, String p_animation);
float audio_track_get_key_end_offset(int p_track_idx, int p_key_idx);
float audio_track_get_key_start_offset(int p_track_idx, int p_key_idx);
Resource audio_track_get_key_stream(int p_track_idx, int p_key_idx);
int audio_track_insert_key(int p_track_idx, float p_time, Resource p_stream, float p_start_offset = (float) 0, float p_end_offset = (float) 0);
void audio_track_set_key_end_offset(int p_track_idx, int p_key_idx, float p_offset);
void audio_track_set_key_start_offset(int p_track_idx, int p_key_idx, float p_offset);
void audio_track_set_key_stream(int p_track_idx, int p_key_idx, Resource p_stream);
Vector2 bezier_track_get_key_in_handle(int p_track_idx, int p_key_idx);
Vector2 bezier_track_get_key_out_handle(int p_track_idx, int p_key_idx);
float bezier_track_get_key_value(int p_track_idx, int p_key_idx);
int bezier_track_insert_key(int p_track_idx, float p_time, float p_value, Vector2 p_in_handle = Vector2((0, 0)), Vector2 p_out_handle = Vector2((0, 0)));
float bezier_track_interpolate(int p_track_idx, float p_time);
void bezier_track_set_key_in_handle(int p_track_idx, int p_key_idx, Vector2 p_in_handle);
void bezier_track_set_key_out_handle(int p_track_idx, int p_key_idx, Vector2 p_out_handle);
void bezier_track_set_key_value(int p_track_idx, int p_key_idx, float p_value);
void clear();
void copy_track(int p_track_idx, Animation p_to_animation);
int find_track(NodePath p_path);
float get_length();
float get_step();
int get_track_count();
bool has_loop();
PoolIntArray method_track_get_key_indices(int p_track_idx, float p_time_sec, float p_delta);
String method_track_get_name(int p_track_idx, int p_key_idx);
Array method_track_get_params(int p_track_idx, int p_key_idx);
void remove_track(int p_track_idx);
void set_length(float p_time_sec);
void set_loop(bool p_enabled);
void set_step(float p_size_sec);
int track_find_key(int p_track_idx, float p_time, bool p_exact = (bool) false);
bool track_get_interpolation_loop_wrap(int p_track_idx);
Animation::InterpolationType track_get_interpolation_type(int p_track_idx);
int track_get_key_count(int p_track_idx);
float track_get_key_time(int p_track_idx, int p_key_idx);
float track_get_key_transition(int p_track_idx, int p_key_idx);
Variant track_get_key_value(int p_track_idx, int p_key_idx);
NodePath track_get_path(int p_track_idx);
Animation::TrackType track_get_type(int p_track_idx);
void track_insert_key(int p_track_idx, float p_time, Variant p_key, float p_transition = (float) 1);
bool track_is_enabled(int p_track_idx);
bool track_is_imported(int p_track_idx);
void track_move_down(int p_track_idx);
void track_move_to(int p_track_idx, int p_to_idx);
void track_move_up(int p_track_idx);
void track_remove_key(int p_track_idx, int p_key_idx);
void track_remove_key_at_position(int p_track_idx, float p_position);
void track_set_enabled(int p_track_idx, bool p_enabled);
void track_set_imported(int p_track_idx, bool p_imported);
void track_set_interpolation_loop_wrap(int p_track_idx, bool p_interpolation);
void track_set_interpolation_type(int p_track_idx, Animation::InterpolationType p_interpolation);
void track_set_key_time(int p_track_idx, int p_key_idx, float p_time);
void track_set_key_transition(int p_track_idx, int p_key_idx, float p_transition);
void track_set_key_value(int p_track_idx, int p_key, Variant p_value);
void track_set_path(int p_track_idx, NodePath p_path);
void track_swap(int p_track_idx, int p_with_idx);
int transform_track_insert_key(int p_track_idx, float p_time, Vector3 p_location, Quat p_rotation, Vector3 p_scale);
Array transform_track_interpolate(int p_track_idx, float p_time_sec);
PoolIntArray value_track_get_key_indices(int p_track_idx, float p_time_sec, float p_delta);
Animation::UpdateMode value_track_get_update_mode(int p_track_idx);
Variant value_track_interpolate(int p_track_idx, float p_time_sec);
void value_track_set_update_mode(int p_track_idx, Animation::UpdateMode p_mode);

protected:
Animation(WasGoId p_wasgo_id);
public:
Animation();
~Animation();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Animation_wrapper_add_track(WasGoId wasgo_id, WasGoId p_type, int p_at_position);
void _wasgo_Animation_wrapper_animation_track_get_key_animation(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_track_idx, int p_key_idx);
int _wasgo_Animation_wrapper_animation_track_insert_key(WasGoId wasgo_id, int p_track_idx, float p_time, const uint8_t * p_animation, int p_animation_wasgo_buffer_size);
void _wasgo_Animation_wrapper_animation_track_set_key_animation(WasGoId wasgo_id, int p_track_idx, int p_key_idx, const uint8_t * p_animation, int p_animation_wasgo_buffer_size);
float _wasgo_Animation_wrapper_audio_track_get_key_end_offset(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
float _wasgo_Animation_wrapper_audio_track_get_key_start_offset(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
WasGoId _wasgo_Animation_wrapper_audio_track_get_key_stream(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
int _wasgo_Animation_wrapper_audio_track_insert_key(WasGoId wasgo_id, int p_track_idx, float p_time, WasGoId p_stream, float p_start_offset, float p_end_offset);
void _wasgo_Animation_wrapper_audio_track_set_key_end_offset(WasGoId wasgo_id, int p_track_idx, int p_key_idx, float p_offset);
void _wasgo_Animation_wrapper_audio_track_set_key_start_offset(WasGoId wasgo_id, int p_track_idx, int p_key_idx, float p_offset);
void _wasgo_Animation_wrapper_audio_track_set_key_stream(WasGoId wasgo_id, int p_track_idx, int p_key_idx, WasGoId p_stream);
void _wasgo_Animation_wrapper_bezier_track_get_key_in_handle(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_track_idx, int p_key_idx);
void _wasgo_Animation_wrapper_bezier_track_get_key_out_handle(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_track_idx, int p_key_idx);
float _wasgo_Animation_wrapper_bezier_track_get_key_value(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
int _wasgo_Animation_wrapper_bezier_track_insert_key(WasGoId wasgo_id, int p_track_idx, float p_time, float p_value, const uint8_t * p_in_handle, int p_in_handle_wasgo_buffer_size, const uint8_t * p_out_handle, int p_out_handle_wasgo_buffer_size);
float _wasgo_Animation_wrapper_bezier_track_interpolate(WasGoId wasgo_id, int p_track_idx, float p_time);
void _wasgo_Animation_wrapper_bezier_track_set_key_in_handle(WasGoId wasgo_id, int p_track_idx, int p_key_idx, const uint8_t * p_in_handle, int p_in_handle_wasgo_buffer_size);
void _wasgo_Animation_wrapper_bezier_track_set_key_out_handle(WasGoId wasgo_id, int p_track_idx, int p_key_idx, const uint8_t * p_out_handle, int p_out_handle_wasgo_buffer_size);
void _wasgo_Animation_wrapper_bezier_track_set_key_value(WasGoId wasgo_id, int p_track_idx, int p_key_idx, float p_value);
void _wasgo_Animation_wrapper_clear(WasGoId wasgo_id);
void _wasgo_Animation_wrapper_copy_track(WasGoId wasgo_id, int p_track_idx, WasGoId p_to_animation);
int _wasgo_Animation_wrapper_find_track(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
float _wasgo_Animation_wrapper_get_length(WasGoId wasgo_id);
float _wasgo_Animation_wrapper_get_step(WasGoId wasgo_id);
int _wasgo_Animation_wrapper_get_track_count(WasGoId wasgo_id);
int _wasgo_Animation_wrapper_has_loop(WasGoId wasgo_id);
WasGoId _wasgo_Animation_wrapper_method_track_get_key_indices(WasGoId wasgo_id, int p_track_idx, float p_time_sec, float p_delta);
void _wasgo_Animation_wrapper_method_track_get_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_track_idx, int p_key_idx);
WasGoId _wasgo_Animation_wrapper_method_track_get_params(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
void _wasgo_Animation_wrapper_remove_track(WasGoId wasgo_id, int p_track_idx);
void _wasgo_Animation_wrapper_set_length(WasGoId wasgo_id, float p_time_sec);
void _wasgo_Animation_wrapper_set_loop(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Animation_wrapper_set_step(WasGoId wasgo_id, float p_size_sec);
int _wasgo_Animation_wrapper_track_find_key(WasGoId wasgo_id, int p_track_idx, float p_time, bool p_exact);
int _wasgo_Animation_wrapper_track_get_interpolation_loop_wrap(WasGoId wasgo_id, int p_track_idx);
WasGoId _wasgo_Animation_wrapper_track_get_interpolation_type(WasGoId wasgo_id, int p_track_idx);
int _wasgo_Animation_wrapper_track_get_key_count(WasGoId wasgo_id, int p_track_idx);
float _wasgo_Animation_wrapper_track_get_key_time(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
float _wasgo_Animation_wrapper_track_get_key_transition(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
WasGoId _wasgo_Animation_wrapper_track_get_key_value(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
void _wasgo_Animation_wrapper_track_get_path(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_track_idx);
WasGoId _wasgo_Animation_wrapper_track_get_type(WasGoId wasgo_id, int p_track_idx);
void _wasgo_Animation_wrapper_track_insert_key(WasGoId wasgo_id, int p_track_idx, float p_time, WasGoId p_key, float p_transition);
int _wasgo_Animation_wrapper_track_is_enabled(WasGoId wasgo_id, int p_track_idx);
int _wasgo_Animation_wrapper_track_is_imported(WasGoId wasgo_id, int p_track_idx);
void _wasgo_Animation_wrapper_track_move_down(WasGoId wasgo_id, int p_track_idx);
void _wasgo_Animation_wrapper_track_move_to(WasGoId wasgo_id, int p_track_idx, int p_to_idx);
void _wasgo_Animation_wrapper_track_move_up(WasGoId wasgo_id, int p_track_idx);
void _wasgo_Animation_wrapper_track_remove_key(WasGoId wasgo_id, int p_track_idx, int p_key_idx);
void _wasgo_Animation_wrapper_track_remove_key_at_position(WasGoId wasgo_id, int p_track_idx, float p_position);
void _wasgo_Animation_wrapper_track_set_enabled(WasGoId wasgo_id, int p_track_idx, bool p_enabled);
void _wasgo_Animation_wrapper_track_set_imported(WasGoId wasgo_id, int p_track_idx, bool p_imported);
void _wasgo_Animation_wrapper_track_set_interpolation_loop_wrap(WasGoId wasgo_id, int p_track_idx, bool p_interpolation);
void _wasgo_Animation_wrapper_track_set_interpolation_type(WasGoId wasgo_id, int p_track_idx, WasGoId p_interpolation);
void _wasgo_Animation_wrapper_track_set_key_time(WasGoId wasgo_id, int p_track_idx, int p_key_idx, float p_time);
void _wasgo_Animation_wrapper_track_set_key_transition(WasGoId wasgo_id, int p_track_idx, int p_key_idx, float p_transition);
void _wasgo_Animation_wrapper_track_set_key_value(WasGoId wasgo_id, int p_track_idx, int p_key, WasGoId p_value);
void _wasgo_Animation_wrapper_track_set_path(WasGoId wasgo_id, int p_track_idx, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_Animation_wrapper_track_swap(WasGoId wasgo_id, int p_track_idx, int p_with_idx);
int _wasgo_Animation_wrapper_transform_track_insert_key(WasGoId wasgo_id, int p_track_idx, float p_time, const uint8_t * p_location, int p_location_wasgo_buffer_size, const uint8_t * p_rotation, int p_rotation_wasgo_buffer_size, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
WasGoId _wasgo_Animation_wrapper_transform_track_interpolate(WasGoId wasgo_id, int p_track_idx, float p_time_sec);
WasGoId _wasgo_Animation_wrapper_value_track_get_key_indices(WasGoId wasgo_id, int p_track_idx, float p_time_sec, float p_delta);
WasGoId _wasgo_Animation_wrapper_value_track_get_update_mode(WasGoId wasgo_id, int p_track_idx);
WasGoId _wasgo_Animation_wrapper_value_track_interpolate(WasGoId wasgo_id, int p_track_idx, float p_time_sec);
void _wasgo_Animation_wrapper_value_track_set_update_mode(WasGoId wasgo_id, int p_track_idx, WasGoId p_mode);

    //constructor and destructor wrappers
    WasGoId _wasgo_Animation_constructor();
    void _wasgo_Animation_destructor(WasGoId p_wasgo_id);
            
}
#endif