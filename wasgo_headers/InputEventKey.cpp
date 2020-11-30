/* THIS FILE IS GENERATED */
#include "InputEventKey.h"
int InputEventKey::get_scancode(){
	return (int) _wasgo_InputEventKey_wrapper_get_scancode(wasgo_id));
}
int InputEventKey::get_scancode_with_modifiers(){
	return (int) _wasgo_InputEventKey_wrapper_get_scancode_with_modifiers(wasgo_id));
}
int InputEventKey::get_unicode(){
	return (int) _wasgo_InputEventKey_wrapper_get_unicode(wasgo_id));
}
void InputEventKey::set_echo(bool p_echo){
	_wasgo_InputEventKey_wrapper_set_echo(wasgo_id, echo);
}
void InputEventKey::set_pressed(bool p_pressed){
	_wasgo_InputEventKey_wrapper_set_pressed(wasgo_id, pressed);
}
void InputEventKey::set_scancode(int p_scancode){
	_wasgo_InputEventKey_wrapper_set_scancode(wasgo_id, scancode);
}
void InputEventKey::set_unicode(int p_unicode){
	_wasgo_InputEventKey_wrapper_set_unicode(wasgo_id, unicode);
}

InputEventKey::InputEventKey(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InputEventKey::~InputEventKey(){
}