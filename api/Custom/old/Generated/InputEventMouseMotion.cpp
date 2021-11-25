/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InputEventMouseMotion.h"
float InputEventMouseMotion::get_pressure(){
	return (float) _wasgo_InputEventMouseMotion_wrapper_get_pressure(wasgo_id);
}
Vector2 InputEventMouseMotion::get_relative(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventMouseMotion_wrapper_get_relative(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 InputEventMouseMotion::get_speed(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventMouseMotion_wrapper_get_speed(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 InputEventMouseMotion::get_tilt(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_InputEventMouseMotion_wrapper_get_tilt(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void InputEventMouseMotion::set_pressure(float p_pressure){
	_wasgo_InputEventMouseMotion_wrapper_set_pressure(wasgo_id, p_pressure);
}
void InputEventMouseMotion::set_relative(Vector2 p_relative){

    Variant wasgo_var_relative = p_relative;
    uint8_t wasgo_buffer_relative[12];
    int wasgo_size_relative = 12;
    encode_variant(wasgo_var_relative, wasgo_buffer_relative, wasgo_size_relative);
    
	_wasgo_InputEventMouseMotion_wrapper_set_relative(wasgo_id, wasgo_buffer_relative, wasgo_size_relative);
}
void InputEventMouseMotion::set_speed(Vector2 p_speed){

    Variant wasgo_var_speed = p_speed;
    uint8_t wasgo_buffer_speed[12];
    int wasgo_size_speed = 12;
    encode_variant(wasgo_var_speed, wasgo_buffer_speed, wasgo_size_speed);
    
	_wasgo_InputEventMouseMotion_wrapper_set_speed(wasgo_id, wasgo_buffer_speed, wasgo_size_speed);
}
void InputEventMouseMotion::set_tilt(Vector2 p_tilt){

    Variant wasgo_var_tilt = p_tilt;
    uint8_t wasgo_buffer_tilt[12];
    int wasgo_size_tilt = 12;
    encode_variant(wasgo_var_tilt, wasgo_buffer_tilt, wasgo_size_tilt);
    
	_wasgo_InputEventMouseMotion_wrapper_set_tilt(wasgo_id, wasgo_buffer_tilt, wasgo_size_tilt);
}

InputEventMouseMotion::InputEventMouseMotion(WasGoID p_wasgo_id) : InputEventMouse(p_wasgo_id){
}
InputEventMouseMotion::InputEventMouseMotion(InputEventMouse other) : InputEventMouse(other._get_wasgo_id()){
}
InputEventMouseMotion::InputEventMouseMotion():InputEventMouse(){
}
InputEventMouseMotion InputEventMouseMotion::new_instance(){
    return InputEventMouseMotion(_wasgo_InputEventMouseMotion_constructor());
}
WasGoID InputEventMouseMotion::_get_wasgo_id(){
    return wasgo_id;
}
InputEventMouseMotion::operator bool(){
    return (bool) wasgo_id;
}
