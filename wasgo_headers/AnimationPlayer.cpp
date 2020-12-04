/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationPlayer.h"
Error AnimationPlayer::add_animation(String p_name, Animation p_animation){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Error(_wasgo_AnimationPlayer_wrapper_add_animation(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_animation._get_wasgo_id()));
}
void AnimationPlayer::advance(float p_delta){
	_wasgo_AnimationPlayer_wrapper_advance(wasgo_id, p_delta);
}
String AnimationPlayer::animation_get_next(String p_anim_from){

    Variant wasgo_var_anim_from = p_anim_from;
    int wasgo_size_anim_from = String(p_anim_from).size();
    uint8_t wasgo_buffer_anim_from[wasgo_size_anim_from];
    encode_variant(wasgo_var_anim_from, wasgo_buffer_anim_from, wasgo_size_anim_from);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationPlayer_wrapper_animation_get_next(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_anim_from, wasgo_size_anim_from);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void AnimationPlayer::animation_set_next(String p_anim_from, String p_anim_to){

    Variant wasgo_var_anim_from = p_anim_from;
    int wasgo_size_anim_from = String(p_anim_from).size();
    uint8_t wasgo_buffer_anim_from[wasgo_size_anim_from];
    encode_variant(wasgo_var_anim_from, wasgo_buffer_anim_from, wasgo_size_anim_from);
    

    Variant wasgo_var_anim_to = p_anim_to;
    int wasgo_size_anim_to = String(p_anim_to).size();
    uint8_t wasgo_buffer_anim_to[wasgo_size_anim_to];
    encode_variant(wasgo_var_anim_to, wasgo_buffer_anim_to, wasgo_size_anim_to);
    
	_wasgo_AnimationPlayer_wrapper_animation_set_next(wasgo_id, wasgo_buffer_anim_from, wasgo_size_anim_from, wasgo_buffer_anim_to, wasgo_size_anim_to);
}
void AnimationPlayer::clear_caches(){
	_wasgo_AnimationPlayer_wrapper_clear_caches(wasgo_id);
}
void AnimationPlayer::clear_queue(){
	_wasgo_AnimationPlayer_wrapper_clear_queue(wasgo_id);
}
String AnimationPlayer::find_animation(Animation p_animation){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationPlayer_wrapper_find_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_animation._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Animation AnimationPlayer::get_animation(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Animation(_wasgo_AnimationPlayer_wrapper_get_animation(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
PoolStringArray AnimationPlayer::get_animation_list(){
	return PoolStringArray(_wasgo_AnimationPlayer_wrapper_get_animation_list(wasgo_id));
}
AnimationPlayer::AnimationProcessMode AnimationPlayer::get_animation_process_mode(){
	return AnimationPlayer::AnimationProcessMode(_wasgo_AnimationPlayer_wrapper_get_animation_process_mode(wasgo_id));
}
String AnimationPlayer::get_assigned_animation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationPlayer_wrapper_get_assigned_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String AnimationPlayer::get_autoplay(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationPlayer_wrapper_get_autoplay(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float AnimationPlayer::get_blend_time(String p_anim_from, String p_anim_to){

    Variant wasgo_var_anim_from = p_anim_from;
    int wasgo_size_anim_from = String(p_anim_from).size();
    uint8_t wasgo_buffer_anim_from[wasgo_size_anim_from];
    encode_variant(wasgo_var_anim_from, wasgo_buffer_anim_from, wasgo_size_anim_from);
    

    Variant wasgo_var_anim_to = p_anim_to;
    int wasgo_size_anim_to = String(p_anim_to).size();
    uint8_t wasgo_buffer_anim_to[wasgo_size_anim_to];
    encode_variant(wasgo_var_anim_to, wasgo_buffer_anim_to, wasgo_size_anim_to);
    
	return (float) _wasgo_AnimationPlayer_wrapper_get_blend_time(wasgo_id, wasgo_buffer_anim_from, wasgo_size_anim_from, wasgo_buffer_anim_to, wasgo_size_anim_to);
}
String AnimationPlayer::get_current_animation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationPlayer_wrapper_get_current_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float AnimationPlayer::get_current_animation_length(){
	return (float) _wasgo_AnimationPlayer_wrapper_get_current_animation_length(wasgo_id);
}
float AnimationPlayer::get_current_animation_position(){
	return (float) _wasgo_AnimationPlayer_wrapper_get_current_animation_position(wasgo_id);
}
float AnimationPlayer::get_default_blend_time(){
	return (float) _wasgo_AnimationPlayer_wrapper_get_default_blend_time(wasgo_id);
}
AnimationPlayer::AnimationMethodCallMode AnimationPlayer::get_method_call_mode(){
	return AnimationPlayer::AnimationMethodCallMode(_wasgo_AnimationPlayer_wrapper_get_method_call_mode(wasgo_id));
}
float AnimationPlayer::get_playing_speed(){
	return (float) _wasgo_AnimationPlayer_wrapper_get_playing_speed(wasgo_id);
}
PoolStringArray AnimationPlayer::get_queue(){
	return PoolStringArray(_wasgo_AnimationPlayer_wrapper_get_queue(wasgo_id));
}
NodePath AnimationPlayer::get_root(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationPlayer_wrapper_get_root(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
float AnimationPlayer::get_speed_scale(){
	return (float) _wasgo_AnimationPlayer_wrapper_get_speed_scale(wasgo_id);
}
bool AnimationPlayer::has_animation(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_AnimationPlayer_wrapper_has_animation(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool AnimationPlayer::is_active(){
	return (bool) _wasgo_AnimationPlayer_wrapper_is_active(wasgo_id);
}
bool AnimationPlayer::is_playing(){
	return (bool) _wasgo_AnimationPlayer_wrapper_is_playing(wasgo_id);
}
void AnimationPlayer::play(String p_name = (String) , float p_custom_blend = (float) -1, float p_custom_speed = (float) 1, bool p_from_end = (bool) false){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationPlayer_wrapper_play(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_custom_blend, p_custom_speed, p_from_end);
}
void AnimationPlayer::play_backwards(String p_name = (String) , float p_custom_blend = (float) -1){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationPlayer_wrapper_play_backwards(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_custom_blend);
}
void AnimationPlayer::queue(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationPlayer_wrapper_queue(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationPlayer::remove_animation(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationPlayer_wrapper_remove_animation(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationPlayer::rename_animation(String p_name, String p_newname){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_newname = p_newname;
    int wasgo_size_newname = String(p_newname).size();
    uint8_t wasgo_buffer_newname[wasgo_size_newname];
    encode_variant(wasgo_var_newname, wasgo_buffer_newname, wasgo_size_newname);
    
	_wasgo_AnimationPlayer_wrapper_rename_animation(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_newname, wasgo_size_newname);
}
void AnimationPlayer::seek(float p_seconds, bool p_update = (bool) false){
	_wasgo_AnimationPlayer_wrapper_seek(wasgo_id, p_seconds, p_update);
}
void AnimationPlayer::set_active(bool p_active){
	_wasgo_AnimationPlayer_wrapper_set_active(wasgo_id, p_active);
}
void AnimationPlayer::set_animation_process_mode(AnimationPlayer::AnimationProcessMode p_mode){
	_wasgo_AnimationPlayer_wrapper_set_animation_process_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AnimationPlayer::set_assigned_animation(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_AnimationPlayer_wrapper_set_assigned_animation(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
void AnimationPlayer::set_autoplay(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationPlayer_wrapper_set_autoplay(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationPlayer::set_blend_time(String p_anim_from, String p_anim_to, float p_sec){

    Variant wasgo_var_anim_from = p_anim_from;
    int wasgo_size_anim_from = String(p_anim_from).size();
    uint8_t wasgo_buffer_anim_from[wasgo_size_anim_from];
    encode_variant(wasgo_var_anim_from, wasgo_buffer_anim_from, wasgo_size_anim_from);
    

    Variant wasgo_var_anim_to = p_anim_to;
    int wasgo_size_anim_to = String(p_anim_to).size();
    uint8_t wasgo_buffer_anim_to[wasgo_size_anim_to];
    encode_variant(wasgo_var_anim_to, wasgo_buffer_anim_to, wasgo_size_anim_to);
    
	_wasgo_AnimationPlayer_wrapper_set_blend_time(wasgo_id, wasgo_buffer_anim_from, wasgo_size_anim_from, wasgo_buffer_anim_to, wasgo_size_anim_to, p_sec);
}
void AnimationPlayer::set_current_animation(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_AnimationPlayer_wrapper_set_current_animation(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
void AnimationPlayer::set_default_blend_time(float p_sec){
	_wasgo_AnimationPlayer_wrapper_set_default_blend_time(wasgo_id, p_sec);
}
void AnimationPlayer::set_method_call_mode(AnimationPlayer::AnimationMethodCallMode p_mode){
	_wasgo_AnimationPlayer_wrapper_set_method_call_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AnimationPlayer::set_root(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_AnimationPlayer_wrapper_set_root(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void AnimationPlayer::set_speed_scale(float p_speed){
	_wasgo_AnimationPlayer_wrapper_set_speed_scale(wasgo_id, p_speed);
}
void AnimationPlayer::stop(bool p_reset = (bool) true){
	_wasgo_AnimationPlayer_wrapper_stop(wasgo_id, p_reset);
}

AnimationPlayer::AnimationPlayer(WasGoId p_wasgo_id) : Node(p_wasgo_id){
}
AnimationPlayer::AnimationPlayer(Node other) : Node(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationPlayer_constructor();
}
AnimationPlayer::new_instance(){
    return AnimationPlayer(_wasgo_AnimationPlayer_constructor());
}