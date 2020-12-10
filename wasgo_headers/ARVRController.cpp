/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVRController.h"
int ARVRController::get_controller_id(){
	return (int) _wasgo_ARVRController_wrapper_get_controller_id(wasgo_id);
}
String ARVRController::get_controller_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ARVRController_wrapper_get_controller_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
ARVRPositionalTracker::TrackerHand ARVRController::get_hand(){
	return ARVRPositionalTracker::TrackerHand(_wasgo_ARVRController_wrapper_get_hand(wasgo_id));
}
bool ARVRController::get_is_active(){
	return (bool) _wasgo_ARVRController_wrapper_get_is_active(wasgo_id);
}
float ARVRController::get_joystick_axis(int p_axis){
	return (float) _wasgo_ARVRController_wrapper_get_joystick_axis(wasgo_id, p_axis);
}
int ARVRController::get_joystick_id(){
	return (int) _wasgo_ARVRController_wrapper_get_joystick_id(wasgo_id);
}
Mesh ARVRController::get_mesh(){
	return Mesh(_wasgo_ARVRController_wrapper_get_mesh(wasgo_id));
}
float ARVRController::get_rumble(){
	return (float) _wasgo_ARVRController_wrapper_get_rumble(wasgo_id);
}
int ARVRController::is_button_pressed(int p_button){
	return (int) _wasgo_ARVRController_wrapper_is_button_pressed(wasgo_id, p_button);
}
void ARVRController::set_controller_id(int p_controller_id){
	_wasgo_ARVRController_wrapper_set_controller_id(wasgo_id, p_controller_id);
}
void ARVRController::set_rumble(float p_rumble){
	_wasgo_ARVRController_wrapper_set_rumble(wasgo_id, p_rumble);
}

ARVRController::ARVRController(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
ARVRController::ARVRController(Spatial other) : Spatial(other._get_wasgo_id()){
}
ARVRController::ARVRController():Spatial(){
}
ARVRController ARVRController::new_instance(){
    return ARVRController(_wasgo_ARVRController_constructor());
}
WasGoID ARVRController::_get_wasgo_id(){
    return wasgo_id;
}
ARVRController::operator bool(){
    return (bool) wasgo_id;
}
