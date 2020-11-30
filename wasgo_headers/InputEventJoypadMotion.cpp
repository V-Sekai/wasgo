/* THIS FILE IS GENERATED */
#include "InputEventJoypadMotion.h"
int InputEventJoypadMotion::get_axis(){
	return (int) _wasgo_InputEventJoypadMotion_wrapper_get_axis(wasgo_id));
}
float InputEventJoypadMotion::get_axis_value(){
	return (float) _wasgo_InputEventJoypadMotion_wrapper_get_axis_value(wasgo_id));
}
void InputEventJoypadMotion::set_axis(int p_axis){
	_wasgo_InputEventJoypadMotion_wrapper_set_axis(wasgo_id, axis);
}
void InputEventJoypadMotion::set_axis_value(float p_axis_value){
	_wasgo_InputEventJoypadMotion_wrapper_set_axis_value(wasgo_id, axis_value);
}

InputEventJoypadMotion::InputEventJoypadMotion(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InputEventJoypadMotion::~InputEventJoypadMotion(){
}