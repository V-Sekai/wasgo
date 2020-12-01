/* THIS FILE IS GENERATED */
#include "VehicleBody.h"
float VehicleBody::get_brake(){
	return (float) _wasgo_VehicleBody_wrapper_get_brake(wasgo_id);
}
float VehicleBody::get_engine_force(){
	return (float) _wasgo_VehicleBody_wrapper_get_engine_force(wasgo_id);
}
float VehicleBody::get_steering(){
	return (float) _wasgo_VehicleBody_wrapper_get_steering(wasgo_id);
}
void VehicleBody::set_brake(float p_brake){
	_wasgo_VehicleBody_wrapper_set_brake(wasgo_id, p_brake);
}
void VehicleBody::set_engine_force(float p_engine_force){
	_wasgo_VehicleBody_wrapper_set_engine_force(wasgo_id, p_engine_force);
}
void VehicleBody::set_steering(float p_steering){
	_wasgo_VehicleBody_wrapper_set_steering(wasgo_id, p_steering);
}