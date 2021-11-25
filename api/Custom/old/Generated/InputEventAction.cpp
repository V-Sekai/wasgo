/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventAction.h"
String InputEventAction::get_action(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_InputEventAction_wrapper_get_action(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float InputEventAction::get_strength(){
	return (float) _wasgo_InputEventAction_wrapper_get_strength(wasgo_id);
}
void InputEventAction::set_action(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	_wasgo_InputEventAction_wrapper_set_action(wasgo_id, wasgo_buffer_action, wasgo_size_action);
}
void InputEventAction::set_pressed(bool p_pressed){
	_wasgo_InputEventAction_wrapper_set_pressed(wasgo_id, p_pressed);
}
void InputEventAction::set_strength(float p_strength){
	_wasgo_InputEventAction_wrapper_set_strength(wasgo_id, p_strength);
}

InputEventAction::InputEventAction(WasGoID p_wasgo_id) : InputEvent(p_wasgo_id){
}
InputEventAction::InputEventAction(InputEvent other) : InputEvent(other._get_wasgo_id()){
}
InputEventAction::InputEventAction():InputEvent(){
}
InputEventAction InputEventAction::new_instance(){
    return InputEventAction(_wasgo_InputEventAction_constructor());
}
WasGoID InputEventAction::_get_wasgo_id(){
    return wasgo_id;
}
InputEventAction::operator bool(){
    return (bool) wasgo_id;
}
