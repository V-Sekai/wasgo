/* THIS FILE IS GENERATED */
#include "AnimationTreePlayer.h"
void AnimationTreePlayer::add_node(AnimationTreePlayer::NodeType p_type, String p_id){
	_wasgo_AnimationTreePlayer_wrapper_add_node(wasgo_id, ((Variant) type).get_wasgo_id(), ((Variant) id).get_wasgo_id());
}
void AnimationTreePlayer::advance(float p_delta){
	_wasgo_AnimationTreePlayer_wrapper_advance(wasgo_id, delta);
}
Animation AnimationTreePlayer::animation_node_get_animation(String p_id){
	return Animation::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_animation_node_get_animation(wasgo_id, ((Variant) id).get_wasgo_id()));
}
String AnimationTreePlayer::animation_node_get_master_animation(String p_id){
	return String::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_animation_node_get_master_animation(wasgo_id, ((Variant) id).get_wasgo_id()));
}
float AnimationTreePlayer::animation_node_get_position(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_animation_node_get_position(wasgo_id, ((Variant) id).get_wasgo_id()));
}
void AnimationTreePlayer::animation_node_set_animation(String p_id, Animation p_animation){
	_wasgo_AnimationTreePlayer_wrapper_animation_node_set_animation(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) animation).get_wasgo_id());
}
void AnimationTreePlayer::animation_node_set_filter_path(String p_id, NodePath p_path, bool p_enable){
	_wasgo_AnimationTreePlayer_wrapper_animation_node_set_filter_path(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) path).get_wasgo_id(), enable);
}
void AnimationTreePlayer::animation_node_set_master_animation(String p_id, String p_source){
	_wasgo_AnimationTreePlayer_wrapper_animation_node_set_master_animation(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) source).get_wasgo_id());
}
bool AnimationTreePlayer::are_nodes_connected(String p_id, String p_dst_id, int p_dst_input_idx){
	return (bool) _wasgo_AnimationTreePlayer_wrapper_are_nodes_connected(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) dst_id).get_wasgo_id(), dst_input_idx));
}
float AnimationTreePlayer::blend2_node_get_amount(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_blend2_node_get_amount(wasgo_id, ((Variant) id).get_wasgo_id()));
}
void AnimationTreePlayer::blend2_node_set_amount(String p_id, float p_blend){
	_wasgo_AnimationTreePlayer_wrapper_blend2_node_set_amount(wasgo_id, ((Variant) id).get_wasgo_id(), blend);
}
void AnimationTreePlayer::blend2_node_set_filter_path(String p_id, NodePath p_path, bool p_enable){
	_wasgo_AnimationTreePlayer_wrapper_blend2_node_set_filter_path(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) path).get_wasgo_id(), enable);
}
float AnimationTreePlayer::blend3_node_get_amount(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_blend3_node_get_amount(wasgo_id, ((Variant) id).get_wasgo_id()));
}
void AnimationTreePlayer::blend3_node_set_amount(String p_id, float p_blend){
	_wasgo_AnimationTreePlayer_wrapper_blend3_node_set_amount(wasgo_id, ((Variant) id).get_wasgo_id(), blend);
}
Vector2 AnimationTreePlayer::blend4_node_get_amount(String p_id){
	return Vector2::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_blend4_node_get_amount(wasgo_id, ((Variant) id).get_wasgo_id()));
}
void AnimationTreePlayer::blend4_node_set_amount(String p_id, Vector2 p_blend){
	_wasgo_AnimationTreePlayer_wrapper_blend4_node_set_amount(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) blend).get_wasgo_id());
}
Error AnimationTreePlayer::connect_nodes(String p_id, String p_dst_id, int p_dst_input_idx){
	return Error::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_connect_nodes(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) dst_id).get_wasgo_id(), dst_input_idx));
}
void AnimationTreePlayer::disconnect_nodes(String p_id, int p_dst_input_idx){
	_wasgo_AnimationTreePlayer_wrapper_disconnect_nodes(wasgo_id, ((Variant) id).get_wasgo_id(), dst_input_idx);
}
AnimationTreePlayer::AnimationProcessMode AnimationTreePlayer::get_animation_process_mode(){
	return AnimationTreePlayer::AnimationProcessMode::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_get_animation_process_mode(wasgo_id));
}
NodePath AnimationTreePlayer::get_base_path(){
	return NodePath::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_get_base_path(wasgo_id));
}
NodePath AnimationTreePlayer::get_master_player(){
	return NodePath::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_get_master_player(wasgo_id));
}
PoolStringArray AnimationTreePlayer::get_node_list(){
	return PoolStringArray::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_get_node_list(wasgo_id));
}
bool AnimationTreePlayer::is_active(){
	return (bool) _wasgo_AnimationTreePlayer_wrapper_is_active(wasgo_id));
}
float AnimationTreePlayer::mix_node_get_amount(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_mix_node_get_amount(wasgo_id, ((Variant) id).get_wasgo_id()));
}
void AnimationTreePlayer::mix_node_set_amount(String p_id, float p_ratio){
	_wasgo_AnimationTreePlayer_wrapper_mix_node_set_amount(wasgo_id, ((Variant) id).get_wasgo_id(), ratio);
}
bool AnimationTreePlayer::node_exists(String p_node){
	return (bool) _wasgo_AnimationTreePlayer_wrapper_node_exists(wasgo_id, ((Variant) node).get_wasgo_id()));
}
int AnimationTreePlayer::node_get_input_count(String p_id){
	return (int) _wasgo_AnimationTreePlayer_wrapper_node_get_input_count(wasgo_id, ((Variant) id).get_wasgo_id()));
}
String AnimationTreePlayer::node_get_input_source(String p_id, int p_idx){
	return String::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_node_get_input_source(wasgo_id, ((Variant) id).get_wasgo_id(), idx));
}
Vector2 AnimationTreePlayer::node_get_position(String p_id){
	return Vector2::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_node_get_position(wasgo_id, ((Variant) id).get_wasgo_id()));
}
AnimationTreePlayer::NodeType AnimationTreePlayer::node_get_type(String p_id){
	return AnimationTreePlayer::NodeType::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_node_get_type(wasgo_id, ((Variant) id).get_wasgo_id()));
}
Error AnimationTreePlayer::node_rename(String p_node, String p_new_name){
	return Error::from_wasgo_id(_wasgo_AnimationTreePlayer_wrapper_node_rename(wasgo_id, ((Variant) node).get_wasgo_id(), ((Variant) new_name).get_wasgo_id()));
}
void AnimationTreePlayer::node_set_position(String p_id, Vector2 p_screen_position){
	_wasgo_AnimationTreePlayer_wrapper_node_set_position(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) screen_position).get_wasgo_id());
}
float AnimationTreePlayer::oneshot_node_get_autorestart_delay(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_delay(wasgo_id, ((Variant) id).get_wasgo_id()));
}
float AnimationTreePlayer::oneshot_node_get_autorestart_random_delay(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_random_delay(wasgo_id, ((Variant) id).get_wasgo_id()));
}
float AnimationTreePlayer::oneshot_node_get_fadein_time(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadein_time(wasgo_id, ((Variant) id).get_wasgo_id()));
}
float AnimationTreePlayer::oneshot_node_get_fadeout_time(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadeout_time(wasgo_id, ((Variant) id).get_wasgo_id()));
}
bool AnimationTreePlayer::oneshot_node_has_autorestart(String p_id){
	return (bool) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_has_autorestart(wasgo_id, ((Variant) id).get_wasgo_id()));
}
bool AnimationTreePlayer::oneshot_node_is_active(String p_id){
	return (bool) _wasgo_AnimationTreePlayer_wrapper_oneshot_node_is_active(wasgo_id, ((Variant) id).get_wasgo_id()));
}
void AnimationTreePlayer::oneshot_node_set_autorestart(String p_id, bool p_enable){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart(wasgo_id, ((Variant) id).get_wasgo_id(), enable);
}
void AnimationTreePlayer::oneshot_node_set_autorestart_delay(String p_id, float p_delay_sec){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_delay(wasgo_id, ((Variant) id).get_wasgo_id(), delay_sec);
}
void AnimationTreePlayer::oneshot_node_set_autorestart_random_delay(String p_id, float p_rand_sec){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_random_delay(wasgo_id, ((Variant) id).get_wasgo_id(), rand_sec);
}
void AnimationTreePlayer::oneshot_node_set_fadein_time(String p_id, float p_time_sec){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadein_time(wasgo_id, ((Variant) id).get_wasgo_id(), time_sec);
}
void AnimationTreePlayer::oneshot_node_set_fadeout_time(String p_id, float p_time_sec){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadeout_time(wasgo_id, ((Variant) id).get_wasgo_id(), time_sec);
}
void AnimationTreePlayer::oneshot_node_set_filter_path(String p_id, NodePath p_path, bool p_enable){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_filter_path(wasgo_id, ((Variant) id).get_wasgo_id(), ((Variant) path).get_wasgo_id(), enable);
}
void AnimationTreePlayer::oneshot_node_start(String p_id){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_start(wasgo_id, ((Variant) id).get_wasgo_id());
}
void AnimationTreePlayer::oneshot_node_stop(String p_id){
	_wasgo_AnimationTreePlayer_wrapper_oneshot_node_stop(wasgo_id, ((Variant) id).get_wasgo_id());
}
void AnimationTreePlayer::recompute_caches(){
	_wasgo_AnimationTreePlayer_wrapper_recompute_caches(wasgo_id);
}
void AnimationTreePlayer::remove_node(String p_id){
	_wasgo_AnimationTreePlayer_wrapper_remove_node(wasgo_id, ((Variant) id).get_wasgo_id());
}
void AnimationTreePlayer::reset(){
	_wasgo_AnimationTreePlayer_wrapper_reset(wasgo_id);
}
void AnimationTreePlayer::set_active(bool p_enabled){
	_wasgo_AnimationTreePlayer_wrapper_set_active(wasgo_id, enabled);
}
void AnimationTreePlayer::set_animation_process_mode(AnimationTreePlayer::AnimationProcessMode p_mode){
	_wasgo_AnimationTreePlayer_wrapper_set_animation_process_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void AnimationTreePlayer::set_base_path(NodePath p_path){
	_wasgo_AnimationTreePlayer_wrapper_set_base_path(wasgo_id, ((Variant) path).get_wasgo_id());
}
void AnimationTreePlayer::set_master_player(NodePath p_nodepath){
	_wasgo_AnimationTreePlayer_wrapper_set_master_player(wasgo_id, ((Variant) nodepath).get_wasgo_id());
}
float AnimationTreePlayer::timescale_node_get_scale(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_timescale_node_get_scale(wasgo_id, ((Variant) id).get_wasgo_id()));
}
void AnimationTreePlayer::timescale_node_set_scale(String p_id, float p_scale){
	_wasgo_AnimationTreePlayer_wrapper_timescale_node_set_scale(wasgo_id, ((Variant) id).get_wasgo_id(), scale);
}
void AnimationTreePlayer::timeseek_node_seek(String p_id, float p_seconds){
	_wasgo_AnimationTreePlayer_wrapper_timeseek_node_seek(wasgo_id, ((Variant) id).get_wasgo_id(), seconds);
}
void AnimationTreePlayer::transition_node_delete_input(String p_id, int p_input_idx){
	_wasgo_AnimationTreePlayer_wrapper_transition_node_delete_input(wasgo_id, ((Variant) id).get_wasgo_id(), input_idx);
}
int AnimationTreePlayer::transition_node_get_current(String p_id){
	return (int) _wasgo_AnimationTreePlayer_wrapper_transition_node_get_current(wasgo_id, ((Variant) id).get_wasgo_id()));
}
int AnimationTreePlayer::transition_node_get_input_count(String p_id){
	return (int) _wasgo_AnimationTreePlayer_wrapper_transition_node_get_input_count(wasgo_id, ((Variant) id).get_wasgo_id()));
}
float AnimationTreePlayer::transition_node_get_xfade_time(String p_id){
	return (float) _wasgo_AnimationTreePlayer_wrapper_transition_node_get_xfade_time(wasgo_id, ((Variant) id).get_wasgo_id()));
}
bool AnimationTreePlayer::transition_node_has_input_auto_advance(String p_id, int p_input_idx){
	return (bool) _wasgo_AnimationTreePlayer_wrapper_transition_node_has_input_auto_advance(wasgo_id, ((Variant) id).get_wasgo_id(), input_idx));
}
void AnimationTreePlayer::transition_node_set_current(String p_id, int p_input_idx){
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_current(wasgo_id, ((Variant) id).get_wasgo_id(), input_idx);
}
void AnimationTreePlayer::transition_node_set_input_auto_advance(String p_id, int p_input_idx, bool p_enable){
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_auto_advance(wasgo_id, ((Variant) id).get_wasgo_id(), input_idx, enable);
}
void AnimationTreePlayer::transition_node_set_input_count(String p_id, int p_count){
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_count(wasgo_id, ((Variant) id).get_wasgo_id(), count);
}
void AnimationTreePlayer::transition_node_set_xfade_time(String p_id, float p_time_sec){
	_wasgo_AnimationTreePlayer_wrapper_transition_node_set_xfade_time(wasgo_id, ((Variant) id).get_wasgo_id(), time_sec);
}

AnimationTreePlayer::AnimationTreePlayer(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AnimationTreePlayer::~AnimationTreePlayer(){
}