/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StyleBoxFlat.h"
int StyleBoxFlat::get_aa_size(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_aa_size(wasgo_id);
}
Color StyleBoxFlat::get_bg_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_StyleBoxFlat_wrapper_get_bg_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
bool StyleBoxFlat::get_border_blend(){
	return (bool) _wasgo_StyleBoxFlat_wrapper_get_border_blend(wasgo_id);
}
Color StyleBoxFlat::get_border_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_StyleBoxFlat_wrapper_get_border_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int StyleBoxFlat::get_border_width(Margin p_margin){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_border_width(wasgo_id, p_margin._get_wasgo_id());
}
int StyleBoxFlat::get_border_width_min(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_border_width_min(wasgo_id);
}
int StyleBoxFlat::get_corner_detail(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_corner_detail(wasgo_id);
}
int StyleBoxFlat::get_corner_radius(Corner p_corner){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_corner_radius(wasgo_id, p_corner._get_wasgo_id());
}
float StyleBoxFlat::get_expand_margin(Margin p_margin){
	return (float) _wasgo_StyleBoxFlat_wrapper_get_expand_margin(wasgo_id, p_margin._get_wasgo_id());
}
Color StyleBoxFlat::get_shadow_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_StyleBoxFlat_wrapper_get_shadow_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Vector2 StyleBoxFlat::get_shadow_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_StyleBoxFlat_wrapper_get_shadow_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int StyleBoxFlat::get_shadow_size(){
	return (int) _wasgo_StyleBoxFlat_wrapper_get_shadow_size(wasgo_id);
}
bool StyleBoxFlat::is_anti_aliased(){
	return (bool) _wasgo_StyleBoxFlat_wrapper_is_anti_aliased(wasgo_id);
}
bool StyleBoxFlat::is_draw_center_enabled(){
	return (bool) _wasgo_StyleBoxFlat_wrapper_is_draw_center_enabled(wasgo_id);
}
void StyleBoxFlat::set_aa_size(int p_size){
	_wasgo_StyleBoxFlat_wrapper_set_aa_size(wasgo_id, p_size);
}
void StyleBoxFlat::set_anti_aliased(bool p_anti_aliased){
	_wasgo_StyleBoxFlat_wrapper_set_anti_aliased(wasgo_id, p_anti_aliased);
}
void StyleBoxFlat::set_bg_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_StyleBoxFlat_wrapper_set_bg_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void StyleBoxFlat::set_border_blend(bool p_blend){
	_wasgo_StyleBoxFlat_wrapper_set_border_blend(wasgo_id, p_blend);
}
void StyleBoxFlat::set_border_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_StyleBoxFlat_wrapper_set_border_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void StyleBoxFlat::set_border_width(Margin p_margin, int p_width){
	_wasgo_StyleBoxFlat_wrapper_set_border_width(wasgo_id, p_margin._get_wasgo_id(), p_width);
}
void StyleBoxFlat::set_border_width_all(int p_width){
	_wasgo_StyleBoxFlat_wrapper_set_border_width_all(wasgo_id, p_width);
}
void StyleBoxFlat::set_corner_detail(int p_detail){
	_wasgo_StyleBoxFlat_wrapper_set_corner_detail(wasgo_id, p_detail);
}
void StyleBoxFlat::set_corner_radius(Corner p_corner, int p_radius){
	_wasgo_StyleBoxFlat_wrapper_set_corner_radius(wasgo_id, p_corner._get_wasgo_id(), p_radius);
}
void StyleBoxFlat::set_corner_radius_all(int p_radius){
	_wasgo_StyleBoxFlat_wrapper_set_corner_radius_all(wasgo_id, p_radius);
}
void StyleBoxFlat::set_corner_radius_individual(int p_radius_top_left, int p_radius_top_right, int p_radius_bottom_right, int p_radius_bottom_left){
	_wasgo_StyleBoxFlat_wrapper_set_corner_radius_individual(wasgo_id, p_radius_top_left, p_radius_top_right, p_radius_bottom_right, p_radius_bottom_left);
}
void StyleBoxFlat::set_draw_center(bool p_draw_center){
	_wasgo_StyleBoxFlat_wrapper_set_draw_center(wasgo_id, p_draw_center);
}
void StyleBoxFlat::set_expand_margin(Margin p_margin, float p_size){
	_wasgo_StyleBoxFlat_wrapper_set_expand_margin(wasgo_id, p_margin._get_wasgo_id(), p_size);
}
void StyleBoxFlat::set_expand_margin_all(float p_size){
	_wasgo_StyleBoxFlat_wrapper_set_expand_margin_all(wasgo_id, p_size);
}
void StyleBoxFlat::set_expand_margin_individual(float p_size_left, float p_size_top, float p_size_right, float p_size_bottom){
	_wasgo_StyleBoxFlat_wrapper_set_expand_margin_individual(wasgo_id, p_size_left, p_size_top, p_size_right, p_size_bottom);
}
void StyleBoxFlat::set_shadow_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_StyleBoxFlat_wrapper_set_shadow_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void StyleBoxFlat::set_shadow_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_StyleBoxFlat_wrapper_set_shadow_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void StyleBoxFlat::set_shadow_size(int p_size){
	_wasgo_StyleBoxFlat_wrapper_set_shadow_size(wasgo_id, p_size);
}

StyleBoxFlat::StyleBoxFlat(WasGoId p_wasgo_id) : StyleBox(p_wasgo_id){
}
StyleBoxFlat::StyleBoxFlat(){
    wasgo_id = _wasgo_StyleBoxFlat_constructor();
}
StyleBoxFlat::~StyleBoxFlat(){
    _wasgo_StyleBoxFlat_destructor(wasgo_id);
}