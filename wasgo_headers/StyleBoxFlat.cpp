/* THIS FILE IS GENERATED */
#include "StyleBoxFlat.h"
int StyleBoxFlat::get_aa_size(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_aa_size(wasgo_id));
}
Color StyleBoxFlat::get_bg_color(){
	return Color::from_wasgo_id(_wasgo_StyleBoxFlat_wrapper_get_bg_color(wasgo_id));
}
bool StyleBoxFlat::get_border_blend(){
	return (bool) _wasgo_StyleBoxFlat_wrapper_get_border_blend(wasgo_id));
}
Color StyleBoxFlat::get_border_color(){
	return Color::from_wasgo_id(_wasgo_StyleBoxFlat_wrapper_get_border_color(wasgo_id));
}
int StyleBoxFlat::get_border_width(Margin p_margin){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_border_width(wasgo_id, ((Variant) margin).get_wasgo_id()));
}
int StyleBoxFlat::get_border_width_min(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_border_width_min(wasgo_id));
}
int StyleBoxFlat::get_corner_detail(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_corner_detail(wasgo_id));
}
int StyleBoxFlat::get_corner_radius(Corner p_corner){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_corner_radius(wasgo_id, ((Variant) corner).get_wasgo_id()));
}
float StyleBoxFlat::get_expand_margin(Margin p_margin){
	return (float) _wasgo_StyleBoxFlat_wrapper_get_expand_margin(wasgo_id, ((Variant) margin).get_wasgo_id()));
}
Color StyleBoxFlat::get_shadow_color(){
	return Color::from_wasgo_id(_wasgo_StyleBoxFlat_wrapper_get_shadow_color(wasgo_id));
}
Vector2 StyleBoxFlat::get_shadow_offset(){
	return Vector2::from_wasgo_id(_wasgo_StyleBoxFlat_wrapper_get_shadow_offset(wasgo_id));
}
int StyleBoxFlat::get_shadow_size(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_shadow_size(wasgo_id));
}
bool StyleBoxFlat::is_anti_aliased(){
	return (bool) _wasgo_StyleBoxFlat_wrapper_is_anti_aliased(wasgo_id));
}
bool StyleBoxFlat::is_draw_center_enabled(){
	return (bool) _wasgo_StyleBoxFlat_wrapper_is_draw_center_enabled(wasgo_id));
}
void StyleBoxFlat::set_aa_size(int p_size){
	_wasgo_StyleBoxFlat_wrapper_set_aa_size(wasgo_id, size);
}
void StyleBoxFlat::set_anti_aliased(bool p_anti_aliased){
	_wasgo_StyleBoxFlat_wrapper_set_anti_aliased(wasgo_id, anti_aliased);
}
void StyleBoxFlat::set_bg_color(Color p_color){
	_wasgo_StyleBoxFlat_wrapper_set_bg_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void StyleBoxFlat::set_border_blend(bool p_blend){
	_wasgo_StyleBoxFlat_wrapper_set_border_blend(wasgo_id, blend);
}
void StyleBoxFlat::set_border_color(Color p_color){
	_wasgo_StyleBoxFlat_wrapper_set_border_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void StyleBoxFlat::set_border_width(Margin p_margin, int p_width){
	_wasgo_StyleBoxFlat_wrapper_set_border_width(wasgo_id, ((Variant) margin).get_wasgo_id(), width);
}
void StyleBoxFlat::set_border_width_all(int p_width){
	_wasgo_StyleBoxFlat_wrapper_set_border_width_all(wasgo_id, width);
}
void StyleBoxFlat::set_corner_detail(int p_detail){
	_wasgo_StyleBoxFlat_wrapper_set_corner_detail(wasgo_id, detail);
}
void StyleBoxFlat::set_corner_radius(Corner p_corner, int p_radius){
	_wasgo_StyleBoxFlat_wrapper_set_corner_radius(wasgo_id, ((Variant) corner).get_wasgo_id(), radius);
}
void StyleBoxFlat::set_corner_radius_all(int p_radius){
	_wasgo_StyleBoxFlat_wrapper_set_corner_radius_all(wasgo_id, radius);
}
void StyleBoxFlat::set_corner_radius_individual(int p_radius_top_left, int p_radius_top_right, int p_radius_bottom_right, int p_radius_bottom_left){
	_wasgo_StyleBoxFlat_wrapper_set_corner_radius_individual(wasgo_id, radius_top_left, radius_top_right, radius_bottom_right, radius_bottom_left);
}
void StyleBoxFlat::set_draw_center(bool p_draw_center){
	_wasgo_StyleBoxFlat_wrapper_set_draw_center(wasgo_id, draw_center);
}
void StyleBoxFlat::set_expand_margin(Margin p_margin, float p_size){
	_wasgo_StyleBoxFlat_wrapper_set_expand_margin(wasgo_id, ((Variant) margin).get_wasgo_id(), size);
}
void StyleBoxFlat::set_expand_margin_all(float p_size){
	_wasgo_StyleBoxFlat_wrapper_set_expand_margin_all(wasgo_id, size);
}
void StyleBoxFlat::set_expand_margin_individual(float p_size_left, float p_size_top, float p_size_right, float p_size_bottom){
	_wasgo_StyleBoxFlat_wrapper_set_expand_margin_individual(wasgo_id, size_left, size_top, size_right, size_bottom);
}
void StyleBoxFlat::set_shadow_color(Color p_color){
	_wasgo_StyleBoxFlat_wrapper_set_shadow_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void StyleBoxFlat::set_shadow_offset(Vector2 p_offset){
	_wasgo_StyleBoxFlat_wrapper_set_shadow_offset(wasgo_id, ((Variant) offset).get_wasgo_id());
}
void StyleBoxFlat::set_shadow_size(int p_size){
	_wasgo_StyleBoxFlat_wrapper_set_shadow_size(wasgo_id, size);
}

StyleBoxFlat::StyleBoxFlat(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
StyleBoxFlat::~StyleBoxFlat(){
}