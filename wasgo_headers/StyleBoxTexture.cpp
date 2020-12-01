/* THIS FILE IS GENERATED */
#include "StyleBoxTexture.h"
float StyleBoxTexture::get_expand_margin_size(Margin p_margin){
	return (float) _wasgo_StyleBoxTexture_wrapper_get_expand_margin_size(wasgo_id, ((Variant) p_margin).get_wasgo_id());
}
StyleBoxTexture::AxisStretchMode StyleBoxTexture::get_h_axis_stretch_mode(){
	return StyleBoxTexture::AxisStretchMode::from_wasgo_id(_wasgo_StyleBoxTexture_wrapper_get_h_axis_stretch_mode(wasgo_id));
}
float StyleBoxTexture::get_margin_size(Margin p_margin){
	return (float) _wasgo_StyleBoxTexture_wrapper_get_margin_size(wasgo_id, ((Variant) p_margin).get_wasgo_id());
}
Color StyleBoxTexture::get_modulate(){
	return Color::from_wasgo_id(_wasgo_StyleBoxTexture_wrapper_get_modulate(wasgo_id));
}
Texture StyleBoxTexture::get_normal_map(){
	return Texture::from_wasgo_id(_wasgo_StyleBoxTexture_wrapper_get_normal_map(wasgo_id));
}
Rect2 StyleBoxTexture::get_region_rect(){
	return Rect2::from_wasgo_id(_wasgo_StyleBoxTexture_wrapper_get_region_rect(wasgo_id));
}
Texture StyleBoxTexture::get_texture(){
	return Texture::from_wasgo_id(_wasgo_StyleBoxTexture_wrapper_get_texture(wasgo_id));
}
StyleBoxTexture::AxisStretchMode StyleBoxTexture::get_v_axis_stretch_mode(){
	return StyleBoxTexture::AxisStretchMode::from_wasgo_id(_wasgo_StyleBoxTexture_wrapper_get_v_axis_stretch_mode(wasgo_id));
}
bool StyleBoxTexture::is_draw_center_enabled(){
	return (bool) _wasgo_StyleBoxTexture_wrapper_is_draw_center_enabled(wasgo_id);
}
void StyleBoxTexture::set_draw_center(bool p_enable){
	_wasgo_StyleBoxTexture_wrapper_set_draw_center(wasgo_id, p_enable);
}
void StyleBoxTexture::set_expand_margin_all(float p_size){
	_wasgo_StyleBoxTexture_wrapper_set_expand_margin_all(wasgo_id, p_size);
}
void StyleBoxTexture::set_expand_margin_individual(float p_size_left, float p_size_top, float p_size_right, float p_size_bottom){
	_wasgo_StyleBoxTexture_wrapper_set_expand_margin_individual(wasgo_id, p_size_left, p_size_top, p_size_right, p_size_bottom);
}
void StyleBoxTexture::set_expand_margin_size(Margin p_margin, float p_size){
	_wasgo_StyleBoxTexture_wrapper_set_expand_margin_size(wasgo_id, ((Variant) p_margin).get_wasgo_id(), p_size);
}
void StyleBoxTexture::set_h_axis_stretch_mode(StyleBoxTexture::AxisStretchMode p_mode){
	_wasgo_StyleBoxTexture_wrapper_set_h_axis_stretch_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void StyleBoxTexture::set_margin_size(Margin p_margin, float p_size){
	_wasgo_StyleBoxTexture_wrapper_set_margin_size(wasgo_id, ((Variant) p_margin).get_wasgo_id(), p_size);
}
void StyleBoxTexture::set_modulate(Color p_color){
	_wasgo_StyleBoxTexture_wrapper_set_modulate(wasgo_id, ((Variant) p_color).get_wasgo_id());
}
void StyleBoxTexture::set_normal_map(Texture p_normal_map){
	_wasgo_StyleBoxTexture_wrapper_set_normal_map(wasgo_id, ((Variant) p_normal_map).get_wasgo_id());
}
void StyleBoxTexture::set_region_rect(Rect2 p_region){
	_wasgo_StyleBoxTexture_wrapper_set_region_rect(wasgo_id, ((Variant) p_region).get_wasgo_id());
}
void StyleBoxTexture::set_texture(Texture p_texture){
	_wasgo_StyleBoxTexture_wrapper_set_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void StyleBoxTexture::set_v_axis_stretch_mode(StyleBoxTexture::AxisStretchMode p_mode){
	_wasgo_StyleBoxTexture_wrapper_set_v_axis_stretch_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}