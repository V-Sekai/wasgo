/* THIS FILE IS GENERATED */
#include "TextureProgress.h"
float TextureProgress::get_fill_degrees(){
	return (float) _wasgo_TextureProgress_wrapper_get_fill_degrees(wasgo_id);
}
int TextureProgress::get_fill_mode(){
	return (int) _wasgo_TextureProgress_wrapper_get_fill_mode(wasgo_id);
}
bool TextureProgress::get_nine_patch_stretch(){
	return (bool) _wasgo_TextureProgress_wrapper_get_nine_patch_stretch(wasgo_id);
}
Texture TextureProgress::get_over_texture(){
	return Texture::from_wasgo_id(_wasgo_TextureProgress_wrapper_get_over_texture(wasgo_id));
}
Texture TextureProgress::get_progress_texture(){
	return Texture::from_wasgo_id(_wasgo_TextureProgress_wrapper_get_progress_texture(wasgo_id));
}
Vector2 TextureProgress::get_radial_center_offset(){
	return Vector2::from_wasgo_id(_wasgo_TextureProgress_wrapper_get_radial_center_offset(wasgo_id));
}
float TextureProgress::get_radial_initial_angle(){
	return (float) _wasgo_TextureProgress_wrapper_get_radial_initial_angle(wasgo_id);
}
int TextureProgress::get_stretch_margin(Margin p_margin){
	return (int) _wasgo_TextureProgress_wrapper_get_stretch_margin(wasgo_id, ((Variant) p_margin).get_wasgo_id());
}
Color TextureProgress::get_tint_over(){
	return Color::from_wasgo_id(_wasgo_TextureProgress_wrapper_get_tint_over(wasgo_id));
}
Color TextureProgress::get_tint_progress(){
	return Color::from_wasgo_id(_wasgo_TextureProgress_wrapper_get_tint_progress(wasgo_id));
}
Color TextureProgress::get_tint_under(){
	return Color::from_wasgo_id(_wasgo_TextureProgress_wrapper_get_tint_under(wasgo_id));
}
Texture TextureProgress::get_under_texture(){
	return Texture::from_wasgo_id(_wasgo_TextureProgress_wrapper_get_under_texture(wasgo_id));
}
void TextureProgress::set_fill_degrees(float p_mode){
	_wasgo_TextureProgress_wrapper_set_fill_degrees(wasgo_id, p_mode);
}
void TextureProgress::set_fill_mode(int p_mode){
	_wasgo_TextureProgress_wrapper_set_fill_mode(wasgo_id, p_mode);
}
void TextureProgress::set_nine_patch_stretch(bool p_stretch){
	_wasgo_TextureProgress_wrapper_set_nine_patch_stretch(wasgo_id, p_stretch);
}
void TextureProgress::set_over_texture(Texture p_tex){
	_wasgo_TextureProgress_wrapper_set_over_texture(wasgo_id, ((Variant) p_tex).get_wasgo_id());
}
void TextureProgress::set_progress_texture(Texture p_tex){
	_wasgo_TextureProgress_wrapper_set_progress_texture(wasgo_id, ((Variant) p_tex).get_wasgo_id());
}
void TextureProgress::set_radial_center_offset(Vector2 p_mode){
	_wasgo_TextureProgress_wrapper_set_radial_center_offset(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void TextureProgress::set_radial_initial_angle(float p_mode){
	_wasgo_TextureProgress_wrapper_set_radial_initial_angle(wasgo_id, p_mode);
}
void TextureProgress::set_stretch_margin(Margin p_margin, int p_value){
	_wasgo_TextureProgress_wrapper_set_stretch_margin(wasgo_id, ((Variant) p_margin).get_wasgo_id(), p_value);
}
void TextureProgress::set_tint_over(Color p_tint){
	_wasgo_TextureProgress_wrapper_set_tint_over(wasgo_id, ((Variant) p_tint).get_wasgo_id());
}
void TextureProgress::set_tint_progress(Color p_tint){
	_wasgo_TextureProgress_wrapper_set_tint_progress(wasgo_id, ((Variant) p_tint).get_wasgo_id());
}
void TextureProgress::set_tint_under(Color p_tint){
	_wasgo_TextureProgress_wrapper_set_tint_under(wasgo_id, ((Variant) p_tint).get_wasgo_id());
}
void TextureProgress::set_under_texture(Texture p_tex){
	_wasgo_TextureProgress_wrapper_set_under_texture(wasgo_id, ((Variant) p_tex).get_wasgo_id());
}