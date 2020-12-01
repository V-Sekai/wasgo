/* THIS FILE IS GENERATED */
#include "InputEventScreenTouch.h"
int InputEventScreenTouch::get_index(){
	return (int) _wasgo_InputEventScreenTouch_wrapper_get_index(wasgo_id);
}
Vector2 InputEventScreenTouch::get_position(){
	return Vector2::from_wasgo_id(_wasgo_InputEventScreenTouch_wrapper_get_position(wasgo_id));
}
void InputEventScreenTouch::set_index(int p_index){
	_wasgo_InputEventScreenTouch_wrapper_set_index(wasgo_id, p_index);
}
void InputEventScreenTouch::set_position(Vector2 p_position){
	_wasgo_InputEventScreenTouch_wrapper_set_position(wasgo_id, ((Variant) p_position).get_wasgo_id());
}
void InputEventScreenTouch::set_pressed(bool p_pressed){
	_wasgo_InputEventScreenTouch_wrapper_set_pressed(wasgo_id, p_pressed);
}