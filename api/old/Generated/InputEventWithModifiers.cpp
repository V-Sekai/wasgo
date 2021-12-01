/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventWithModifiers.h"
bool InputEventWithModifiers::get_alt(){
	return (bool) _wasgo_InputEventWithModifiers_wrapper_get_alt(wasgo_id);
}
bool InputEventWithModifiers::get_command(){
	return (bool) _wasgo_InputEventWithModifiers_wrapper_get_command(wasgo_id);
}
bool InputEventWithModifiers::get_control(){
	return (bool) _wasgo_InputEventWithModifiers_wrapper_get_control(wasgo_id);
}
bool InputEventWithModifiers::get_metakey(){
	return (bool) _wasgo_InputEventWithModifiers_wrapper_get_metakey(wasgo_id);
}
bool InputEventWithModifiers::get_shift(){
	return (bool) _wasgo_InputEventWithModifiers_wrapper_get_shift(wasgo_id);
}
void InputEventWithModifiers::set_alt(bool p_enable){
	_wasgo_InputEventWithModifiers_wrapper_set_alt(wasgo_id, p_enable);
}
void InputEventWithModifiers::set_command(bool p_enable){
	_wasgo_InputEventWithModifiers_wrapper_set_command(wasgo_id, p_enable);
}
void InputEventWithModifiers::set_control(bool p_enable){
	_wasgo_InputEventWithModifiers_wrapper_set_control(wasgo_id, p_enable);
}
void InputEventWithModifiers::set_metakey(bool p_enable){
	_wasgo_InputEventWithModifiers_wrapper_set_metakey(wasgo_id, p_enable);
}
void InputEventWithModifiers::set_shift(bool p_enable){
	_wasgo_InputEventWithModifiers_wrapper_set_shift(wasgo_id, p_enable);
}

InputEventWithModifiers::InputEventWithModifiers(WasGoID p_wasgo_id) : InputEvent(p_wasgo_id){
}
InputEventWithModifiers::InputEventWithModifiers(InputEvent other) : InputEvent(other._get_wasgo_id()){
}
InputEventWithModifiers::InputEventWithModifiers():InputEvent(){
}
InputEventWithModifiers InputEventWithModifiers::new_instance(){
    return InputEventWithModifiers(_wasgo_InputEventWithModifiers_constructor());
}
WasGoID InputEventWithModifiers::_get_wasgo_id(){
    return wasgo_id;
}
InputEventWithModifiers::operator bool(){
    return (bool) wasgo_id;
}
