/* THIS FILE IS GENERATED */
#include "InputEventJoypadButton.h"
int InputEventJoypadButton::get_button_index(){
	return (int) _wasgo_InputEventJoypadButton_wrapper_get_button_index(wasgo_id));
}
float InputEventJoypadButton::get_pressure(){
	return (float) _wasgo_InputEventJoypadButton_wrapper_get_pressure(wasgo_id));
}
void InputEventJoypadButton::set_button_index(int p_button_index){
	_wasgo_InputEventJoypadButton_wrapper_set_button_index(wasgo_id, button_index);
}
void InputEventJoypadButton::set_pressed(bool p_pressed){
	_wasgo_InputEventJoypadButton_wrapper_set_pressed(wasgo_id, pressed);
}
void InputEventJoypadButton::set_pressure(float p_pressure){
	_wasgo_InputEventJoypadButton_wrapper_set_pressure(wasgo_id, pressure);
}

InputEventJoypadButton::InputEventJoypadButton(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InputEventJoypadButton::~InputEventJoypadButton(){
}