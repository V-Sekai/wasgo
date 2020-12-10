/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TouchScreenButton.h"
String TouchScreenButton::get_action(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_TouchScreenButton_wrapper_get_action(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
BitMap TouchScreenButton::get_bitmask(){
	return BitMap(_wasgo_TouchScreenButton_wrapper_get_bitmask(wasgo_id));
}
Shape2D TouchScreenButton::get_shape(){
	return Shape2D(_wasgo_TouchScreenButton_wrapper_get_shape(wasgo_id));
}
Texture TouchScreenButton::get_texture(){
	return Texture(_wasgo_TouchScreenButton_wrapper_get_texture(wasgo_id));
}
Texture TouchScreenButton::get_texture_pressed(){
	return Texture(_wasgo_TouchScreenButton_wrapper_get_texture_pressed(wasgo_id));
}
TouchScreenButton::VisibilityMode TouchScreenButton::get_visibility_mode(){
	return TouchScreenButton::VisibilityMode(_wasgo_TouchScreenButton_wrapper_get_visibility_mode(wasgo_id));
}
bool TouchScreenButton::is_passby_press_enabled(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_passby_press_enabled(wasgo_id);
}
bool TouchScreenButton::is_pressed(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_pressed(wasgo_id);
}
bool TouchScreenButton::is_shape_centered(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_shape_centered(wasgo_id);
}
bool TouchScreenButton::is_shape_visible(){
	return (bool) _wasgo_TouchScreenButton_wrapper_is_shape_visible(wasgo_id);
}
void TouchScreenButton::set_action(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = 10 + String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	_wasgo_TouchScreenButton_wrapper_set_action(wasgo_id, wasgo_buffer_action, wasgo_size_action);
}
void TouchScreenButton::set_bitmask(BitMap p_bitmask){
	_wasgo_TouchScreenButton_wrapper_set_bitmask(wasgo_id, p_bitmask._get_wasgo_id());
}
void TouchScreenButton::set_passby_press(bool p_enabled){
	_wasgo_TouchScreenButton_wrapper_set_passby_press(wasgo_id, p_enabled);
}
void TouchScreenButton::set_shape(Shape2D p_shape){
	_wasgo_TouchScreenButton_wrapper_set_shape(wasgo_id, p_shape._get_wasgo_id());
}
void TouchScreenButton::set_shape_centered(bool p_bool){
	_wasgo_TouchScreenButton_wrapper_set_shape_centered(wasgo_id, p_bool);
}
void TouchScreenButton::set_shape_visible(bool p_bool){
	_wasgo_TouchScreenButton_wrapper_set_shape_visible(wasgo_id, p_bool);
}
void TouchScreenButton::set_texture(Texture p_texture){
	_wasgo_TouchScreenButton_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void TouchScreenButton::set_texture_pressed(Texture p_texture_pressed){
	_wasgo_TouchScreenButton_wrapper_set_texture_pressed(wasgo_id, p_texture_pressed._get_wasgo_id());
}
void TouchScreenButton::set_visibility_mode(TouchScreenButton::VisibilityMode p_mode){
	_wasgo_TouchScreenButton_wrapper_set_visibility_mode(wasgo_id, p_mode._get_wasgo_id());
}

TouchScreenButton::TouchScreenButton(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
TouchScreenButton::TouchScreenButton(Node2D other) : Node2D(other._get_wasgo_id()){
}
TouchScreenButton::TouchScreenButton():Node2D(){
}
TouchScreenButton TouchScreenButton::new_instance(){
    return TouchScreenButton(_wasgo_TouchScreenButton_constructor());
}
WasGoID TouchScreenButton::_get_wasgo_id(){
    return wasgo_id;
}
TouchScreenButton::operator bool(){
    return (bool) wasgo_id;
}
