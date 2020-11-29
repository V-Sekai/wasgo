/* THIS FILE IS GENERATED */
#ifndef ANIMATION_H
#define ANIMATION_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Animation : public Resource{
public: Animation();
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
int bezier_track_insert_key(int p_track_idx, float p_time, float p_value, Vector2 p_in_handle = (Vector2) (0, 0), Vector2 p_out_handle = (Vector2) (0, 0));
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
int track_find_key(int p_track_idx, float p_time, bool p_exact = (bool) False);
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
};
#endif