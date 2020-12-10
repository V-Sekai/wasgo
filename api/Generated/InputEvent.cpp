/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEvent.h"
bool InputEvent::accumulate(InputEvent p_with_event){
	return (bool) _wasgo_InputEvent_wrapper_accumulate(wasgo_id, p_with_event._get_wasgo_id());
}
String InputEvent::as_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256] = {0};
    _wasgo_InputEvent_wrapper_as_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float InputEvent::get_action_strength(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (float) _wasgo_InputEvent_wrapper_get_action_strength(wasgo_id, wasgo_buffer_action, wasgo_size_action);
}
int InputEvent::get_device(){
	return (int) _wasgo_InputEvent_wrapper_get_device(wasgo_id);
}
bool InputEvent::is_action(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (bool) _wasgo_InputEvent_wrapper_is_action(wasgo_id, wasgo_buffer_action, wasgo_size_action);
}
bool InputEvent::is_action_pressed(String p_action, bool p_allow_echo){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (bool) _wasgo_InputEvent_wrapper_is_action_pressed(wasgo_id, wasgo_buffer_action, wasgo_size_action, -69, p_allow_echo);
}
bool InputEvent::is_action_released(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (bool) _wasgo_InputEvent_wrapper_is_action_released(wasgo_id, wasgo_buffer_action, wasgo_size_action);
}
bool InputEvent::is_action_type(){
	return (bool) _wasgo_InputEvent_wrapper_is_action_type(wasgo_id);
}
bool InputEvent::is_echo(){
	return (bool) _wasgo_InputEvent_wrapper_is_echo(wasgo_id);
}
bool InputEvent::is_pressed(){
	return (bool) _wasgo_InputEvent_wrapper_is_pressed(wasgo_id);
}
void InputEvent::set_device(int p_device){
	_wasgo_InputEvent_wrapper_set_device(wasgo_id, p_device);
}
bool InputEvent::shortcut_match(InputEvent p_event){
	return (bool) _wasgo_InputEvent_wrapper_shortcut_match(wasgo_id, p_event._get_wasgo_id());
}
InputEvent InputEvent::xformed_by(Transform2D p_xform, Vector2 p_local_ofs){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    

    Variant wasgo_var_local_ofs = p_local_ofs;
    uint8_t wasgo_buffer_local_ofs[12];
    int wasgo_size_local_ofs = 12;
    encode_variant(wasgo_var_local_ofs, wasgo_buffer_local_ofs, wasgo_size_local_ofs);

	return InputEvent(_wasgo_InputEvent_wrapper_xformed_by(wasgo_id, wasgo_buffer_xform, wasgo_size_xform, -69, wasgo_buffer_local_ofs, wasgo_size_local_ofs));
}

InputEvent::InputEvent(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
InputEvent::InputEvent(Resource other) : Resource(other._get_wasgo_id()){
}
InputEvent::InputEvent():Resource(){
}
InputEvent InputEvent::new_instance(){
    return InputEvent(_wasgo_InputEvent_constructor());
}
WasGoID InputEvent::_get_wasgo_id(){
    return wasgo_id;
}
InputEvent::operator bool(){
    return (bool) wasgo_id;
}
