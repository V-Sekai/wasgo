/* THIS FILE IS GENERATED */
#include "ARVRController.h"
int ARVRController::get_controller_id(){
	return (int) _wasgo_ARVRController_wrapper_get_controller_id(wasgo_id));
}
String ARVRController::get_controller_name(){
	return String::from_wasgo_id(_wasgo_ARVRController_wrapper_get_controller_name(wasgo_id));
}
ARVRPositionalTracker::TrackerHand ARVRController::get_hand(){
	return ARVRPositionalTracker::TrackerHand::from_wasgo_id(_wasgo_ARVRController_wrapper_get_hand(wasgo_id));
}
bool ARVRController::get_is_active(){
	return (bool) _wasgo_ARVRController_wrapper_get_is_active(wasgo_id));
}
float ARVRController::get_joystick_axis(int p_axis){
	return (float) _wasgo_ARVRController_wrapper_get_joystick_axis(wasgo_id, axis));
}
int ARVRController::get_joystick_id(){
	return (int) _wasgo_ARVRController_wrapper_get_joystick_id(wasgo_id));
}
Mesh ARVRController::get_mesh(){
	return Mesh::from_wasgo_id(_wasgo_ARVRController_wrapper_get_mesh(wasgo_id));
}
float ARVRController::get_rumble(){
	return (float) _wasgo_ARVRController_wrapper_get_rumble(wasgo_id));
}
int ARVRController::is_button_pressed(int p_button){
	return (int) _wasgo_ARVRController_wrapper_is_button_pressed(wasgo_id, button));
}
void ARVRController::set_controller_id(int p_controller_id){
	_wasgo_ARVRController_wrapper_set_controller_id(wasgo_id, controller_id);
}
void ARVRController::set_rumble(float p_rumble){
	_wasgo_ARVRController_wrapper_set_rumble(wasgo_id, rumble);
}

ARVRController::ARVRController(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ARVRController::~ARVRController(){
}