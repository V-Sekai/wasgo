/* THIS FILE IS GENERATED */
#include "Animation.h"
int Animation::add_track(Animation::TrackType p_type, int p_at_position = (int) -1){
	return (int) _wasgo_Animation_wrapper_add_track(wasgo_id, ((Variant) p_type).get_wasgo_id(), p_at_position);
}
String Animation::animation_track_get_key_animation(int p_track_idx, int p_key_idx){
	return String::from_wasgo_id(_wasgo_Animation_wrapper_animation_track_get_key_animation(wasgo_id, p_track_idx, p_key_idx));
}
int Animation::animation_track_insert_key(int p_track_idx, float p_time, String p_animation){
	return (int) _wasgo_Animation_wrapper_animation_track_insert_key(wasgo_id, p_track_idx, p_time, ((Variant) p_animation).get_wasgo_id());
}
void Animation::animation_track_set_key_animation(int p_track_idx, int p_key_idx, String p_animation){
	_wasgo_Animation_wrapper_animation_track_set_key_animation(wasgo_id, p_track_idx, p_key_idx, ((Variant) p_animation).get_wasgo_id());
}
float Animation::audio_track_get_key_end_offset(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_audio_track_get_key_end_offset(wasgo_id, p_track_idx, p_key_idx);
}
float Animation::audio_track_get_key_start_offset(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_audio_track_get_key_start_offset(wasgo_id, p_track_idx, p_key_idx);
}
Resource Animation::audio_track_get_key_stream(int p_track_idx, int p_key_idx){
	return Resource::from_wasgo_id(_wasgo_Animation_wrapper_audio_track_get_key_stream(wasgo_id, p_track_idx, p_key_idx));
}
int Animation::audio_track_insert_key(int p_track_idx, float p_time, Resource p_stream, float p_start_offset = (float) 0, float p_end_offset = (float) 0){
	return (int) _wasgo_Animation_wrapper_audio_track_insert_key(wasgo_id, p_track_idx, p_time, ((Variant) p_stream).get_wasgo_id(), p_start_offset, p_end_offset);
}
void Animation::audio_track_set_key_end_offset(int p_track_idx, int p_key_idx, float p_offset){
	_wasgo_Animation_wrapper_audio_track_set_key_end_offset(wasgo_id, p_track_idx, p_key_idx, p_offset);
}
void Animation::audio_track_set_key_start_offset(int p_track_idx, int p_key_idx, float p_offset){
	_wasgo_Animation_wrapper_audio_track_set_key_start_offset(wasgo_id, p_track_idx, p_key_idx, p_offset);
}
void Animation::audio_track_set_key_stream(int p_track_idx, int p_key_idx, Resource p_stream){
	_wasgo_Animation_wrapper_audio_track_set_key_stream(wasgo_id, p_track_idx, p_key_idx, ((Variant) p_stream).get_wasgo_id());
}
Vector2 Animation::bezier_track_get_key_in_handle(int p_track_idx, int p_key_idx){
	return Vector2::from_wasgo_id(_wasgo_Animation_wrapper_bezier_track_get_key_in_handle(wasgo_id, p_track_idx, p_key_idx));
}
Vector2 Animation::bezier_track_get_key_out_handle(int p_track_idx, int p_key_idx){
	return Vector2::from_wasgo_id(_wasgo_Animation_wrapper_bezier_track_get_key_out_handle(wasgo_id, p_track_idx, p_key_idx));
}
float Animation::bezier_track_get_key_value(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_bezier_track_get_key_value(wasgo_id, p_track_idx, p_key_idx);
}
int Animation::bezier_track_insert_key(int p_track_idx, float p_time, float p_value, Vector2 p_in_handle = Vector2((0, 0)), Vector2 p_out_handle = Vector2((0, 0))){
	return (int) _wasgo_Animation_wrapper_bezier_track_insert_key(wasgo_id, p_track_idx, p_time, p_value, ((Variant) p_in_handle).get_wasgo_id(), ((Variant) p_out_handle).get_wasgo_id());
}
float Animation::bezier_track_interpolate(int p_track_idx, float p_time){
	return (float) _wasgo_Animation_wrapper_bezier_track_interpolate(wasgo_id, p_track_idx, p_time);
}
void Animation::bezier_track_set_key_in_handle(int p_track_idx, int p_key_idx, Vector2 p_in_handle){
	_wasgo_Animation_wrapper_bezier_track_set_key_in_handle(wasgo_id, p_track_idx, p_key_idx, ((Variant) p_in_handle).get_wasgo_id());
}
void Animation::bezier_track_set_key_out_handle(int p_track_idx, int p_key_idx, Vector2 p_out_handle){
	_wasgo_Animation_wrapper_bezier_track_set_key_out_handle(wasgo_id, p_track_idx, p_key_idx, ((Variant) p_out_handle).get_wasgo_id());
}
void Animation::bezier_track_set_key_value(int p_track_idx, int p_key_idx, float p_value){
	_wasgo_Animation_wrapper_bezier_track_set_key_value(wasgo_id, p_track_idx, p_key_idx, p_value);
}
void Animation::clear(){
	_wasgo_Animation_wrapper_clear(wasgo_id);
}
void Animation::copy_track(int p_track_idx, Animation p_to_animation){
	_wasgo_Animation_wrapper_copy_track(wasgo_id, p_track_idx, ((Variant) p_to_animation).get_wasgo_id());
}
int Animation::find_track(NodePath p_path){
	return (int) _wasgo_Animation_wrapper_find_track(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
float Animation::get_length(){
	return (float) _wasgo_Animation_wrapper_get_length(wasgo_id);
}
float Animation::get_step(){
	return (float) _wasgo_Animation_wrapper_get_step(wasgo_id);
}
int Animation::get_track_count(){
	return (int) _wasgo_Animation_wrapper_get_track_count(wasgo_id);
}
bool Animation::has_loop(){
	return (bool) _wasgo_Animation_wrapper_has_loop(wasgo_id);
}
PoolIntArray Animation::method_track_get_key_indices(int p_track_idx, float p_time_sec, float p_delta){
	return PoolIntArray::from_wasgo_id(_wasgo_Animation_wrapper_method_track_get_key_indices(wasgo_id, p_track_idx, p_time_sec, p_delta));
}
String Animation::method_track_get_name(int p_track_idx, int p_key_idx){
	return String::from_wasgo_id(_wasgo_Animation_wrapper_method_track_get_name(wasgo_id, p_track_idx, p_key_idx));
}
Array Animation::method_track_get_params(int p_track_idx, int p_key_idx){
	return Array::from_wasgo_id(_wasgo_Animation_wrapper_method_track_get_params(wasgo_id, p_track_idx, p_key_idx));
}
void Animation::remove_track(int p_track_idx){
	_wasgo_Animation_wrapper_remove_track(wasgo_id, p_track_idx);
}
void Animation::set_length(float p_time_sec){
	_wasgo_Animation_wrapper_set_length(wasgo_id, p_time_sec);
}
void Animation::set_loop(bool p_enabled){
	_wasgo_Animation_wrapper_set_loop(wasgo_id, p_enabled);
}
void Animation::set_step(float p_size_sec){
	_wasgo_Animation_wrapper_set_step(wasgo_id, p_size_sec);
}
int Animation::track_find_key(int p_track_idx, float p_time, bool p_exact = (bool) false){
	return (int) _wasgo_Animation_wrapper_track_find_key(wasgo_id, p_track_idx, p_time, p_exact);
}
bool Animation::track_get_interpolation_loop_wrap(int p_track_idx){
	return (bool) _wasgo_Animation_wrapper_track_get_interpolation_loop_wrap(wasgo_id, p_track_idx);
}
Animation::InterpolationType Animation::track_get_interpolation_type(int p_track_idx){
	return Animation::InterpolationType::from_wasgo_id(_wasgo_Animation_wrapper_track_get_interpolation_type(wasgo_id, p_track_idx));
}
int Animation::track_get_key_count(int p_track_idx){
	return (int) _wasgo_Animation_wrapper_track_get_key_count(wasgo_id, p_track_idx);
}
float Animation::track_get_key_time(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_track_get_key_time(wasgo_id, p_track_idx, p_key_idx);
}
float Animation::track_get_key_transition(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_track_get_key_transition(wasgo_id, p_track_idx, p_key_idx);
}
Variant Animation::track_get_key_value(int p_track_idx, int p_key_idx){
	return Variant::from_wasgo_id(_wasgo_Animation_wrapper_track_get_key_value(wasgo_id, p_track_idx, p_key_idx));
}
NodePath Animation::track_get_path(int p_track_idx){
	return NodePath::from_wasgo_id(_wasgo_Animation_wrapper_track_get_path(wasgo_id, p_track_idx));
}
Animation::TrackType Animation::track_get_type(int p_track_idx){
	return Animation::TrackType::from_wasgo_id(_wasgo_Animation_wrapper_track_get_type(wasgo_id, p_track_idx));
}
void Animation::track_insert_key(int p_track_idx, float p_time, Variant p_key, float p_transition = (float) 1){
	_wasgo_Animation_wrapper_track_insert_key(wasgo_id, p_track_idx, p_time, ((Variant) p_key).get_wasgo_id(), p_transition);
}
bool Animation::track_is_enabled(int p_track_idx){
	return (bool) _wasgo_Animation_wrapper_track_is_enabled(wasgo_id, p_track_idx);
}
bool Animation::track_is_imported(int p_track_idx){
	return (bool) _wasgo_Animation_wrapper_track_is_imported(wasgo_id, p_track_idx);
}
void Animation::track_move_down(int p_track_idx){
	_wasgo_Animation_wrapper_track_move_down(wasgo_id, p_track_idx);
}
void Animation::track_move_to(int p_track_idx, int p_to_idx){
	_wasgo_Animation_wrapper_track_move_to(wasgo_id, p_track_idx, p_to_idx);
}
void Animation::track_move_up(int p_track_idx){
	_wasgo_Animation_wrapper_track_move_up(wasgo_id, p_track_idx);
}
void Animation::track_remove_key(int p_track_idx, int p_key_idx){
	_wasgo_Animation_wrapper_track_remove_key(wasgo_id, p_track_idx, p_key_idx);
}
void Animation::track_remove_key_at_position(int p_track_idx, float p_position){
	_wasgo_Animation_wrapper_track_remove_key_at_position(wasgo_id, p_track_idx, p_position);
}
void Animation::track_set_enabled(int p_track_idx, bool p_enabled){
	_wasgo_Animation_wrapper_track_set_enabled(wasgo_id, p_track_idx, p_enabled);
}
void Animation::track_set_imported(int p_track_idx, bool p_imported){
	_wasgo_Animation_wrapper_track_set_imported(wasgo_id, p_track_idx, p_imported);
}
void Animation::track_set_interpolation_loop_wrap(int p_track_idx, bool p_interpolation){
	_wasgo_Animation_wrapper_track_set_interpolation_loop_wrap(wasgo_id, p_track_idx, p_interpolation);
}
void Animation::track_set_interpolation_type(int p_track_idx, Animation::InterpolationType p_interpolation){
	_wasgo_Animation_wrapper_track_set_interpolation_type(wasgo_id, p_track_idx, ((Variant) p_interpolation).get_wasgo_id());
}
void Animation::track_set_key_time(int p_track_idx, int p_key_idx, float p_time){
	_wasgo_Animation_wrapper_track_set_key_time(wasgo_id, p_track_idx, p_key_idx, p_time);
}
void Animation::track_set_key_transition(int p_track_idx, int p_key_idx, float p_transition){
	_wasgo_Animation_wrapper_track_set_key_transition(wasgo_id, p_track_idx, p_key_idx, p_transition);
}
void Animation::track_set_key_value(int p_track_idx, int p_key, Variant p_value){
	_wasgo_Animation_wrapper_track_set_key_value(wasgo_id, p_track_idx, p_key, ((Variant) p_value).get_wasgo_id());
}
void Animation::track_set_path(int p_track_idx, NodePath p_path){
	_wasgo_Animation_wrapper_track_set_path(wasgo_id, p_track_idx, ((Variant) p_path).get_wasgo_id());
}
void Animation::track_swap(int p_track_idx, int p_with_idx){
	_wasgo_Animation_wrapper_track_swap(wasgo_id, p_track_idx, p_with_idx);
}
int Animation::transform_track_insert_key(int p_track_idx, float p_time, Vector3 p_location, Quat p_rotation, Vector3 p_scale){
	return (int) _wasgo_Animation_wrapper_transform_track_insert_key(wasgo_id, p_track_idx, p_time, ((Variant) p_location).get_wasgo_id(), ((Variant) p_rotation).get_wasgo_id(), ((Variant) p_scale).get_wasgo_id());
}
Array Animation::transform_track_interpolate(int p_track_idx, float p_time_sec){
	return Array::from_wasgo_id(_wasgo_Animation_wrapper_transform_track_interpolate(wasgo_id, p_track_idx, p_time_sec));
}
PoolIntArray Animation::value_track_get_key_indices(int p_track_idx, float p_time_sec, float p_delta){
	return PoolIntArray::from_wasgo_id(_wasgo_Animation_wrapper_value_track_get_key_indices(wasgo_id, p_track_idx, p_time_sec, p_delta));
}
Animation::UpdateMode Animation::value_track_get_update_mode(int p_track_idx){
	return Animation::UpdateMode::from_wasgo_id(_wasgo_Animation_wrapper_value_track_get_update_mode(wasgo_id, p_track_idx));
}
Variant Animation::value_track_interpolate(int p_track_idx, float p_time_sec){
	return Variant::from_wasgo_id(_wasgo_Animation_wrapper_value_track_interpolate(wasgo_id, p_track_idx, p_time_sec));
}
void Animation::value_track_set_update_mode(int p_track_idx, Animation::UpdateMode p_mode){
	_wasgo_Animation_wrapper_value_track_set_update_mode(wasgo_id, p_track_idx, ((Variant) p_mode).get_wasgo_id());
}