/* THIS FILE IS GENERATED */
#include "ColorPicker.h"
void ColorPicker::add_preset(Color p_color){
	_wasgo_ColorPicker_wrapper_add_preset(wasgo_id, ((Variant) color).get_wasgo_id());
}
bool ColorPicker::are_presets_enabled(){
	return (bool) _wasgo_ColorPicker_wrapper_are_presets_enabled(wasgo_id));
}
bool ColorPicker::are_presets_visible(){
	return (bool) _wasgo_ColorPicker_wrapper_are_presets_visible(wasgo_id));
}
void ColorPicker::erase_preset(Color p_color){
	_wasgo_ColorPicker_wrapper_erase_preset(wasgo_id, ((Variant) color).get_wasgo_id());
}
Color ColorPicker::get_pick_color(){
	return Color::from_wasgo_id(_wasgo_ColorPicker_wrapper_get_pick_color(wasgo_id));
}
PoolColorArray ColorPicker::get_presets(){
	return PoolColorArray::from_wasgo_id(_wasgo_ColorPicker_wrapper_get_presets(wasgo_id));
}
bool ColorPicker::is_deferred_mode(){
	return (bool) _wasgo_ColorPicker_wrapper_is_deferred_mode(wasgo_id));
}
bool ColorPicker::is_editing_alpha(){
	return (bool) _wasgo_ColorPicker_wrapper_is_editing_alpha(wasgo_id));
}
bool ColorPicker::is_hsv_mode(){
	return (bool) _wasgo_ColorPicker_wrapper_is_hsv_mode(wasgo_id));
}
bool ColorPicker::is_raw_mode(){
	return (bool) _wasgo_ColorPicker_wrapper_is_raw_mode(wasgo_id));
}
void ColorPicker::set_deferred_mode(bool p_mode){
	_wasgo_ColorPicker_wrapper_set_deferred_mode(wasgo_id, mode);
}
void ColorPicker::set_edit_alpha(bool p_show){
	_wasgo_ColorPicker_wrapper_set_edit_alpha(wasgo_id, show);
}
void ColorPicker::set_hsv_mode(bool p_mode){
	_wasgo_ColorPicker_wrapper_set_hsv_mode(wasgo_id, mode);
}
void ColorPicker::set_pick_color(Color p_color){
	_wasgo_ColorPicker_wrapper_set_pick_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void ColorPicker::set_presets_enabled(bool p_enabled){
	_wasgo_ColorPicker_wrapper_set_presets_enabled(wasgo_id, enabled);
}
void ColorPicker::set_presets_visible(bool p_visible){
	_wasgo_ColorPicker_wrapper_set_presets_visible(wasgo_id, visible);
}
void ColorPicker::set_raw_mode(bool p_mode){
	_wasgo_ColorPicker_wrapper_set_raw_mode(wasgo_id, mode);
}

ColorPicker::ColorPicker(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ColorPicker::~ColorPicker(){
}