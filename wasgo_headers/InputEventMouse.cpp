/* THIS FILE IS GENERATED */
#include "InputEventMouse.h"
int InputEventMouse::get_button_mask(){
	return (int) _wasgo_InputEventMouse_wrapper_get_button_mask(wasgo_id);
}
Vector2 InputEventMouse::get_global_position(){
	return Vector2::from_wasgo_id(_wasgo_InputEventMouse_wrapper_get_global_position(wasgo_id));
}
Vector2 InputEventMouse::get_position(){
	return Vector2::from_wasgo_id(_wasgo_InputEventMouse_wrapper_get_position(wasgo_id));
}
void InputEventMouse::set_button_mask(int p_button_mask){
	_wasgo_InputEventMouse_wrapper_set_button_mask(wasgo_id, p_button_mask);
}
void InputEventMouse::set_global_position(Vector2 p_global_position){
	_wasgo_InputEventMouse_wrapper_set_global_position(wasgo_id, ((Variant) p_global_position).get_wasgo_id());
}
void InputEventMouse::set_position(Vector2 p_position){
	_wasgo_InputEventMouse_wrapper_set_position(wasgo_id, ((Variant) p_position).get_wasgo_id());
}