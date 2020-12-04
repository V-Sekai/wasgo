/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventPanGesture.h"
Vector2 InputEventPanGesture::get_delta(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventPanGesture_wrapper_get_delta(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void InputEventPanGesture::set_delta(Vector2 p_delta){

    Variant wasgo_var_delta = p_delta;
    uint8_t wasgo_buffer_delta[12];
    int wasgo_size_delta = 12;
    encode_variant(wasgo_var_delta, wasgo_buffer_delta, wasgo_size_delta);
    
	_wasgo_InputEventPanGesture_wrapper_set_delta(wasgo_id, wasgo_buffer_delta, wasgo_size_delta);
}

InputEventPanGesture::InputEventPanGesture(WasGoID p_wasgo_id) : InputEventGesture(p_wasgo_id){
}
InputEventPanGesture::InputEventPanGesture(InputEventGesture other) : InputEventGesture(other._get_wasgo_id()){
    wasgo_id = _wasgo_InputEventPanGesture_constructor();
}
InputEventPanGesture::new_instance(){
    return InputEventPanGesture(_wasgo_InputEventPanGesture_constructor());
}