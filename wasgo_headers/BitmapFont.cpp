/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BitmapFont.h"
void BitmapFont::add_char(int p_character, int p_texture, Rect2 p_rect, Vector2 p_align, float p_advance){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_align = p_align;
    uint8_t wasgo_buffer_align[12];
    int wasgo_size_align = 12;
    encode_variant(wasgo_var_align, wasgo_buffer_align, wasgo_size_align);
    
	_wasgo_BitmapFont_wrapper_add_char(wasgo_id, p_character, p_texture, wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_align, wasgo_size_align, p_advance);
}
void BitmapFont::add_kerning_pair(int p_char_a, int p_char_b, int p_kerning){
	_wasgo_BitmapFont_wrapper_add_kerning_pair(wasgo_id, p_char_a, p_char_b, p_kerning);
}
void BitmapFont::add_texture(Texture p_texture){
	_wasgo_BitmapFont_wrapper_add_texture(wasgo_id, p_texture._get_wasgo_id());
}
void BitmapFont::clear(){
	_wasgo_BitmapFont_wrapper_clear(wasgo_id);
}
Error BitmapFont::create_from_fnt(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_BitmapFont_wrapper_create_from_fnt(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
BitmapFont BitmapFont::get_fallback(){
	return BitmapFont(_wasgo_BitmapFont_wrapper_get_fallback(wasgo_id));
}
int BitmapFont::get_kerning_pair(int p_char_a, int p_char_b){
	return (int) _wasgo_BitmapFont_wrapper_get_kerning_pair(wasgo_id, p_char_a, p_char_b);
}
Texture BitmapFont::get_texture(int p_idx){
	return Texture(_wasgo_BitmapFont_wrapper_get_texture(wasgo_id, p_idx));
}
int BitmapFont::get_texture_count(){
	return (int) _wasgo_BitmapFont_wrapper_get_texture_count(wasgo_id);
}
void BitmapFont::set_ascent(float p_px){
	_wasgo_BitmapFont_wrapper_set_ascent(wasgo_id, p_px);
}
void BitmapFont::set_distance_field_hint(bool p_enable){
	_wasgo_BitmapFont_wrapper_set_distance_field_hint(wasgo_id, p_enable);
}
void BitmapFont::set_fallback(BitmapFont p_fallback){
	_wasgo_BitmapFont_wrapper_set_fallback(wasgo_id, p_fallback._get_wasgo_id());
}
void BitmapFont::set_height(float p_px){
	_wasgo_BitmapFont_wrapper_set_height(wasgo_id, p_px);
}

BitmapFont::BitmapFont(WasGoID p_wasgo_id) : Font(p_wasgo_id){
}
BitmapFont::BitmapFont(Font other) : Font(other._get_wasgo_id()){
}
BitmapFont::BitmapFont():Font(){
}
BitmapFont BitmapFont::new_instance(){
    return BitmapFont(_wasgo_BitmapFont_constructor());
}
WasGoID BitmapFont::_get_wasgo_id(){
    return wasgo_id;
}
BitmapFont::operator bool(){
    return (bool) wasgo_id;
}
