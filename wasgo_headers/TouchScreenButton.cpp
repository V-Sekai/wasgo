/* THIS FILE IS GENERATED */
#include "TouchScreenButton.h"
String TouchScreenButton::get_action(){
	return String::from_wasgo_id(_wasgo_TouchScreenButton_wrapper_get_action(wasgo_id));
}
BitMap TouchScreenButton::get_bitmask(){
	return BitMap::from_wasgo_id(_wasgo_TouchScreenButton_wrapper_get_bitmask(wasgo_id));
}
Shape2D TouchScreenButton::get_shape(){
	return Shape2D::from_wasgo_id(_wasgo_TouchScreenButton_wrapper_get_shape(wasgo_id));
}
Texture TouchScreenButton::get_texture(){
	return Texture::from_wasgo_id(_wasgo_TouchScreenButton_wrapper_get_texture(wasgo_id));
}
Texture TouchScreenButton::get_texture_pressed(){
	return Texture::from_wasgo_id(_wasgo_TouchScreenButton_wrapper_get_texture_pressed(wasgo_id));
}
TouchScreenButton::VisibilityMode TouchScreenButton::get_visibility_mode(){
	return TouchScreenButton::VisibilityMode::from_wasgo_id(_wasgo_TouchScreenButton_wrapper_get_visibility_mode(wasgo_id));
}
bool TouchScreenButton::is_passby_press_enabled(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_passby_press_enabled(wasgo_id));
}
bool TouchScreenButton::is_pressed(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_pressed(wasgo_id));
}
bool TouchScreenButton::is_shape_centered(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_shape_centered(wasgo_id));
}
bool TouchScreenButton::is_shape_visible(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_shape_visible(wasgo_id));
}
void TouchScreenButton::set_action(String p_action){
	_wasgo_TouchScreenButton_wrapper_set_action(wasgo_id, ((Variant) action).get_wasgo_id());
}
void TouchScreenButton::set_bitmask(BitMap p_bitmask){
	_wasgo_TouchScreenButton_wrapper_set_bitmask(wasgo_id, ((Variant) bitmask).get_wasgo_id());
}
void TouchScreenButton::set_passby_press(bool p_enabled){
	_wasgo_TouchScreenButton_wrapper_set_passby_press(wasgo_id, enabled);
}
void TouchScreenButton::set_shape(Shape2D p_shape){
	_wasgo_TouchScreenButton_wrapper_set_shape(wasgo_id, ((Variant) shape).get_wasgo_id());
}
void TouchScreenButton::set_shape_centered(bool p_bool){
	_wasgo_TouchScreenButton_wrapper_set_shape_centered(wasgo_id, bool);
}
void TouchScreenButton::set_shape_visible(bool p_bool){
	_wasgo_TouchScreenButton_wrapper_set_shape_visible(wasgo_id, bool);
}
void TouchScreenButton::set_texture(Texture p_texture){
	_wasgo_TouchScreenButton_wrapper_set_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void TouchScreenButton::set_texture_pressed(Texture p_texture_pressed){
	_wasgo_TouchScreenButton_wrapper_set_texture_pressed(wasgo_id, ((Variant) texture_pressed).get_wasgo_id());
}
void TouchScreenButton::set_visibility_mode(TouchScreenButton::VisibilityMode p_mode){
	_wasgo_TouchScreenButton_wrapper_set_visibility_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}

TouchScreenButton::TouchScreenButton(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
TouchScreenButton::~TouchScreenButton(){
}