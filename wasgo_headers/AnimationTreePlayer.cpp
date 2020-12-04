/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationTreePlayer.h"
void AnimationTreePlayer::add_node(AnimationTreePlayer::NodeType p_type, String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_add_node(wasgo_id, p_type._get_wasgo_id(), wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::advance(float p_delta){
	_wasgo_AnimationTreePlayer_wrapper_advance(wasgo_id, p_delta);
}
Animation AnimationTreePlayer::animation_node_get_animation(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return Animation(_wasgo_AnimationTreePlayer_wrapper_animation_node_get_animation(wasgo_id, wasgo_buffer_id, wasgo_size_id));
}
String AnimationTreePlayer::animation_node_get_master_animation(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationTreePlayer_wrapper_animation_node_get_master_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_id, wasgo_size_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float AnimationTreePlayer::animation_node_get_position(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_animation_node_get_position(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::animation_node_set_animation(String p_id, Animation p_animation){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_animation_node_set_animation(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_animation._get_wasgo_id());
}
void AnimationTreePlayer::animation_node_set_filter_path(String p_id, NodePath p_path, bool p_enable){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_AnimationTreePlayer_wrapper_animation_node_set_filter_path(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_path, wasgo_size_path, p_enable);
}
void AnimationTreePlayer::animation_node_set_master_animation(String p_id, String p_source){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_source = p_source;
    int wasgo_size_source = String(p_source).size();
    uint8_t wasgo_buffer_source[wasgo_size_source];
    encode_variant(wasgo_var_source, wasgo_buffer_source, wasgo_size_source);
    
	_wasgo_AnimationTreePlayer_wrapper_animation_node_set_master_animation(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_source, wasgo_size_source);
}
bool AnimationTreePlayer::are_nodes_connected(String p_id, String p_dst_id, int p_dst_input_idx){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_dst_id = p_dst_id;
    int wasgo_size_dst_id = String(p_dst_id).size();
    uint8_t wasgo_buffer_dst_id[wasgo_size_dst_id];
    encode_variant(wasgo_var_dst_id, wasgo_buffer_dst_id, wasgo_size_dst_id);
    
	return (bool) _wasgo_AnimationTreePlayer_wrapper_are_nodes_connected(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_dst_id, wasgo_size_dst_id, p_dst_input_idx);
}
float AnimationTreePlayer::blend2_node_get_amount(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_blend2_node_get_amount(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::blend2_node_set_amount(String p_id, float p_blend){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_blend2_node_set_amount(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_blend);
}
void AnimationTreePlayer::blend2_node_set_filter_path(String p_id, NodePath p_path, bool p_enable){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_AnimationTreePlayer_wrapper_blend2_node_set_filter_path(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_path, wasgo_size_path, p_enable);
}
float AnimationTreePlayer::blend3_node_get_amount(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_blend3_node_get_amount(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::blend3_node_set_amount(String p_id, float p_blend){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_blend3_node_set_amount(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_blend);
}
Vector2 AnimationTreePlayer::blend4_node_get_amount(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationTreePlayer_wrapper_blend4_node_get_amount(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_id, wasgo_size_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void AnimationTreePlayer::blend4_node_set_amount(String p_id, Vector2 p_blend){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_blend = p_blend;
    uint8_t wasgo_buffer_blend[12];
    int wasgo_size_blend = 12;
    encode_variant(wasgo_var_blend, wasgo_buffer_blend, wasgo_size_blend);
    
	_wasgo_AnimationTreePlayer_wrapper_blend4_node_set_amount(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_blend, wasgo_size_blend);
}
Error AnimationTreePlayer::connect_nodes(String p_id, String p_dst_id, int p_dst_input_idx){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_dst_id = p_dst_id;
    int wasgo_size_dst_id = String(p_dst_id).size();
    uint8_t wasgo_buffer_dst_id[wasgo_size_dst_id];
    encode_variant(wasgo_var_dst_id, wasgo_buffer_dst_id, wasgo_size_dst_id);
    
	return Error(_wasgo_AnimationTreePlayer_wrapper_connect_nodes(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_dst_id, wasgo_size_dst_id, p_dst_input_idx));
}
void AnimationTreePlayer::disconnect_nodes(String p_id, int p_dst_input_idx){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_disconnect_nodes(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_dst_input_idx);
}
AnimationTreePlayer::AnimationProcessMode AnimationTreePlayer::get_animation_process_mode(){
	return AnimationTreePlayer::AnimationProcessMode(_wasgo_AnimationTreePlayer_wrapper_get_animation_process_mode(wasgo_id));
}
NodePath AnimationTreePlayer::get_base_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationTreePlayer_wrapper_get_base_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
NodePath AnimationTreePlayer::get_master_player(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationTreePlayer_wrapper_get_master_player(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
PoolStringArray AnimationTreePlayer::get_node_list(){
	return PoolStringArray(_wasgo_AnimationTreePlayer_wrapper_get_node_list(wasgo_id));
}
bool AnimationTreePlayer::is_active(){
	return (bool) _wasgo_AnimationTreePlayer_wrapper_is_active(wasgo_id);
}
float AnimationTreePlayer::mix_node_get_amount(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_mix_node_get_amount(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::mix_node_set_amount(String p_id, float p_ratio){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_mix_node_set_amount(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_ratio);
}
bool AnimationTreePlayer::node_exists(String p_node){

    Variant wasgo_var_node = p_node;
    int wasgo_size_node = String(p_node).size();
    uint8_t wasgo_buffer_node[wasgo_size_node];
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    
	return (bool) _wasgo_AnimationTreePlayer_wrapper_node_exists(wasgo_id, wasgo_buffer_node, wasgo_size_node);
}
int AnimationTreePlayer::node_get_input_count(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (int) _wasgo_AnimationTreePlayer_wrapper_node_get_input_count(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
String AnimationTreePlayer::node_get_input_source(String p_id, int p_idx){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationTreePlayer_wrapper_node_get_input_source(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_id, wasgo_size_id, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Vector2 AnimationTreePlayer::node_get_position(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimationTreePlayer_wrapper_node_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_id, wasgo_size_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
AnimationTreePlayer::NodeType AnimationTreePlayer::node_get_type(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return AnimationTreePlayer::NodeType(_wasgo_AnimationTreePlayer_wrapper_node_get_type(wasgo_id, wasgo_buffer_id, wasgo_size_id));
}
Error AnimationTreePlayer::node_rename(String p_node, String p_new_name){

    Variant wasgo_var_node = p_node;
    int wasgo_size_node = String(p_node).size();
    uint8_t wasgo_buffer_node[wasgo_size_node];
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    

    Variant wasgo_var_new_name = p_new_name;
    int wasgo_size_new_name = String(p_new_name).size();
    uint8_t wasgo_buffer_new_name[wasgo_size_new_name];
    encode_variant(wasgo_var_new_name, wasgo_buffer_new_name, wasgo_size_new_name);
    
	return Error(_wasgo_AnimationTreePlayer_wrapper_node_rename(wasgo_id, wasgo_buffer_node, wasgo_size_node, wasgo_buffer_new_name, wasgo_size_new_name));
}
void AnimationTreePlayer::node_set_position(String p_id, Vector2 p_screen_position){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_screen_position = p_screen_position;
    uint8_t wasgo_buffer_screen_position[12];
    int wasgo_size_screen_position = 12;
    encode_variant(wasgo_var_screen_position, wasgo_buffer_screen_position, wasgo_size_screen_position);
    
	_wasgo_AnimationTreePlayer_wrapper_node_set_position(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_screen_position, wasgo_size_screen_position);
}
float AnimationTreePlayer::oneshot_node_get_autorestart_delay(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_delay(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
float AnimationTreePlayer::oneshot_node_get_autorestart_random_delay(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_random_delay(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
float AnimationTreePlayer::oneshot_node_get_fadein_time(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadein_time(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
float AnimationTreePlayer::oneshot_node_get_fadeout_time(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadeout_time(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
bool AnimationTreePlayer::oneshot_node_has_autorestart(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (bool) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_has_autorestart(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
bool AnimationTreePlayer::oneshot_node_is_active(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (bool) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_is_active(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::oneshot_node_set_autorestart(String p_id, bool p_enable){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_enable);
}
void AnimationTreePlayer::oneshot_node_set_autorestart_delay(String p_id, float p_delay_sec){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_delay(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_delay_sec);
}
void AnimationTreePlayer::oneshot_node_set_autorestart_random_delay(String p_id, float p_rand_sec){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_random_delay(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_rand_sec);
}
void AnimationTreePlayer::oneshot_node_set_fadein_time(String p_id, float p_time_sec){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadein_time(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_time_sec);
}
void AnimationTreePlayer::oneshot_node_set_fadeout_time(String p_id, float p_time_sec){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadeout_time(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_time_sec);
}
void AnimationTreePlayer::oneshot_node_set_filter_path(String p_id, NodePath p_path, bool p_enable){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_filter_path(wasgo_id, wasgo_buffer_id, wasgo_size_id, wasgo_buffer_path, wasgo_size_path, p_enable);
}
void AnimationTreePlayer::oneshot_node_start(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_start(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::oneshot_node_stop(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_stop(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::recompute_caches(){
	_wasgo_AnimationTreePlayer_wrapper_recompute_caches(wasgo_id);
}
void AnimationTreePlayer::remove_node(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_remove_node(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::reset(){
	_wasgo_AnimationTreePlayer_wrapper_reset(wasgo_id);
}
void AnimationTreePlayer::set_active(bool p_enabled){
	_wasgo_AnimationTreePlayer_wrapper_set_active(wasgo_id, p_enabled);
}
void AnimationTreePlayer::set_animation_process_mode(AnimationTreePlayer::AnimationProcessMode p_mode){
	_wasgo_AnimationTreePlayer_wrapper_set_animation_process_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AnimationTreePlayer::set_base_path(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_AnimationTreePlayer_wrapper_set_base_path(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void AnimationTreePlayer::set_master_player(NodePath p_nodepath){

    Variant wasgo_var_nodepath = p_nodepath;
    int wasgo_size_nodepath = String(p_nodepath).size();
    uint8_t wasgo_buffer_nodepath[wasgo_size_nodepath];
    encode_variant(wasgo_var_nodepath, wasgo_buffer_nodepath, wasgo_size_nodepath);
    
	_wasgo_AnimationTreePlayer_wrapper_set_master_player(wasgo_id, wasgo_buffer_nodepath, wasgo_size_nodepath);
}
float AnimationTreePlayer::timescale_node_get_scale(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_timescale_node_get_scale(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
void AnimationTreePlayer::timescale_node_set_scale(String p_id, float p_scale){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_timescale_node_set_scale(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_scale);
}
void AnimationTreePlayer::timeseek_node_seek(String p_id, float p_seconds){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_timeseek_node_seek(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_seconds);
}
void AnimationTreePlayer::transition_node_delete_input(String p_id, int p_input_idx){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_transition_node_delete_input(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_input_idx);
}
int AnimationTreePlayer::transition_node_get_current(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (int) _wasgo_AnimationTreePlayer_wrapper_transition_node_get_current(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
int AnimationTreePlayer::transition_node_get_input_count(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (int) _wasgo_AnimationTreePlayer_wrapper_transition_node_get_input_count(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
float AnimationTreePlayer::transition_node_get_xfade_time(String p_id){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (float) _wasgo_AnimationTreePlayer_wrapper_transition_node_get_xfade_time(wasgo_id, wasgo_buffer_id, wasgo_size_id);
}
bool AnimationTreePlayer::transition_node_has_input_auto_advance(String p_id, int p_input_idx){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	return (bool) _wasgo_AnimationTreePlayer_wrapper_transition_node_has_input_auto_advance(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_input_idx);
}
void AnimationTreePlayer::transition_node_set_current(String p_id, int p_input_idx){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_current(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_input_idx);
}
void AnimationTreePlayer::transition_node_set_input_auto_advance(String p_id, int p_input_idx, bool p_enable){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_auto_advance(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_input_idx, p_enable);
}
void AnimationTreePlayer::transition_node_set_input_count(String p_id, int p_count){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_count(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_count);
}
void AnimationTreePlayer::transition_node_set_xfade_time(String p_id, float p_time_sec){

    Variant wasgo_var_id = p_id;
    int wasgo_size_id = String(p_id).size();
    uint8_t wasgo_buffer_id[wasgo_size_id];
    encode_variant(wasgo_var_id, wasgo_buffer_id, wasgo_size_id);
    
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_xfade_time(wasgo_id, wasgo_buffer_id, wasgo_size_id, p_time_sec);
}

AnimationTreePlayer::AnimationTreePlayer(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
AnimationTreePlayer::AnimationTreePlayer(Node other) : Node(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationTreePlayer_constructor();
}
AnimationTreePlayer::new_instance(){
    return AnimationTreePlayer(_wasgo_AnimationTreePlayer_constructor());
}