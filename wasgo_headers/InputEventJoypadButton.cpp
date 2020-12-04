/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventJoypadButton.h"
int InputEventJoypadButton::get_button_index(){
	return (int) _wasgo_InputEventJoypadButton_wrapper_get_button_index(wasgo_id);
}
float InputEventJoypadButton::get_pressure(){
	return (float) _wasgo_InputEventJoypadButton_wrapper_get_pressure(wasgo_id);
}
void InputEventJoypadButton::set_button_index(int p_button_index){
	_wasgo_InputEventJoypadButton_wrapper_set_button_index(wasgo_id, p_button_index);
}
void InputEventJoypadButton::set_pressed(bool p_pressed){
	_wasgo_InputEventJoypadButton_wrapper_set_pressed(wasgo_id, p_pressed);
}
void InputEventJoypadButton::set_pressure(float p_pressure){
	_wasgo_InputEventJoypadButton_wrapper_set_pressure(wasgo_id, p_pressure);
}

InputEventJoypadButton::InputEventJoypadButton(WasGoID p_wasgo_id) : InputEvent(p_wasgo_id){
}
InputEventJoypadButton::InputEventJoypadButton(InputEvent other) : InputEvent(other._get_wasgo_id()){
    wasgo_id = _wasgo_InputEventJoypadButton_constructor();
}
InputEventJoypadButton::new_instance(){
    return InputEventJoypadButton(_wasgo_InputEventJoypadButton_constructor());
}