/* THIS FILE IS GENERATED */
#include "BitmapFont.h"
void BitmapFont::add_char(int p_character, int p_texture, Rect2 p_rect, Vector2 p_align = (Vector2) (0, 0), float p_advance = (float) -1){
	_wasgo_BitmapFont_wrapper_add_char(wasgo_id, character, texture, ((Variant) rect).get_wasgo_id(), ((Variant) align).get_wasgo_id(), advance);
}
void BitmapFont::add_kerning_pair(int p_char_a, int p_char_b, int p_kerning){
	_wasgo_BitmapFont_wrapper_add_kerning_pair(wasgo_id, char_a, char_b, kerning);
}
void BitmapFont::add_texture(Texture p_texture){
	_wasgo_BitmapFont_wrapper_add_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void BitmapFont::clear(){
	_wasgo_BitmapFont_wrapper_clear(wasgo_id);
}
Error BitmapFont::create_from_fnt(String p_path){
	return Error::from_wasgo_id(_wasgo_BitmapFont_wrapper_create_from_fnt(wasgo_id, ((Variant) path).get_wasgo_id()));
}
int BitmapFont::get_kerning_pair(int p_char_a, int p_char_b){
	return (int) _wasgo_BitmapFont_wrapper_get_kerning_pair(wasgo_id, char_a, char_b));
}
Texture BitmapFont::get_texture(int p_idx){
	return Texture::from_wasgo_id(_wasgo_BitmapFont_wrapper_get_texture(wasgo_id, idx));
}
int BitmapFont::get_texture_count(){
	return (int) _wasgo_BitmapFont_wrapper_get_texture_count(wasgo_id));
}
void BitmapFont::set_ascent(float p_px){
	_wasgo_BitmapFont_wrapper_set_ascent(wasgo_id, px);
}
void BitmapFont::set_distance_field_hint(bool p_enable){
	_wasgo_BitmapFont_wrapper_set_distance_field_hint(wasgo_id, enable);
}
void BitmapFont::set_height(float p_px){
	_wasgo_BitmapFont_wrapper_set_height(wasgo_id, px);
}

BitmapFont::BitmapFont(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
BitmapFont::~BitmapFont(){
}