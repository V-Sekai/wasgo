/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventGesture.h"
Vector2 InputEventGesture::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventGesture_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void InputEventGesture::set_position(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_InputEventGesture_wrapper_set_position(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}

InputEventGesture::InputEventGesture(WasGoID p_wasgo_id) : InputEventWithModifiers(p_wasgo_id){
}
InputEventGesture::InputEventGesture(InputEventWithModifiers other) : InputEventWithModifiers(other._get_wasgo_id()){
}
InputEventGesture::InputEventGesture():InputEventWithModifiers(){
}
InputEventGesture InputEventGesture::new_instance(){
    return InputEventGesture(_wasgo_InputEventGesture_constructor());
}
WasGoID InputEventGesture::_get_wasgo_id(){
    return wasgo_id;
}
InputEventGesture::operator bool(){
    return (bool) wasgo_id;
}
