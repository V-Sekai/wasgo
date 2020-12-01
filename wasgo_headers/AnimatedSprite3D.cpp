/* THIS FILE IS GENERATED */
#include "AnimatedSprite3D.h"
String AnimatedSprite3D::get_animation(){
	return String::from_wasgo_id(_wasgo_AnimatedSprite3D_wrapper_get_animation(wasgo_id));
}
SpriteFrames AnimatedSprite3D::get_sprite_frames(){
	return SpriteFrames::from_wasgo_id(_wasgo_AnimatedSprite3D_wrapper_get_sprite_frames(wasgo_id));
}
void AnimatedSprite3D::set_animation(String p_animation){
	_wasgo_AnimatedSprite3D_wrapper_set_animation(wasgo_id, ((Variant) p_animation).get_wasgo_id());
}
void AnimatedSprite3D::set_sprite_frames(SpriteFrames p_sprite_frames){
	_wasgo_AnimatedSprite3D_wrapper_set_sprite_frames(wasgo_id, ((Variant) p_sprite_frames).get_wasgo_id());
}