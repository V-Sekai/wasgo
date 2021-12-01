/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventKey.h"
int InputEventKey::get_scancode(){
	return (int) _wasgo_InputEventKey_wrapper_get_scancode(wasgo_id);
}
int InputEventKey::get_scancode_with_modifiers(){
	return (int) _wasgo_InputEventKey_wrapper_get_scancode_with_modifiers(wasgo_id);
}
int InputEventKey::get_unicode(){
	return (int) _wasgo_InputEventKey_wrapper_get_unicode(wasgo_id);
}
void InputEventKey::set_echo(bool p_echo){
	_wasgo_InputEventKey_wrapper_set_echo(wasgo_id, p_echo);
}
void InputEventKey::set_pressed(bool p_pressed){
	_wasgo_InputEventKey_wrapper_set_pressed(wasgo_id, p_pressed);
}
void InputEventKey::set_scancode(int p_scancode){
	_wasgo_InputEventKey_wrapper_set_scancode(wasgo_id, p_scancode);
}
void InputEventKey::set_unicode(int p_unicode){
	_wasgo_InputEventKey_wrapper_set_unicode(wasgo_id, p_unicode);
}

InputEventKey::InputEventKey(WasGoID p_wasgo_id) : InputEventWithModifiers(p_wasgo_id){
}
InputEventKey::InputEventKey(InputEventWithModifiers other) : InputEventWithModifiers(other._get_wasgo_id()){
}
InputEventKey::InputEventKey():InputEventWithModifiers(){
}
InputEventKey InputEventKey::new_instance(){
    return InputEventKey(_wasgo_InputEventKey_constructor());
}
WasGoID InputEventKey::_get_wasgo_id(){
    return wasgo_id;
}
InputEventKey::operator bool(){
    return (bool) wasgo_id;
}
