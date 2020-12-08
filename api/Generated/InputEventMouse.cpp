/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventMouse.h"
int InputEventMouse::get_button_mask(){
	return (int) _wasgo_InputEventMouse_wrapper_get_button_mask(wasgo_id);
}
Vector2 InputEventMouse::get_global_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventMouse_wrapper_get_global_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 InputEventMouse::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventMouse_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void InputEventMouse::set_button_mask(int p_button_mask){
	_wasgo_InputEventMouse_wrapper_set_button_mask(wasgo_id, p_button_mask);
}
void InputEventMouse::set_global_position(Vector2 p_global_position){

    Variant wasgo_var_global_position = p_global_position;
    uint8_t wasgo_buffer_global_position[12];
    int wasgo_size_global_position = 12;
    encode_variant(wasgo_var_global_position, wasgo_buffer_global_position, wasgo_size_global_position);
    
	_wasgo_InputEventMouse_wrapper_set_global_position(wasgo_id, wasgo_buffer_global_position, wasgo_size_global_position);
}
void InputEventMouse::set_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_InputEventMouse_wrapper_set_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}

InputEventMouse::InputEventMouse(WasGoID p_wasgo_id) : InputEventWithModifiers(p_wasgo_id){
}
InputEventMouse::InputEventMouse(InputEventWithModifiers other) : InputEventWithModifiers(other._get_wasgo_id()){
}
InputEventMouse::InputEventMouse():InputEventWithModifiers(){
}
InputEventMouse InputEventMouse::new_instance(){
    return InputEventMouse(_wasgo_InputEventMouse_constructor());
}
WasGoID InputEventMouse::_get_wasgo_id(){
    return wasgo_id;
}
InputEventMouse::operator bool(){
    return (bool) wasgo_id;
}
