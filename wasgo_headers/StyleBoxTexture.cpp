/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StyleBoxTexture.h"
float StyleBoxTexture::get_expand_margin_size(Margin p_margin){
	return (float) _wasgo_StyleBoxTexture_wrapper_get_expand_margin_size(wasgo_id, p_margin._get_wasgo_id());
}
StyleBoxTexture::AxisStretchMode StyleBoxTexture::get_h_axis_stretch_mode(){
	return StyleBoxTexture::AxisStretchMode(_wasgo_StyleBoxTexture_wrapper_get_h_axis_stretch_mode(wasgo_id));
}
float StyleBoxTexture::get_margin_size(Margin p_margin){
	return (float) _wasgo_StyleBoxTexture_wrapper_get_margin_size(wasgo_id, p_margin._get_wasgo_id());
}
Color StyleBoxTexture::get_modulate(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_StyleBoxTexture_wrapper_get_modulate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Texture StyleBoxTexture::get_normal_map(){
	return Texture(_wasgo_StyleBoxTexture_wrapper_get_normal_map(wasgo_id));
}
Rect2 StyleBoxTexture::get_region_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_StyleBoxTexture_wrapper_get_region_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Texture StyleBoxTexture::get_texture(){
	return Texture(_wasgo_StyleBoxTexture_wrapper_get_texture(wasgo_id));
}
StyleBoxTexture::AxisStretchMode StyleBoxTexture::get_v_axis_stretch_mode(){
	return StyleBoxTexture::AxisStretchMode(_wasgo_StyleBoxTexture_wrapper_get_v_axis_stretch_mode(wasgo_id));
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
	_wasgo_StyleBoxTexture_wrapper_set_expand_margin_size(wasgo_id, p_margin._get_wasgo_id(), p_size);
}
void StyleBoxTexture::set_h_axis_stretch_mode(StyleBoxTexture::AxisStretchMode p_mode){
	_wasgo_StyleBoxTexture_wrapper_set_h_axis_stretch_mode(wasgo_id, p_mode._get_wasgo_id());
}
void StyleBoxTexture::set_margin_size(Margin p_margin, float p_size){
	_wasgo_StyleBoxTexture_wrapper_set_margin_size(wasgo_id, p_margin._get_wasgo_id(), p_size);
}
void StyleBoxTexture::set_modulate(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_StyleBoxTexture_wrapper_set_modulate(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void StyleBoxTexture::set_normal_map(Texture p_normal_map){
	_wasgo_StyleBoxTexture_wrapper_set_normal_map(wasgo_id, p_normal_map._get_wasgo_id());
}
void StyleBoxTexture::set_region_rect(Rect2 p_region){

    Variant wasgo_var_region = p_region;
    uint8_t wasgo_buffer_region[20];
    int wasgo_size_region = 20;
    encode_variant(wasgo_var_region, wasgo_buffer_region, wasgo_size_region);
    
	_wasgo_StyleBoxTexture_wrapper_set_region_rect(wasgo_id, wasgo_buffer_region, wasgo_size_region);
}
void StyleBoxTexture::set_texture(Texture p_texture){
	_wasgo_StyleBoxTexture_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void StyleBoxTexture::set_v_axis_stretch_mode(StyleBoxTexture::AxisStretchMode p_mode){
	_wasgo_StyleBoxTexture_wrapper_set_v_axis_stretch_mode(wasgo_id, p_mode._get_wasgo_id());
}

StyleBoxTexture::StyleBoxTexture(WasGoID p_wasgo_id) : StyleBox(p_wasgo_id){
}
StyleBoxTexture::StyleBoxTexture(StyleBox other) : StyleBox(other._get_wasgo_id()){
}
StyleBoxTexture::StyleBoxTexture():StyleBox(){
}
StyleBoxTexture StyleBoxTexture::new_instance(){
    return StyleBoxTexture(_wasgo_StyleBoxTexture_constructor());
}
WasGoID StyleBoxTexture::_get_wasgo_id(){
    return wasgo_id;
}
StyleBoxTexture::operator bool(){
    return (bool) wasgo_id;
}
