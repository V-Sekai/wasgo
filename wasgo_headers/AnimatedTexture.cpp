/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimatedTexture.h"
int AnimatedTexture::get_current_frame(){
	return (int) _wasgo_AnimatedTexture_wrapper_get_current_frame(wasgo_id);
}
float AnimatedTexture::get_fps(){
	return (float) _wasgo_AnimatedTexture_wrapper_get_fps(wasgo_id);
}
float AnimatedTexture::get_frame_delay(int p_frame){
	return (float) _wasgo_AnimatedTexture_wrapper_get_frame_delay(wasgo_id, p_frame);
}
Texture AnimatedTexture::get_frame_texture(int p_frame){
	return Texture(_wasgo_AnimatedTexture_wrapper_get_frame_texture(wasgo_id, p_frame));
}
int AnimatedTexture::get_frames(){
	return (int) _wasgo_AnimatedTexture_wrapper_get_frames(wasgo_id);
}
bool AnimatedTexture::get_oneshot(){
	return (bool) _wasgo_AnimatedTexture_wrapper_get_oneshot(wasgo_id);
}
bool AnimatedTexture::get_pause(){
	return (bool) _wasgo_AnimatedTexture_wrapper_get_pause(wasgo_id);
}
void AnimatedTexture::set_current_frame(int p_frame){
	_wasgo_AnimatedTexture_wrapper_set_current_frame(wasgo_id, p_frame);
}
void AnimatedTexture::set_fps(float p_fps){
	_wasgo_AnimatedTexture_wrapper_set_fps(wasgo_id, p_fps);
}
void AnimatedTexture::set_frame_delay(int p_frame, float p_delay){
	_wasgo_AnimatedTexture_wrapper_set_frame_delay(wasgo_id, p_frame, p_delay);
}
void AnimatedTexture::set_frame_texture(int p_frame, Texture p_texture){
	_wasgo_AnimatedTexture_wrapper_set_frame_texture(wasgo_id, p_frame, p_texture._get_wasgo_id());
}
void AnimatedTexture::set_frames(int p_frames){
	_wasgo_AnimatedTexture_wrapper_set_frames(wasgo_id, p_frames);
}
void AnimatedTexture::set_oneshot(bool p_oneshot){
	_wasgo_AnimatedTexture_wrapper_set_oneshot(wasgo_id, p_oneshot);
}
void AnimatedTexture::set_pause(bool p_pause){
	_wasgo_AnimatedTexture_wrapper_set_pause(wasgo_id, p_pause);
}

AnimatedTexture::AnimatedTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
AnimatedTexture::AnimatedTexture(Texture other) : Texture(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimatedTexture_constructor();
}
AnimatedTexture::new_instance(){
    return AnimatedTexture(_wasgo_AnimatedTexture_constructor());
}