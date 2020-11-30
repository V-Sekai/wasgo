/* THIS FILE IS GENERATED */
#ifndef VEHICLEWHEEL_H
#define VEHICLEWHEEL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
class VehicleWheel : public Spatial{
float get_brake();
float get_damping_compression();
float get_damping_relaxation();
float get_engine_force();
float get_friction_slip();
float get_radius();
float get_roll_influence();
float get_rpm();
float get_skidinfo();
float get_steering();
float get_suspension_max_force();
float get_suspension_rest_length();
float get_suspension_stiffness();
float get_suspension_travel();
bool is_in_contact();
bool is_used_as_steering();
bool is_used_as_traction();
void set_brake(float p_brake);
void set_damping_compression(float p_length);
void set_damping_relaxation(float p_length);
void set_engine_force(float p_engine_force);
void set_friction_slip(float p_length);
void set_radius(float p_length);
void set_roll_influence(float p_roll_influence);
void set_steering(float p_steering);
void set_suspension_max_force(float p_length);
void set_suspension_rest_length(float p_length);
void set_suspension_stiffness(float p_length);
void set_suspension_travel(float p_length);
void set_use_as_steering(bool p_enable);
void set_use_as_traction(bool p_enable);

VehicleWheel(WasGoId p_wasgo_id);
~VehicleWheel();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_VehicleWheel_wrapper_get_brake(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_damping_compression(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_damping_relaxation(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_engine_force(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_friction_slip(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_radius(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_roll_influence(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_rpm(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_skidinfo(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_steering(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_max_force(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_rest_length(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_stiffness(WasGoId wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_travel(WasGoId wasgo_id);
int _wasgo_VehicleWheel_wrapper_is_in_contact(WasGoId wasgo_id);
int _wasgo_VehicleWheel_wrapper_is_used_as_steering(WasGoId wasgo_id);
int _wasgo_VehicleWheel_wrapper_is_used_as_traction(WasGoId wasgo_id);
void _wasgo_VehicleWheel_wrapper_set_brake(WasGoId wasgo_id, float p_brake);
void _wasgo_VehicleWheel_wrapper_set_damping_compression(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_damping_relaxation(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_engine_force(WasGoId wasgo_id, float p_engine_force);
void _wasgo_VehicleWheel_wrapper_set_friction_slip(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_radius(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_roll_influence(WasGoId wasgo_id, float p_roll_influence);
void _wasgo_VehicleWheel_wrapper_set_steering(WasGoId wasgo_id, float p_steering);
void _wasgo_VehicleWheel_wrapper_set_suspension_max_force(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_suspension_rest_length(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_suspension_stiffness(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_suspension_travel(WasGoId wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_use_as_steering(WasGoId wasgo_id, bool p_enable);
void _wasgo_VehicleWheel_wrapper_set_use_as_traction(WasGoId wasgo_id, bool p_enable);
}
#endif