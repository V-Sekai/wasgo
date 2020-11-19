/* THIS FILE IS GENERATED */
#ifndef ANIMATION_H
#define ANIMATION_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Resource.h"
#include "NodePath.h"
#include "Quat.h"
#include "Vector3.h"
#include "PoolIntArray.h"
#include "Variant.h"
class Animation : public Resource{
public: Animation();
enum TrackType{
TYPE_VALUE: 0,
TYPE_TRANSFORM: 1,
TYPE_METHOD: 2,
TYPE_BEZIER: 3,
TYPE_AUDIO: 4,
};
enum UpdateMode{
UPDATE_CONTINUOUS: 0,
UPDATE_DISCRETE: 1,
UPDATE_TRIGGER: 2,
};
enum InterpolationType{
INTERPOLATION_NEAREST: 0,
INTERPOLATION_LINEAR: 1,
};
int  add_track(int type, int at_position = -1);
String  animation_track_get_key_animation(int track_idx, int key_idx);
int  animation_track_insert_key(int track_idx, float time, String animation);
void  animation_track_set_key_animation(int track_idx, int key_idx, String animation);
float  audio_track_get_key_end_offset(int track_idx, int key_idx);
float  audio_track_get_key_start_offset(int track_idx, int key_idx);
Resource  audio_track_get_key_stream(int track_idx, int key_idx);
int  audio_track_insert_key(int track_idx, float time, Resource stream, float start_offset = 0, float end_offset = 0);
void  audio_track_set_key_end_offset(int track_idx, int key_idx, float offset);
void  audio_track_set_key_start_offset(int track_idx, int key_idx, float offset);
void  audio_track_set_key_stream(int track_idx, int key_idx, Resource stream);
Vector2  bezier_track_get_key_in_handle(int track_idx, int key_idx);
Vector2  bezier_track_get_key_out_handle(int track_idx, int key_idx);
float  bezier_track_get_key_value(int track_idx, int key_idx);
int  bezier_track_insert_key(int track_idx, float time, float value, Vector2 in_handle = (0, 0), Vector2 out_handle = (0, 0));
float  bezier_track_interpolate(int track_idx, float time);
void  bezier_track_set_key_in_handle(int track_idx, int key_idx, Vector2 in_handle);
void  bezier_track_set_key_out_handle(int track_idx, int key_idx, Vector2 out_handle);
void  bezier_track_set_key_value(int track_idx, int key_idx, float value);
void  clear();
void  clear();
void  copy_track(int track_idx, Animation to_animation);
int  find_track(NodePath path);
float  get_length();
float  get_length();
float  get_step();
float  get_step();
int  get_track_count();
int  get_track_count();
bool  has_loop();
bool  has_loop();
PoolIntArray  method_track_get_key_indices(int track_idx, float time_sec, float delta);
String  method_track_get_name(int track_idx, int key_idx);
Array  method_track_get_params(int track_idx, int key_idx);
void  remove_track(int track_idx);
void  set_length(float time_sec);
void  set_loop(bool enabled);
void  set_step(float size_sec);
int  track_find_key(int track_idx, float time, bool exact = false);
bool  track_get_interpolation_loop_wrap(int track_idx);
enum.Animation::InterpolationType  track_get_interpolation_type(int track_idx);
int  track_get_key_count(int track_idx);
float  track_get_key_time(int track_idx, int key_idx);
float  track_get_key_transition(int track_idx, int key_idx);
Variant  track_get_key_value(int track_idx, int key_idx);
NodePath  track_get_path(int track_idx);
enum.Animation::TrackType  track_get_type(int track_idx);
void  track_insert_key(int track_idx, float time, Variant key, float transition = 1);
bool  track_is_enabled(int track_idx);
bool  track_is_imported(int track_idx);
void  track_move_down(int track_idx);
void  track_move_to(int track_idx, int to_idx);
void  track_move_up(int track_idx);
void  track_remove_key(int track_idx, int key_idx);
void  track_remove_key_at_position(int track_idx, float position);
void  track_set_enabled(int track_idx, bool enabled);
void  track_set_imported(int track_idx, bool imported);
void  track_set_interpolation_loop_wrap(int track_idx, bool interpolation);
void  track_set_interpolation_type(int track_idx, int interpolation);
void  track_set_key_time(int track_idx, int key_idx, float time);
void  track_set_key_transition(int track_idx, int key_idx, float transition);
void  track_set_key_value(int track_idx, int key, Variant value);
void  track_set_path(int track_idx, NodePath path);
void  track_swap(int track_idx, int with_idx);
int  transform_track_insert_key(int track_idx, float time, Vector3 location, Quat rotation, Vector3 scale);
Array  transform_track_interpolate(int track_idx, float time_sec);
PoolIntArray  value_track_get_key_indices(int track_idx, float time_sec, float delta);
enum.Animation::UpdateMode  value_track_get_update_mode(int track_idx);
void  value_track_set_update_mode(int track_idx, int mode);
};
#endif