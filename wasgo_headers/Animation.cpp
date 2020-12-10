/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Animation.h"
int Animation::add_track(Animation::TrackType p_type, int p_at_position){
	return (int) _wasgo_Animation_wrapper_add_track(wasgo_id, p_type._get_wasgo_id(), p_at_position);
}
String Animation::animation_track_get_key_animation(int p_track_idx, int p_key_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Animation_wrapper_animation_track_get_key_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_track_idx, p_key_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Animation::animation_track_insert_key(int p_track_idx, float p_time, String p_animation){

    Variant wasgo_var_animation = p_animation;
    int wasgo_size_animation = 10 + String(p_animation).size();
    uint8_t wasgo_buffer_animation[wasgo_size_animation];
    encode_variant(wasgo_var_animation, wasgo_buffer_animation, wasgo_size_animation);
    
	return (int) _wasgo_Animation_wrapper_animation_track_insert_key(wasgo_id, p_track_idx, p_time, -69, wasgo_buffer_animation, wasgo_size_animation);
}
void Animation::animation_track_set_key_animation(int p_track_idx, int p_key_idx, String p_animation){

    Variant wasgo_var_animation = p_animation;
    int wasgo_size_animation = 10 + String(p_animation).size();
    uint8_t wasgo_buffer_animation[wasgo_size_animation];
    encode_variant(wasgo_var_animation, wasgo_buffer_animation, wasgo_size_animation);
    
	_wasgo_Animation_wrapper_animation_track_set_key_animation(wasgo_id, p_track_idx, p_key_idx, -69, wasgo_buffer_animation, wasgo_size_animation);
}
float Animation::audio_track_get_key_end_offset(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_audio_track_get_key_end_offset(wasgo_id, p_track_idx, p_key_idx);
}
float Animation::audio_track_get_key_start_offset(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_audio_track_get_key_start_offset(wasgo_id, p_track_idx, p_key_idx);
}
Resource Animation::audio_track_get_key_stream(int p_track_idx, int p_key_idx){
	return Resource(_wasgo_Animation_wrapper_audio_track_get_key_stream(wasgo_id, p_track_idx, p_key_idx));
}
int Animation::audio_track_insert_key(int p_track_idx, float p_time, Resource p_stream, float p_start_offset, float p_end_offset){
	return (int) _wasgo_Animation_wrapper_audio_track_insert_key(wasgo_id, p_track_idx, p_time, -69, p_stream._get_wasgo_id(), p_start_offset, p_end_offset);
}
void Animation::audio_track_set_key_end_offset(int p_track_idx, int p_key_idx, float p_offset){
	_wasgo_Animation_wrapper_audio_track_set_key_end_offset(wasgo_id, p_track_idx, p_key_idx, -69, p_offset);
}
void Animation::audio_track_set_key_start_offset(int p_track_idx, int p_key_idx, float p_offset){
	_wasgo_Animation_wrapper_audio_track_set_key_start_offset(wasgo_id, p_track_idx, p_key_idx, -69, p_offset);
}
void Animation::audio_track_set_key_stream(int p_track_idx, int p_key_idx, Resource p_stream){
	_wasgo_Animation_wrapper_audio_track_set_key_stream(wasgo_id, p_track_idx, p_key_idx, -69, p_stream._get_wasgo_id());
}
Vector2 Animation::bezier_track_get_key_in_handle(int p_track_idx, int p_key_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Animation_wrapper_bezier_track_get_key_in_handle(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_track_idx, p_key_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 Animation::bezier_track_get_key_out_handle(int p_track_idx, int p_key_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Animation_wrapper_bezier_track_get_key_out_handle(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_track_idx, p_key_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float Animation::bezier_track_get_key_value(int p_track_idx, int p_key_idx){
	return (float) _wasgo_Animation_wrapper_bezier_track_get_key_value(wasgo_id, p_track_idx, p_key_idx);
}
int Animation::bezier_track_insert_key(int p_track_idx, float p_time, float p_value, Vector2 p_in_handle, Vector2 p_out_handle){

    Variant wasgo_var_in_handle = p_in_handle;
    uint8_t wasgo_buffer_in_handle[12];
    int wasgo_size_in_handle = 12;
    encode_variant(wasgo_var_in_handle, wasgo_buffer_in_handle, wasgo_size_in_handle);
    

    Variant wasgo_var_out_handle = p_out_handle;
    uint8_t wasgo_buffer_out_handle[12];
    int wasgo_size_out_handle = 12;
    encode_variant(wasgo_var_out_handle, wasgo_buffer_out_handle, wasgo_size_out_handle);
    
	return (int) _wasgo_Animation_wrapper_bezier_track_insert_key(wasgo_id, p_track_idx, p_time, -69, p_value, wasgo_buffer_in_handle, wasgo_size_in_handle, wasgo_buffer_out_handle, wasgo_size_out_handle);
}
float Animation::bezier_track_interpolate(int p_track_idx, float p_time){
	return (float) _wasgo_Animation_wrapper_bezier_track_interpolate(wasgo_id, p_track_idx, p_time);
}
void Animation::bezier_track_set_key_in_handle(int p_track_idx, int p_key_idx, Vector2 p_in_handle){

    Variant wasgo_var_in_handle = p_in_handle;
    uint8_t wasgo_buffer_in_handle[12];
    int wasgo_size_in_handle = 12;
    encode_variant(wasgo_var_in_handle, wasgo_buffer_in_handle, wasgo_size_in_handle);
    
	_wasgo_Animation_wrapper_bezier_track_set_key_in_handle(wasgo_id, p_track_idx, p_key_idx, -69, wasgo_buffer_in_handle, wasgo_size_in_handle);
}
void Animation::bezier_track_set_key_out_handle(int p_track_idx, int p_key_idx, Vector2 p_out_handle){

    Variant wasgo_var_out_handle = p_out_handle;
    uint8_t wasgo_buffer_out_handle[12];
    int wasgo_size_out_handle = 12;
    encode_variant(wasgo_var_out_handle, wasgo_buffer_out_handle, wasgo_size_out_handle);
    
	_wasgo_Animation_wrapper_bezier_track_set_key_out_handle(wasgo_id, p_track_idx, p_key_idx, -69, wasgo_buffer_out_handle, wasgo_size_out_handle);
}
void Animation::bezier_track_set_key_value(int p_track_idx, int p_key_idx, float p_value){
	_wasgo_Animation_wrapper_bezier_track_set_key_value(wasgo_id, p_track_idx, p_key_idx, -69, p_value);
}
void Animation::clear(){
	_wasgo_Animation_wrapper_clear(wasgo_id);
}
void Animation::copy_track(int p_track_idx, Animation p_to_animation){
	_wasgo_Animation_wrapper_copy_track(wasgo_id, p_track_idx, p_to_animation._get_wasgo_id());
}
int Animation::find_track(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (int) _wasgo_Animation_wrapper_find_track(wasgo_id, wasgo_buffer_path, wasgo_size_path);
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
	return PoolIntArray(_wasgo_Animation_wrapper_method_track_get_key_indices(wasgo_id, p_track_idx, p_time_sec, -69, p_delta));
}
String Animation::method_track_get_name(int p_track_idx, int p_key_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Animation_wrapper_method_track_get_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_track_idx, p_key_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Array Animation::method_track_get_params(int p_track_idx, int p_key_idx){
	return Array(_wasgo_Animation_wrapper_method_track_get_params(wasgo_id, p_track_idx, p_key_idx));
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
int Animation::track_find_key(int p_track_idx, float p_time, bool p_exact){
	return (int) _wasgo_Animation_wrapper_track_find_key(wasgo_id, p_track_idx, p_time, -69, p_exact);
}
bool Animation::track_get_interpolation_loop_wrap(int p_track_idx){
	return (bool) _wasgo_Animation_wrapper_track_get_interpolation_loop_wrap(wasgo_id, p_track_idx);
}
Animation::InterpolationType Animation::track_get_interpolation_type(int p_track_idx){
	return Animation::InterpolationType(_wasgo_Animation_wrapper_track_get_interpolation_type(wasgo_id, p_track_idx));
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

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Animation_wrapper_track_get_key_value(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_track_idx, p_key_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
NodePath Animation::track_get_path(int p_track_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Animation_wrapper_track_get_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_track_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Animation::TrackType Animation::track_get_type(int p_track_idx){
	return Animation::TrackType(_wasgo_Animation_wrapper_track_get_type(wasgo_id, p_track_idx));
}
void Animation::track_insert_key(int p_track_idx, float p_time, Variant p_key, float p_transition){

    Variant wasgo_var_key = p_key;
    uint8_t wasgo_buffer_key[256];
    int wasgo_size_key = 256;
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	_wasgo_Animation_wrapper_track_insert_key(wasgo_id, p_track_idx, p_time, -69, wasgo_buffer_key, wasgo_size_key, p_transition);
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
	_wasgo_Animation_wrapper_track_set_interpolation_type(wasgo_id, p_track_idx, p_interpolation._get_wasgo_id());
}
void Animation::track_set_key_time(int p_track_idx, int p_key_idx, float p_time){
	_wasgo_Animation_wrapper_track_set_key_time(wasgo_id, p_track_idx, p_key_idx, -69, p_time);
}
void Animation::track_set_key_transition(int p_track_idx, int p_key_idx, float p_transition){
	_wasgo_Animation_wrapper_track_set_key_transition(wasgo_id, p_track_idx, p_key_idx, -69, p_transition);
}
void Animation::track_set_key_value(int p_track_idx, int p_key, Variant p_value){

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[256];
    int wasgo_size_value = 256;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_Animation_wrapper_track_set_key_value(wasgo_id, p_track_idx, p_key, -69, wasgo_buffer_value, wasgo_size_value);
}
void Animation::track_set_path(int p_track_idx, NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_Animation_wrapper_track_set_path(wasgo_id, p_track_idx, wasgo_buffer_path, wasgo_size_path, wasgo_size_path);
}
void Animation::track_swap(int p_track_idx, int p_with_idx){
	_wasgo_Animation_wrapper_track_swap(wasgo_id, p_track_idx, p_with_idx);
}
int Animation::transform_track_insert_key(int p_track_idx, float p_time, Vector3 p_location, Quat p_rotation, Vector3 p_scale){

    Variant wasgo_var_location = p_location;
    uint8_t wasgo_buffer_location[16];
    int wasgo_size_location = 16;
    encode_variant(wasgo_var_location, wasgo_buffer_location, wasgo_size_location);
    

    Variant wasgo_var_rotation = p_rotation;
    uint8_t wasgo_buffer_rotation[20];
    int wasgo_size_rotation = 20;
    encode_variant(wasgo_var_rotation, wasgo_buffer_rotation, wasgo_size_rotation);
    

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[16];
    int wasgo_size_scale = 16;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	return (int) _wasgo_Animation_wrapper_transform_track_insert_key(wasgo_id, p_track_idx, p_time, -69, wasgo_buffer_location, wasgo_size_location, wasgo_buffer_rotation, wasgo_size_rotation, wasgo_buffer_scale, wasgo_size_scale);
}
Array Animation::transform_track_interpolate(int p_track_idx, float p_time_sec){
	return Array(_wasgo_Animation_wrapper_transform_track_interpolate(wasgo_id, p_track_idx, p_time_sec));
}
PoolIntArray Animation::value_track_get_key_indices(int p_track_idx, float p_time_sec, float p_delta){
	return PoolIntArray(_wasgo_Animation_wrapper_value_track_get_key_indices(wasgo_id, p_track_idx, p_time_sec, -69, p_delta));
}
Animation::UpdateMode Animation::value_track_get_update_mode(int p_track_idx){
	return Animation::UpdateMode(_wasgo_Animation_wrapper_value_track_get_update_mode(wasgo_id, p_track_idx));
}
void Animation::value_track_set_update_mode(int p_track_idx, Animation::UpdateMode p_mode){
	_wasgo_Animation_wrapper_value_track_set_update_mode(wasgo_id, p_track_idx, p_mode._get_wasgo_id());
}

Animation::Animation(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Animation::Animation(Resource other) : Resource(other._get_wasgo_id()){
}
Animation::Animation():Resource(){
}
Animation Animation::new_instance(){
    return Animation(_wasgo_Animation_constructor());
}
WasGoID Animation::_get_wasgo_id(){
    return wasgo_id;
}
Animation::operator bool(){
    return (bool) wasgo_id;
}
