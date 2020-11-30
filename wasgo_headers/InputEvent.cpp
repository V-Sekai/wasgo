/* THIS FILE IS GENERATED */
#include "InputEvent.h"
bool InputEvent::accumulate(InputEvent p_with_event){
	return (bool) _wasgo_InputEvent_wrapper_accumulate(wasgo_id, ((Variant) with_event).get_wasgo_id()));
}
String InputEvent::as_text(){
	return String::from_wasgo_id(_wasgo_InputEvent_wrapper_as_text(wasgo_id));
}
float InputEvent::get_action_strength(String p_action){
	return (float) _wasgo_InputEvent_wrapper_get_action_strength(wasgo_id, ((Variant) action).get_wasgo_id()));
}
int InputEvent::get_device(){
	return (int) _wasgo_InputEvent_wrapper_get_device(wasgo_id));
}
bool InputEvent::is_action(String p_action){
	return (bool) _wasgo_InputEvent_wrapper_is_action(wasgo_id, ((Variant) action).get_wasgo_id()));
}
bool InputEvent::is_action_pressed(String p_action, bool p_allow_echo = (bool) False){
	return (bool) _wasgo_InputEvent_wrapper_is_action_pressed(wasgo_id, ((Variant) action).get_wasgo_id(), allow_echo));
}
bool InputEvent::is_action_released(String p_action){
	return (bool) _wasgo_InputEvent_wrapper_is_action_released(wasgo_id, ((Variant) action).get_wasgo_id()));
}
bool InputEvent::is_action_type(){
	return (bool) _wasgo_InputEvent_wrapper_is_action_type(wasgo_id));
}
bool InputEvent::is_echo(){
	return (bool) _wasgo_InputEvent_wrapper_is_echo(wasgo_id));
}
bool InputEvent::is_pressed(){
	return (bool) _wasgo_InputEvent_wrapper_is_pressed(wasgo_id));
}
void InputEvent::set_device(int p_device){
	_wasgo_InputEvent_wrapper_set_device(wasgo_id, device);
}
bool InputEvent::shortcut_match(InputEvent p_event){
	return (bool) _wasgo_InputEvent_wrapper_shortcut_match(wasgo_id, ((Variant) event).get_wasgo_id()));
}
InputEvent InputEvent::xformed_by(Transform2D p_xform, Vector2 p_local_ofs = (Vector2) (0, 0)){
	return InputEvent::from_wasgo_id(_wasgo_InputEvent_wrapper_xformed_by(wasgo_id, ((Variant) xform).get_wasgo_id(), ((Variant) local_ofs).get_wasgo_id()));
}