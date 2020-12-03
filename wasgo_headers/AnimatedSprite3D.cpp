/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimatedSprite3D.h"
String AnimatedSprite3D::get_animation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimatedSprite3D_wrapper_get_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int AnimatedSprite3D::get_frame(){
	return (int) _wasgo_AnimatedSprite3D_wrapper_get_frame(wasgo_id);
}
SpriteFrames AnimatedSprite3D::get_sprite_frames(){
	return SpriteFrames(_wasgo_AnimatedSprite3D_wrapper_get_sprite_frames(wasgo_id));
}
bool AnimatedSprite3D::is_playing(){
	return (bool) _wasgo_AnimatedSprite3D_wrapper_is_playing(wasgo_id);
}
void AnimatedSprite3D::play(String p_anim = (String) ){

    Variant wasgo_var_anim = p_anim;
    uint8_t wasgo_buffer_anim[256];
    int wasgo_size_anim = 256;
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_AnimatedSprite3D_wrapper_play(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
void AnimatedSprite3D::set_animation(String p_animation){

    Variant wasgo_var_animation = p_animation;
    uint8_t wasgo_buffer_animation[256];
    int wasgo_size_animation = 256;
    encode_variant(wasgo_var_animation, wasgo_buffer_animation, wasgo_size_animation);
    
	_wasgo_AnimatedSprite3D_wrapper_set_animation(wasgo_id, wasgo_buffer_animation, wasgo_size_animation);
}
void AnimatedSprite3D::set_frame(int p_frame){
	_wasgo_AnimatedSprite3D_wrapper_set_frame(wasgo_id, p_frame);
}
void AnimatedSprite3D::set_sprite_frames(SpriteFrames p_sprite_frames){
	_wasgo_AnimatedSprite3D_wrapper_set_sprite_frames(wasgo_id, p_sprite_frames._get_wasgo_id());
}
void AnimatedSprite3D::stop(){
	_wasgo_AnimatedSprite3D_wrapper_stop(wasgo_id);
}

AnimatedSprite3D::AnimatedSprite3D(WasGoId p_wasgo_id) : SpriteBase3D(p_wasgo_id){
}
AnimatedSprite3D::AnimatedSprite3D(){
    wasgo_id = _wasgo_AnimatedSprite3D_constructor();
}
AnimatedSprite3D::~AnimatedSprite3D(){
    _wasgo_AnimatedSprite3D_destructor(wasgo_id);
}