/* THIS FILE IS GENERATED */
#include "marshalls.h"
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

InputEventMouseButton::InputEventMouseButton(WasGoID p_wasgo_id) : InputEventMouse(p_wasgo_id){
}
InputEventMouseButton::InputEventMouseButton(InputEventMouse other) : InputEventMouse(other._get_wasgo_id()){
}
InputEventMouseButton::InputEventMouseButton():InputEventMouse(){
}
InputEventMouseButton InputEventMouseButton::new_instance(){
    return InputEventMouseButton(_wasgo_InputEventMouseButton_constructor());
}
WasGoID InputEventMouseButton::_get_wasgo_id(){
    return wasgo_id;
}
InputEventMouseButton::operator bool(){
    return (bool) wasgo_id;
}
