/* THIS FILE IS GENERATED */
#include "InputEventMIDI.h"
int InputEventMIDI::get_channel(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_channel(wasgo_id));
}
int InputEventMIDI::get_controller_number(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_controller_number(wasgo_id));
}
int InputEventMIDI::get_controller_value(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_controller_value(wasgo_id));
}
int InputEventMIDI::get_instrument(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_instrument(wasgo_id));
}
int InputEventMIDI::get_message(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_message(wasgo_id));
}
int InputEventMIDI::get_pitch(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_pitch(wasgo_id));
}
int InputEventMIDI::get_pressure(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_pressure(wasgo_id));
}
int InputEventMIDI::get_velocity(){
	return (int) _wasgo_InputEventMIDI_wrapper_get_velocity(wasgo_id));
}
void InputEventMIDI::set_channel(int p_channel){
	_wasgo_InputEventMIDI_wrapper_set_channel(wasgo_id, channel);
}
void InputEventMIDI::set_controller_number(int p_controller_number){
	_wasgo_InputEventMIDI_wrapper_set_controller_number(wasgo_id, controller_number);
}
void InputEventMIDI::set_controller_value(int p_controller_value){
	_wasgo_InputEventMIDI_wrapper_set_controller_value(wasgo_id, controller_value);
}
void InputEventMIDI::set_instrument(int p_instrument){
	_wasgo_InputEventMIDI_wrapper_set_instrument(wasgo_id, instrument);
}
void InputEventMIDI::set_message(int p_message){
	_wasgo_InputEventMIDI_wrapper_set_message(wasgo_id, message);
}
void InputEventMIDI::set_pitch(int p_pitch){
	_wasgo_InputEventMIDI_wrapper_set_pitch(wasgo_id, pitch);
}
void InputEventMIDI::set_pressure(int p_pressure){
	_wasgo_InputEventMIDI_wrapper_set_pressure(wasgo_id, pressure);
}
void InputEventMIDI::set_velocity(int p_velocity){
	_wasgo_InputEventMIDI_wrapper_set_velocity(wasgo_id, velocity);
}

InputEventMIDI::InputEventMIDI(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InputEventMIDI::~InputEventMIDI(){
}