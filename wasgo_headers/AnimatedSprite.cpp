/* THIS FILE IS GENERATED */
#include "AnimatedSprite.h"
String AnimatedSprite::get_animation(){
	return String::from_wasgo_id(_wasgo_AnimatedSprite_wrapper_get_animation(wasgo_id));
}
SpriteFrames AnimatedSprite::get_sprite_frames(){
	return SpriteFrames::from_wasgo_id(_wasgo_AnimatedSprite_wrapper_get_sprite_frames(wasgo_id));
}
void AnimatedSprite::set_animation(String p_animation){
	_wasgo_AnimatedSprite_wrapper_set_animation(wasgo_id, ((Variant) animation).get_wasgo_id());
}
void AnimatedSprite::set_sprite_frames(SpriteFrames p_sprite_frames){
	_wasgo_AnimatedSprite_wrapper_set_sprite_frames(wasgo_id, ((Variant) sprite_frames).get_wasgo_id());
}

AnimatedSprite::AnimatedSprite(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AnimatedSprite::~AnimatedSprite(){
}