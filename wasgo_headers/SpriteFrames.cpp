/* THIS FILE IS GENERATED */
#include "SpriteFrames.h"
void SpriteFrames::add_animation(String p_anim){
	_wasgo_SpriteFrames_wrapper_add_animation(wasgo_id, ((Variant) anim).get_wasgo_id());
}
void SpriteFrames::add_frame(String p_anim, Texture p_frame, int p_at_position = (int) -1){
	_wasgo_SpriteFrames_wrapper_add_frame(wasgo_id, ((Variant) anim).get_wasgo_id(), ((Variant) frame).get_wasgo_id(), at_position);
}
void SpriteFrames::clear(String p_anim){
	_wasgo_SpriteFrames_wrapper_clear(wasgo_id, ((Variant) anim).get_wasgo_id());
}
void SpriteFrames::clear_all(){
	_wasgo_SpriteFrames_wrapper_clear_all(wasgo_id);
}
bool SpriteFrames::get_animation_loop(String p_anim){
	return (bool) _wasgo_SpriteFrames_wrapper_get_animation_loop(wasgo_id, ((Variant) anim).get_wasgo_id()));
}
PoolStringArray SpriteFrames::get_animation_names(){
	return PoolStringArray::from_wasgo_id(_wasgo_SpriteFrames_wrapper_get_animation_names(wasgo_id));
}
float SpriteFrames::get_animation_speed(String p_anim){
	return (float) _wasgo_SpriteFrames_wrapper_get_animation_speed(wasgo_id, ((Variant) anim).get_wasgo_id()));
}
Texture SpriteFrames::get_frame(String p_anim, int p_idx){
	return Texture::from_wasgo_id(_wasgo_SpriteFrames_wrapper_get_frame(wasgo_id, ((Variant) anim).get_wasgo_id(), idx));
}
int SpriteFrames::get_frame_count(String p_anim){
	return (int) _wasgo_SpriteFrames_wrapper_get_frame_count(wasgo_id, ((Variant) anim).get_wasgo_id()));
}
bool SpriteFrames::has_animation(String p_anim){
	return (bool) _wasgo_SpriteFrames_wrapper_has_animation(wasgo_id, ((Variant) anim).get_wasgo_id()));
}
void SpriteFrames::remove_animation(String p_anim){
	_wasgo_SpriteFrames_wrapper_remove_animation(wasgo_id, ((Variant) anim).get_wasgo_id());
}
void SpriteFrames::remove_frame(String p_anim, int p_idx){
	_wasgo_SpriteFrames_wrapper_remove_frame(wasgo_id, ((Variant) anim).get_wasgo_id(), idx);
}
void SpriteFrames::rename_animation(String p_anim, String p_newname){
	_wasgo_SpriteFrames_wrapper_rename_animation(wasgo_id, ((Variant) anim).get_wasgo_id(), ((Variant) newname).get_wasgo_id());
}
void SpriteFrames::set_animation_loop(String p_anim, bool p_loop){
	_wasgo_SpriteFrames_wrapper_set_animation_loop(wasgo_id, ((Variant) anim).get_wasgo_id(), loop);
}
void SpriteFrames::set_animation_speed(String p_anim, float p_speed){
	_wasgo_SpriteFrames_wrapper_set_animation_speed(wasgo_id, ((Variant) anim).get_wasgo_id(), speed);
}
void SpriteFrames::set_frame(String p_anim, int p_idx, Texture p_txt){
	_wasgo_SpriteFrames_wrapper_set_frame(wasgo_id, ((Variant) anim).get_wasgo_id(), idx, ((Variant) txt).get_wasgo_id());
}

SpriteFrames::SpriteFrames(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
SpriteFrames::~SpriteFrames(){
}