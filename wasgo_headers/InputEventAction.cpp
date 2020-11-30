/* THIS FILE IS GENERATED */
#include "InputEventAction.h"
String InputEventAction::get_action(){
	return String::from_wasgo_id(_wasgo_InputEventAction_wrapper_get_action(wasgo_id));
}
float InputEventAction::get_strength(){
	return (float) _wasgo_InputEventAction_wrapper_get_strength(wasgo_id));
}
void InputEventAction::set_action(String p_action){
	_wasgo_InputEventAction_wrapper_set_action(wasgo_id, ((Variant) action).get_wasgo_id());
}
void InputEventAction::set_pressed(bool p_pressed){
	_wasgo_InputEventAction_wrapper_set_pressed(wasgo_id, pressed);
}
void InputEventAction::set_strength(float p_strength){
	_wasgo_InputEventAction_wrapper_set_strength(wasgo_id, strength);
}

InputEventAction::InputEventAction(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InputEventAction::~InputEventAction(){
}