/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeOneShot.h"
float AnimationNodeOneShot::get_autorestart_delay(){
	return (float) _wasgo_AnimationNodeOneShot_wrapper_get_autorestart_delay(wasgo_id);
}
float AnimationNodeOneShot::get_autorestart_random_delay(){
	return (float) _wasgo_AnimationNodeOneShot_wrapper_get_autorestart_random_delay(wasgo_id);
}
float AnimationNodeOneShot::get_fadein_time(){
	return (float) _wasgo_AnimationNodeOneShot_wrapper_get_fadein_time(wasgo_id);
}
float AnimationNodeOneShot::get_fadeout_time(){
	return (float) _wasgo_AnimationNodeOneShot_wrapper_get_fadeout_time(wasgo_id);
}
AnimationNodeOneShot::MixMode AnimationNodeOneShot::get_mix_mode(){
	return AnimationNodeOneShot::MixMode(_wasgo_AnimationNodeOneShot_wrapper_get_mix_mode(wasgo_id));
}
bool AnimationNodeOneShot::has_autorestart(){
	return (bool) _wasgo_AnimationNodeOneShot_wrapper_has_autorestart(wasgo_id);
}
bool AnimationNodeOneShot::is_using_sync(){
	return (bool) _wasgo_AnimationNodeOneShot_wrapper_is_using_sync(wasgo_id);
}
void AnimationNodeOneShot::set_autorestart(bool p_enable){
	_wasgo_AnimationNodeOneShot_wrapper_set_autorestart(wasgo_id, p_enable);
}
void AnimationNodeOneShot::set_autorestart_delay(float p_enable){
	_wasgo_AnimationNodeOneShot_wrapper_set_autorestart_delay(wasgo_id, p_enable);
}
void AnimationNodeOneShot::set_autorestart_random_delay(float p_enable){
	_wasgo_AnimationNodeOneShot_wrapper_set_autorestart_random_delay(wasgo_id, p_enable);
}
void AnimationNodeOneShot::set_fadein_time(float p_time){
	_wasgo_AnimationNodeOneShot_wrapper_set_fadein_time(wasgo_id, p_time);
}
void AnimationNodeOneShot::set_fadeout_time(float p_time){
	_wasgo_AnimationNodeOneShot_wrapper_set_fadeout_time(wasgo_id, p_time);
}
void AnimationNodeOneShot::set_mix_mode(AnimationNodeOneShot::MixMode p_mode){
	_wasgo_AnimationNodeOneShot_wrapper_set_mix_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AnimationNodeOneShot::set_use_sync(bool p_enable){
	_wasgo_AnimationNodeOneShot_wrapper_set_use_sync(wasgo_id, p_enable);
}

AnimationNodeOneShot::AnimationNodeOneShot(WasGoId p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeOneShot::AnimationNodeOneShot(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationNodeOneShot_constructor();
}
AnimationNodeOneShot::new_instance(){
    return AnimationNodeOneShot(_wasgo_AnimationNodeOneShot_constructor());
}