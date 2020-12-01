/* THIS FILE IS GENERATED */
#include "DynamicFont.h"
void DynamicFont::add_fallback(DynamicFontData p_data){
	_wasgo_DynamicFont_wrapper_add_fallback(wasgo_id, ((Variant) p_data).get_wasgo_id());
}
String DynamicFont::get_available_chars(){
	return String::from_wasgo_id(_wasgo_DynamicFont_wrapper_get_available_chars(wasgo_id));
}
DynamicFontData DynamicFont::get_fallback(int p_idx){
	return DynamicFontData::from_wasgo_id(_wasgo_DynamicFont_wrapper_get_fallback(wasgo_id, p_idx));
}
int DynamicFont::get_fallback_count(){
	return (int) _wasgo_DynamicFont_wrapper_get_fallback_count(wasgo_id);
}
DynamicFontData DynamicFont::get_font_data(){
	return DynamicFontData::from_wasgo_id(_wasgo_DynamicFont_wrapper_get_font_data(wasgo_id));
}
Color DynamicFont::get_outline_color(){
	return Color::from_wasgo_id(_wasgo_DynamicFont_wrapper_get_outline_color(wasgo_id));
}
int DynamicFont::get_outline_size(){
	return (int) _wasgo_DynamicFont_wrapper_get_outline_size(wasgo_id);
}
int DynamicFont::get_size(){
	return (int) _wasgo_DynamicFont_wrapper_get_size(wasgo_id);
}
int DynamicFont::get_spacing(int p_type){
	return (int) _wasgo_DynamicFont_wrapper_get_spacing(wasgo_id, p_type);
}
bool DynamicFont::get_use_filter(){
	return (bool) _wasgo_DynamicFont_wrapper_get_use_filter(wasgo_id);
}
bool DynamicFont::get_use_mipmaps(){
	return (bool) _wasgo_DynamicFont_wrapper_get_use_mipmaps(wasgo_id);
}
void DynamicFont::remove_fallback(int p_idx){
	_wasgo_DynamicFont_wrapper_remove_fallback(wasgo_id, p_idx);
}
void DynamicFont::set_fallback(int p_idx, DynamicFontData p_data){
	_wasgo_DynamicFont_wrapper_set_fallback(wasgo_id, p_idx, ((Variant) p_data).get_wasgo_id());
}
void DynamicFont::set_font_data(DynamicFontData p_data){
	_wasgo_DynamicFont_wrapper_set_font_data(wasgo_id, ((Variant) p_data).get_wasgo_id());
}
void DynamicFont::set_outline_color(Color p_color){
	_wasgo_DynamicFont_wrapper_set_outline_color(wasgo_id, ((Variant) p_color).get_wasgo_id());
}
void DynamicFont::set_outline_size(int p_size){
	_wasgo_DynamicFont_wrapper_set_outline_size(wasgo_id, p_size);
}
void DynamicFont::set_size(int p_data){
	_wasgo_DynamicFont_wrapper_set_size(wasgo_id, p_data);
}
void DynamicFont::set_spacing(int p_type, int p_value){
	_wasgo_DynamicFont_wrapper_set_spacing(wasgo_id, p_type, p_value);
}
void DynamicFont::set_use_filter(bool p_enable){
	_wasgo_DynamicFont_wrapper_set_use_filter(wasgo_id, p_enable);
}
void DynamicFont::set_use_mipmaps(bool p_enable){
	_wasgo_DynamicFont_wrapper_set_use_mipmaps(wasgo_id, p_enable);
}