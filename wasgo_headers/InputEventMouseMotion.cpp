/* THIS FILE IS GENERATED */
#include "InputEventMouseMotion.h"
float InputEventMouseMotion::get_pressure(){
	return (float) _wasgo_InputEventMouseMotion_wrapper_get_pressure(wasgo_id);
}
Vector2 InputEventMouseMotion::get_relative(){
	return Vector2::from_wasgo_id(_wasgo_InputEventMouseMotion_wrapper_get_relative(wasgo_id));
}
Vector2 InputEventMouseMotion::get_speed(){
	return Vector2::from_wasgo_id(_wasgo_InputEventMouseMotion_wrapper_get_speed(wasgo_id));
}
Vector2 InputEventMouseMotion::get_tilt(){
	return Vector2::from_wasgo_id(_wasgo_InputEventMouseMotion_wrapper_get_tilt(wasgo_id));
}
void InputEventMouseMotion::set_pressure(float p_pressure){
	_wasgo_InputEventMouseMotion_wrapper_set_pressure(wasgo_id, p_pressure);
}
void InputEventMouseMotion::set_relative(Vector2 p_relative){
	_wasgo_InputEventMouseMotion_wrapper_set_relative(wasgo_id, ((Variant) p_relative).get_wasgo_id());
}
void InputEventMouseMotion::set_speed(Vector2 p_speed){
	_wasgo_InputEventMouseMotion_wrapper_set_speed(wasgo_id, ((Variant) p_speed).get_wasgo_id());
}
void InputEventMouseMotion::set_tilt(Vector2 p_tilt){
	_wasgo_InputEventMouseMotion_wrapper_set_tilt(wasgo_id, ((Variant) p_tilt).get_wasgo_id());
}