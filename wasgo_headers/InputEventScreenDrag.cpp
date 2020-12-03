/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventScreenDrag.h"
int InputEventScreenDrag::get_index(){
	return (int) _wasgo_InputEventScreenDrag_wrapper_get_index(wasgo_id);
}
Vector2 InputEventScreenDrag::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventScreenDrag_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 InputEventScreenDrag::get_relative(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventScreenDrag_wrapper_get_relative(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 InputEventScreenDrag::get_speed(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventScreenDrag_wrapper_get_speed(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void InputEventScreenDrag::set_index(int p_index){
	_wasgo_InputEventScreenDrag_wrapper_set_index(wasgo_id, p_index);
}
void InputEventScreenDrag::set_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_InputEventScreenDrag_wrapper_set_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void InputEventScreenDrag::set_relative(Vector2 p_relative){

    Variant wasgo_var_relative = p_relative;
    uint8_t wasgo_buffer_relative[12];
    int wasgo_size_relative = 12;
    encode_variant(wasgo_var_relative, wasgo_buffer_relative, wasgo_size_relative);
    
	_wasgo_InputEventScreenDrag_wrapper_set_relative(wasgo_id, wasgo_buffer_relative, wasgo_size_relative);
}
void InputEventScreenDrag::set_speed(Vector2 p_speed){

    Variant wasgo_var_speed = p_speed;
    uint8_t wasgo_buffer_speed[12];
    int wasgo_size_speed = 12;
    encode_variant(wasgo_var_speed, wasgo_buffer_speed, wasgo_size_speed);
    
	_wasgo_InputEventScreenDrag_wrapper_set_speed(wasgo_id, wasgo_buffer_speed, wasgo_size_speed);
}

InputEventScreenDrag::InputEventScreenDrag(WasGoId p_wasgo_id) : InputEvent(p_wasgo_id){
}
InputEventScreenDrag::InputEventScreenDrag(){
    wasgo_id = _wasgo_InputEventScreenDrag_constructor();
}
InputEventScreenDrag::~InputEventScreenDrag(){
    _wasgo_InputEventScreenDrag_destructor(wasgo_id);
}