/* THIS FILE IS GENERATED */
#include "InputEventMouseButton.h"
int InputEventMouseButton::get_button_index(){
	return (int) _wasgo_InputEventMouseButton_wrapper_get_button_index(wasgo_id);
}
float InputEventMouseButton::get_factor(){
	return (float) _wasgo_InputEventMouseButton_wrapper_get_factor(wasgo_id);
}
bool InputEventMouseButton::is_doubleclick(){
	return (bool) _wasgo_InputEventMouseButton_wrapper_is_doubleclick(wasgo_id);
}
void InputEventMouseButton::set_button_index(int p_button_index){
	_wasgo_InputEventMouseButton_wrapper_set_button_index(wasgo_id, p_button_index);
}
void InputEventMouseButton::set_doubleclick(bool p_doubleclick){
	_wasgo_InputEventMouseButton_wrapper_set_doubleclick(wasgo_id, p_doubleclick);
}
void InputEventMouseButton::set_factor(float p_factor){
	_wasgo_InputEventMouseButton_wrapper_set_factor(wasgo_id, p_factor);
}
void InputEventMouseButton::set_pressed(bool p_pressed){
	_wasgo_InputEventMouseButton_wrapper_set_pressed(wasgo_id, p_pressed);
}