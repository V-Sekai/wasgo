/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimatedSprite.h"
String AnimatedSprite::get_animation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimatedSprite_wrapper_get_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int AnimatedSprite::get_frame(){
	return (int) _wasgo_AnimatedSprite_wrapper_get_frame(wasgo_id);
}
Vector2 AnimatedSprite::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AnimatedSprite_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float AnimatedSprite::get_speed_scale(){
	return (float) _wasgo_AnimatedSprite_wrapper_get_speed_scale(wasgo_id);
}
SpriteFrames AnimatedSprite::get_sprite_frames(){
	return SpriteFrames(_wasgo_AnimatedSprite_wrapper_get_sprite_frames(wasgo_id));
}
bool AnimatedSprite::is_centered(){
	return (bool) _wasgo_AnimatedSprite_wrapper_is_centered(wasgo_id);
}
bool AnimatedSprite::is_flipped_h(){
	return (bool) _wasgo_AnimatedSprite_wrapper_is_flipped_h(wasgo_id);
}
bool AnimatedSprite::is_flipped_v(){
	return (bool) _wasgo_AnimatedSprite_wrapper_is_flipped_v(wasgo_id);
}
bool AnimatedSprite::is_playing(){
	return (bool) _wasgo_AnimatedSprite_wrapper_is_playing(wasgo_id);
}
void AnimatedSprite::play(String p_anim, bool p_backwards){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_AnimatedSprite_wrapper_play(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, p_backwards);
}
void AnimatedSprite::set_animation(String p_animation){

    Variant wasgo_var_animation = p_animation;
    int wasgo_size_animation = String(p_animation).size();
    uint8_t wasgo_buffer_animation[wasgo_size_animation];
    encode_variant(wasgo_var_animation, wasgo_buffer_animation, wasgo_size_animation);
    
	_wasgo_AnimatedSprite_wrapper_set_animation(wasgo_id, wasgo_buffer_animation, wasgo_size_animation);
}
void AnimatedSprite::set_centered(bool p_centered){
	_wasgo_AnimatedSprite_wrapper_set_centered(wasgo_id, p_centered);
}
void AnimatedSprite::set_flip_h(bool p_flip_h){
	_wasgo_AnimatedSprite_wrapper_set_flip_h(wasgo_id, p_flip_h);
}
void AnimatedSprite::set_flip_v(bool p_flip_v){
	_wasgo_AnimatedSprite_wrapper_set_flip_v(wasgo_id, p_flip_v);
}
void AnimatedSprite::set_frame(int p_frame){
	_wasgo_AnimatedSprite_wrapper_set_frame(wasgo_id, p_frame);
}
void AnimatedSprite::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_AnimatedSprite_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void AnimatedSprite::set_speed_scale(float p_speed_scale){
	_wasgo_AnimatedSprite_wrapper_set_speed_scale(wasgo_id, p_speed_scale);
}
void AnimatedSprite::set_sprite_frames(SpriteFrames p_sprite_frames){
	_wasgo_AnimatedSprite_wrapper_set_sprite_frames(wasgo_id, p_sprite_frames._get_wasgo_id());
}
void AnimatedSprite::stop(){
	_wasgo_AnimatedSprite_wrapper_stop(wasgo_id);
}

AnimatedSprite::AnimatedSprite(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
AnimatedSprite::AnimatedSprite(Node2D other) : Node2D(other._get_wasgo_id()){
}
AnimatedSprite::AnimatedSprite():Node2D(){
}
AnimatedSprite AnimatedSprite::new_instance(){
    return AnimatedSprite(_wasgo_AnimatedSprite_constructor());
}
WasGoID AnimatedSprite::_get_wasgo_id(){
    return wasgo_id;
}
AnimatedSprite::operator bool(){
    return (bool) wasgo_id;
}
