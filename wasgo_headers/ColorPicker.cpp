/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ColorPicker.h"
void ColorPicker::add_preset(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ColorPicker_wrapper_add_preset(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
bool ColorPicker::are_presets_enabled(){
	return (bool) _wasgo_ColorPicker_wrapper_are_presets_enabled(wasgo_id);
}
bool ColorPicker::are_presets_visible(){
	return (bool) _wasgo_ColorPicker_wrapper_are_presets_visible(wasgo_id);
}
void ColorPicker::erase_preset(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ColorPicker_wrapper_erase_preset(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
Color ColorPicker::get_pick_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ColorPicker_wrapper_get_pick_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
PoolColorArray ColorPicker::get_presets(){
	return PoolColorArray(_wasgo_ColorPicker_wrapper_get_presets(wasgo_id));
}
bool ColorPicker::is_deferred_mode(){
	return (bool) _wasgo_ColorPicker_wrapper_is_deferred_mode(wasgo_id);
}
bool ColorPicker::is_editing_alpha(){
	return (bool) _wasgo_ColorPicker_wrapper_is_editing_alpha(wasgo_id);
}
bool ColorPicker::is_hsv_mode(){
	return (bool) _wasgo_ColorPicker_wrapper_is_hsv_mode(wasgo_id);
}
bool ColorPicker::is_raw_mode(){
	return (bool) _wasgo_ColorPicker_wrapper_is_raw_mode(wasgo_id);
}
void ColorPicker::set_deferred_mode(bool p_mode){
	_wasgo_ColorPicker_wrapper_set_deferred_mode(wasgo_id, p_mode);
}
void ColorPicker::set_edit_alpha(bool p_show){
	_wasgo_ColorPicker_wrapper_set_edit_alpha(wasgo_id, p_show);
}
void ColorPicker::set_hsv_mode(bool p_mode){
	_wasgo_ColorPicker_wrapper_set_hsv_mode(wasgo_id, p_mode);
}
void ColorPicker::set_pick_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ColorPicker_wrapper_set_pick_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ColorPicker::set_presets_enabled(bool p_enabled){
	_wasgo_ColorPicker_wrapper_set_presets_enabled(wasgo_id, p_enabled);
}
void ColorPicker::set_presets_visible(bool p_visible){
	_wasgo_ColorPicker_wrapper_set_presets_visible(wasgo_id, p_visible);
}
void ColorPicker::set_raw_mode(bool p_mode){
	_wasgo_ColorPicker_wrapper_set_raw_mode(wasgo_id, p_mode);
}

ColorPicker::ColorPicker(WasGoID p_wasgo_id) : BoxContainer(p_wasgo_id){
}
ColorPicker::ColorPicker(BoxContainer other) : BoxContainer(other._get_wasgo_id()){
}
ColorPicker::ColorPicker():BoxContainer(){
}
ColorPicker ColorPicker::new_instance(){
    return ColorPicker(_wasgo_ColorPicker_constructor());
}
WasGoID ColorPicker::_get_wasgo_id(){
    return wasgo_id;
}
ColorPicker::operator bool(){
    return (bool) wasgo_id;
}
