/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Input.h"
void Input::action_press(String p_action, float p_strength){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = 10 + String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	_wasgo_Input_wrapper_action_press(wasgo_buffer_action, wasgo_size_action, p_strength);
}
void Input::action_release(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = 10 + String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	_wasgo_Input_wrapper_action_release(wasgo_buffer_action, wasgo_size_action);
}
void Input::add_joy_mapping(String p_mapping, bool p_update_existing){

    Variant wasgo_var_mapping = p_mapping;
    int wasgo_size_mapping = 10 + String(p_mapping).size();
    uint8_t wasgo_buffer_mapping[wasgo_size_mapping];
    encode_variant(wasgo_var_mapping, wasgo_buffer_mapping, wasgo_size_mapping);
    
	_wasgo_Input_wrapper_add_joy_mapping(wasgo_buffer_mapping, wasgo_size_mapping, p_update_existing);
}
Vector3 Input::get_accelerometer(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Input_wrapper_get_accelerometer(wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float Input::get_action_strength(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = 10 + String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (float) _wasgo_Input_wrapper_get_action_strength(wasgo_buffer_action, wasgo_size_action);
}
// Array Input::get_connected_joypads(){
// 	return Array(_wasgo_Input_wrapper_get_connected_joypads());
// }
Input::CursorShape Input::get_current_cursor_shape(){
	return Input::CursorShape(_wasgo_Input_wrapper_get_current_cursor_shape());
}
Vector3 Input::get_gravity(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Input_wrapper_get_gravity(wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector3 Input::get_gyroscope(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Input_wrapper_get_gyroscope(wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float Input::get_joy_axis(int p_device, int p_axis){
	return (float) _wasgo_Input_wrapper_get_joy_axis(p_device, p_axis);
}
int Input::get_joy_axis_index_from_string(String p_axis){

    Variant wasgo_var_axis = p_axis;
    int wasgo_size_axis = 10 + String(p_axis).size();
    uint8_t wasgo_buffer_axis[wasgo_size_axis];
    encode_variant(wasgo_var_axis, wasgo_buffer_axis, wasgo_size_axis);
    
	return (int) _wasgo_Input_wrapper_get_joy_axis_index_from_string(wasgo_buffer_axis, wasgo_size_axis);
}
String Input::get_joy_axis_string(int p_axis_index){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Input_wrapper_get_joy_axis_string(wasgo_ret_buffer, wasgo_ret_buffer_size, p_axis_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Input::get_joy_button_index_from_string(String p_button){

    Variant wasgo_var_button = p_button;
    int wasgo_size_button = 10 + String(p_button).size();
    uint8_t wasgo_buffer_button[wasgo_size_button];
    encode_variant(wasgo_var_button, wasgo_buffer_button, wasgo_size_button);
    
	return (int) _wasgo_Input_wrapper_get_joy_button_index_from_string(wasgo_buffer_button, wasgo_size_button);
}
String Input::get_joy_button_string(int p_button_index){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Input_wrapper_get_joy_button_string(wasgo_ret_buffer, wasgo_ret_buffer_size, p_button_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String Input::get_joy_guid(int p_device){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Input_wrapper_get_joy_guid(wasgo_ret_buffer, wasgo_ret_buffer_size, p_device);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String Input::get_joy_name(int p_device){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Input_wrapper_get_joy_name(wasgo_ret_buffer, wasgo_ret_buffer_size, p_device);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float Input::get_joy_vibration_duration(int p_device){
	return (float) _wasgo_Input_wrapper_get_joy_vibration_duration(p_device);
}
Vector2 Input::get_joy_vibration_strength(int p_device){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Input_wrapper_get_joy_vibration_strength(wasgo_ret_buffer, wasgo_ret_buffer_size, p_device);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 Input::get_last_mouse_speed(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Input_wrapper_get_last_mouse_speed(wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector3 Input::get_magnetometer(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Input_wrapper_get_magnetometer(wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Input::get_mouse_button_mask(){
	return (int) _wasgo_Input_wrapper_get_mouse_button_mask();
}
Input::MouseMode Input::get_mouse_mode(){
	return Input::MouseMode(_wasgo_Input_wrapper_get_mouse_mode());
}
bool Input::is_action_just_pressed(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = 10 + String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (bool) _wasgo_Input_wrapper_is_action_just_pressed(wasgo_buffer_action, wasgo_size_action);
}
bool Input::is_action_just_released(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = 10 + String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (bool) _wasgo_Input_wrapper_is_action_just_released(wasgo_buffer_action, wasgo_size_action);
}
bool Input::is_action_pressed(String p_action){

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = 10 + String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return (bool) _wasgo_Input_wrapper_is_action_pressed(wasgo_buffer_action, wasgo_size_action);
}
bool Input::is_joy_button_pressed(int p_device, int p_button){
	return (bool) _wasgo_Input_wrapper_is_joy_button_pressed(p_device, p_button);
}
bool Input::is_joy_known(int p_device){
	return (bool) _wasgo_Input_wrapper_is_joy_known(p_device);
}
bool Input::is_key_pressed(int p_scancode){
	return (bool) _wasgo_Input_wrapper_is_key_pressed(p_scancode);
}
bool Input::is_mouse_button_pressed(int p_button){
	return (bool) _wasgo_Input_wrapper_is_mouse_button_pressed(p_button);
}
void Input::joy_connection_changed(int p_device, bool p_connected, String p_name, String p_guid){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_guid = p_guid;
    int wasgo_size_guid = 10 + String(p_guid).size();
    uint8_t wasgo_buffer_guid[wasgo_size_guid];
    encode_variant(wasgo_var_guid, wasgo_buffer_guid, wasgo_size_guid);
    
	_wasgo_Input_wrapper_joy_connection_changed(p_device, p_connected, wasgo_buffer_name, wasgo_size_name, wasgo_size_name, wasgo_buffer_guid, wasgo_size_guid);
}
void Input::parse_input_event(InputEvent p_event){
	_wasgo_Input_wrapper_parse_input_event(p_event._get_wasgo_id());
}
void Input::remove_joy_mapping(String p_guid){

    Variant wasgo_var_guid = p_guid;
    int wasgo_size_guid = 10 + String(p_guid).size();
    uint8_t wasgo_buffer_guid[wasgo_size_guid];
    encode_variant(wasgo_var_guid, wasgo_buffer_guid, wasgo_size_guid);
    
	_wasgo_Input_wrapper_remove_joy_mapping(wasgo_buffer_guid, wasgo_size_guid);
}
void Input::set_custom_mouse_cursor(Resource p_image, Input::CursorShape p_shape, Vector2 p_hotspot){

    Variant wasgo_var_hotspot = p_hotspot;
    uint8_t wasgo_buffer_hotspot[12];
    int wasgo_size_hotspot = 12;
    encode_variant(wasgo_var_hotspot, wasgo_buffer_hotspot, wasgo_size_hotspot);
    
	_wasgo_Input_wrapper_set_custom_mouse_cursor(p_image._get_wasgo_id(), p_shape, wasgo_buffer_hotspot, wasgo_size_hotspot, wasgo_size_hotspot);
}
void Input::set_default_cursor_shape(Input::CursorShape p_shape){
	_wasgo_Input_wrapper_set_default_cursor_shape(p_shape);
}
void Input::set_mouse_mode(Input::MouseMode p_mode){
	_wasgo_Input_wrapper_set_mouse_mode(p_mode);
}
void Input::set_use_accumulated_input(bool p_enable){
	_wasgo_Input_wrapper_set_use_accumulated_input(p_enable);
}
void Input::start_joy_vibration(int p_device, float p_weak_magnitude, float p_strong_magnitude, float p_duration){
	_wasgo_Input_wrapper_start_joy_vibration(p_device, p_weak_magnitude, p_strong_magnitude, -69, p_duration);
}
void Input::stop_joy_vibration(int p_device){
	_wasgo_Input_wrapper_stop_joy_vibration(p_device);
}
void Input::vibrate_handheld(int p_duration_ms){
	_wasgo_Input_wrapper_vibrate_handheld(p_duration_ms);
}
void Input::warp_mouse_position(Vector2 p_to){

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[12];
    int wasgo_size_to = 12;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	_wasgo_Input_wrapper_warp_mouse_position(wasgo_buffer_to, wasgo_size_to);
}