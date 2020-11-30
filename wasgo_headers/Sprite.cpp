/* THIS FILE IS GENERATED */
#include "Sprite.h"
int Sprite::get_frame(){
	return (int) _wasgo_Sprite_wrapper_get_frame(wasgo_id));
}
Vector2 Sprite::get_frame_coords(){
	return Vector2::from_wasgo_id(_wasgo_Sprite_wrapper_get_frame_coords(wasgo_id));
}
int Sprite::get_hframes(){
	return (int) _wasgo_Sprite_wrapper_get_hframes(wasgo_id));
}
Texture Sprite::get_normal_map(){
	return Texture::from_wasgo_id(_wasgo_Sprite_wrapper_get_normal_map(wasgo_id));
}
Vector2 Sprite::get_offset(){
	return Vector2::from_wasgo_id(_wasgo_Sprite_wrapper_get_offset(wasgo_id));
}
Rect2 Sprite::get_rect(){
	return Rect2::from_wasgo_id(_wasgo_Sprite_wrapper_get_rect(wasgo_id));
}
Rect2 Sprite::get_region_rect(){
	return Rect2::from_wasgo_id(_wasgo_Sprite_wrapper_get_region_rect(wasgo_id));
}
Texture Sprite::get_texture(){
	return Texture::from_wasgo_id(_wasgo_Sprite_wrapper_get_texture(wasgo_id));
}
int Sprite::get_vframes(){
	return (int) _wasgo_Sprite_wrapper_get_vframes(wasgo_id));
}
bool Sprite::is_centered(){
	return (bool) _wasgo_Sprite_wrapper_is_centered(wasgo_id));
}
bool Sprite::is_flipped_h(){
	return (bool) _wasgo_Sprite_wrapper_is_flipped_h(wasgo_id));
}
bool Sprite::is_flipped_v(){
	return (bool) _wasgo_Sprite_wrapper_is_flipped_v(wasgo_id));
}
bool Sprite::is_pixel_opaque(Vector2 p_pos){
	return (bool) _wasgo_Sprite_wrapper_is_pixel_opaque(wasgo_id, ((Variant) pos).get_wasgo_id()));
}
bool Sprite::is_region(){
	return (bool) _wasgo_Sprite_wrapper_is_region(wasgo_id));
}
bool Sprite::is_region_filter_clip_enabled(){
	return (bool) _wasgo_Sprite_wrapper_is_region_filter_clip_enabled(wasgo_id));
}
void Sprite::set_centered(bool p_centered){
	_wasgo_Sprite_wrapper_set_centered(wasgo_id, centered);
}
void Sprite::set_flip_h(bool p_flip_h){
	_wasgo_Sprite_wrapper_set_flip_h(wasgo_id, flip_h);
}
void Sprite::set_flip_v(bool p_flip_v){
	_wasgo_Sprite_wrapper_set_flip_v(wasgo_id, flip_v);
}
void Sprite::set_frame(int p_frame){
	_wasgo_Sprite_wrapper_set_frame(wasgo_id, frame);
}
void Sprite::set_frame_coords(Vector2 p_coords){
	_wasgo_Sprite_wrapper_set_frame_coords(wasgo_id, ((Variant) coords).get_wasgo_id());
}
void Sprite::set_hframes(int p_hframes){
	_wasgo_Sprite_wrapper_set_hframes(wasgo_id, hframes);
}
void Sprite::set_normal_map(Texture p_normal_map){
	_wasgo_Sprite_wrapper_set_normal_map(wasgo_id, ((Variant) normal_map).get_wasgo_id());
}
void Sprite::set_offset(Vector2 p_offset){
	_wasgo_Sprite_wrapper_set_offset(wasgo_id, ((Variant) offset).get_wasgo_id());
}
void Sprite::set_region(bool p_enabled){
	_wasgo_Sprite_wrapper_set_region(wasgo_id, enabled);
}
void Sprite::set_region_filter_clip(bool p_enabled){
	_wasgo_Sprite_wrapper_set_region_filter_clip(wasgo_id, enabled);
}
void Sprite::set_region_rect(Rect2 p_rect){
	_wasgo_Sprite_wrapper_set_region_rect(wasgo_id, ((Variant) rect).get_wasgo_id());
}
void Sprite::set_texture(Texture p_texture){
	_wasgo_Sprite_wrapper_set_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void Sprite::set_vframes(int p_vframes){
	_wasgo_Sprite_wrapper_set_vframes(wasgo_id, vframes);
}

Sprite::Sprite(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Sprite::~Sprite(){
}