/* THIS FILE IS GENERATED */
#include "VehicleWheel.h"
float VehicleWheel::get_brake(){
	return (float) _wasgo_VehicleWheel_wrapper_get_brake(wasgo_id);
}
float VehicleWheel::get_damping_compression(){
	return (float) _wasgo_VehicleWheel_wrapper_get_damping_compression(wasgo_id);
}
float VehicleWheel::get_damping_relaxation(){
	return (float) _wasgo_VehicleWheel_wrapper_get_damping_relaxation(wasgo_id);
}
float VehicleWheel::get_engine_force(){
	return (float) _wasgo_VehicleWheel_wrapper_get_engine_force(wasgo_id);
}
float VehicleWheel::get_friction_slip(){
	return (float) _wasgo_VehicleWheel_wrapper_get_friction_slip(wasgo_id);
}
float VehicleWheel::get_radius(){
	return (float) _wasgo_VehicleWheel_wrapper_get_radius(wasgo_id);
}
float VehicleWheel::get_roll_influence(){
	return (float) _wasgo_VehicleWheel_wrapper_get_roll_influence(wasgo_id);
}
float VehicleWheel::get_rpm(){
	return (float) _wasgo_VehicleWheel_wrapper_get_rpm(wasgo_id);
}
float VehicleWheel::get_skidinfo(){
	return (float) _wasgo_VehicleWheel_wrapper_get_skidinfo(wasgo_id);
}
float VehicleWheel::get_steering(){
	return (float) _wasgo_VehicleWheel_wrapper_get_steering(wasgo_id);
}
float VehicleWheel::get_suspension_max_force(){
	return (float) _wasgo_VehicleWheel_wrapper_get_suspension_max_force(wasgo_id);
}
float VehicleWheel::get_suspension_rest_length(){
	return (float) _wasgo_VehicleWheel_wrapper_get_suspension_rest_length(wasgo_id);
}
float VehicleWheel::get_suspension_stiffness(){
	return (float) _wasgo_VehicleWheel_wrapper_get_suspension_stiffness(wasgo_id);
}
float VehicleWheel::get_suspension_travel(){
	return (float) _wasgo_VehicleWheel_wrapper_get_suspension_travel(wasgo_id);
}
bool VehicleWheel::is_in_contact(){
	return (bool) _wasgo_VehicleWheel_wrapper_is_in_contact(wasgo_id);
}
bool VehicleWheel::is_used_as_steering(){
	return (bool) _wasgo_VehicleWheel_wrapper_is_used_as_steering(wasgo_id);
}
bool VehicleWheel::is_used_as_traction(){
	return (bool) _wasgo_VehicleWheel_wrapper_is_used_as_traction(wasgo_id);
}
void VehicleWheel::set_brake(float p_brake){
	_wasgo_VehicleWheel_wrapper_set_brake(wasgo_id, p_brake);
}
void VehicleWheel::set_damping_compression(float p_length){
	_wasgo_VehicleWheel_wrapper_set_damping_compression(wasgo_id, p_length);
}
void VehicleWheel::set_damping_relaxation(float p_length){
	_wasgo_VehicleWheel_wrapper_set_damping_relaxation(wasgo_id, p_length);
}
void VehicleWheel::set_engine_force(float p_engine_force){
	_wasgo_VehicleWheel_wrapper_set_engine_force(wasgo_id, p_engine_force);
}
void VehicleWheel::set_friction_slip(float p_length){
	_wasgo_VehicleWheel_wrapper_set_friction_slip(wasgo_id, p_length);
}
void VehicleWheel::set_radius(float p_length){
	_wasgo_VehicleWheel_wrapper_set_radius(wasgo_id, p_length);
}
void VehicleWheel::set_roll_influence(float p_roll_influence){
	_wasgo_VehicleWheel_wrapper_set_roll_influence(wasgo_id, p_roll_influence);
}
void VehicleWheel::set_steering(float p_steering){
	_wasgo_VehicleWheel_wrapper_set_steering(wasgo_id, p_steering);
}
void VehicleWheel::set_suspension_max_force(float p_length){
	_wasgo_VehicleWheel_wrapper_set_suspension_max_force(wasgo_id, p_length);
}
void VehicleWheel::set_suspension_rest_length(float p_length){
	_wasgo_VehicleWheel_wrapper_set_suspension_rest_length(wasgo_id, p_length);
}
void VehicleWheel::set_suspension_stiffness(float p_length){
	_wasgo_VehicleWheel_wrapper_set_suspension_stiffness(wasgo_id, p_length);
}
void VehicleWheel::set_suspension_travel(float p_length){
	_wasgo_VehicleWheel_wrapper_set_suspension_travel(wasgo_id, p_length);
}
void VehicleWheel::set_use_as_steering(bool p_enable){
	_wasgo_VehicleWheel_wrapper_set_use_as_steering(wasgo_id, p_enable);
}
void VehicleWheel::set_use_as_traction(bool p_enable){
	_wasgo_VehicleWheel_wrapper_set_use_as_traction(wasgo_id, p_enable);
}