/* THIS FILE IS GENERATED */
#include "InputEventScreenDrag.h"
int InputEventScreenDrag::get_index(){
	return (int) _wasgo_InputEventScreenDrag_wrapper_get_index(wasgo_id);
}
Vector2 InputEventScreenDrag::get_position(){
	return Vector2::from_wasgo_id(_wasgo_InputEventScreenDrag_wrapper_get_position(wasgo_id));
}
Vector2 InputEventScreenDrag::get_relative(){
	return Vector2::from_wasgo_id(_wasgo_InputEventScreenDrag_wrapper_get_relative(wasgo_id));
}
Vector2 InputEventScreenDrag::get_speed(){
	return Vector2::from_wasgo_id(_wasgo_InputEventScreenDrag_wrapper_get_speed(wasgo_id));
}
void InputEventScreenDrag::set_index(int p_index){
	_wasgo_InputEventScreenDrag_wrapper_set_index(wasgo_id, p_index);
}
void InputEventScreenDrag::set_position(Vector2 p_position){
	_wasgo_InputEventScreenDrag_wrapper_set_position(wasgo_id, ((Variant) p_position).get_wasgo_id());
}
void InputEventScreenDrag::set_relative(Vector2 p_relative){
	_wasgo_InputEventScreenDrag_wrapper_set_relative(wasgo_id, ((Variant) p_relative).get_wasgo_id());
}
void InputEventScreenDrag::set_speed(Vector2 p_speed){
	_wasgo_InputEventScreenDrag_wrapper_set_speed(wasgo_id, ((Variant) p_speed).get_wasgo_id());
}