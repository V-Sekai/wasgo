/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventScreenTouch.h"
int InputEventScreenTouch::get_index(){
	return (int) _wasgo_InputEventScreenTouch_wrapper_get_index(wasgo_id);
}
Vector2 InputEventScreenTouch::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventScreenTouch_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void InputEventScreenTouch::set_index(int p_index){
	_wasgo_InputEventScreenTouch_wrapper_set_index(wasgo_id, p_index);
}
void InputEventScreenTouch::set_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_InputEventScreenTouch_wrapper_set_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void InputEventScreenTouch::set_pressed(bool p_pressed){
	_wasgo_InputEventScreenTouch_wrapper_set_pressed(wasgo_id, p_pressed);
}

InputEventScreenTouch::InputEventScreenTouch(WasGoID p_wasgo_id) : InputEvent(p_wasgo_id){
}
InputEventScreenTouch::InputEventScreenTouch(InputEvent other) : InputEvent(other._get_wasgo_id()){
}
InputEventScreenTouch::InputEventScreenTouch():InputEvent(){
}
InputEventScreenTouch InputEventScreenTouch::new_instance(){
    return InputEventScreenTouch(_wasgo_InputEventScreenTouch_constructor());
}
WasGoID InputEventScreenTouch::_get_wasgo_id(){
    return wasgo_id;
}
InputEventScreenTouch::operator bool(){
    return (bool) wasgo_id;
}
