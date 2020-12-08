/* THIS FILE IS GENERATED */
#ifndef VEHICLEWHEEL_H
#define VEHICLEWHEEL_H

#include "wasgo\wasgoid.h"

#include "Spatial.h"
class VehicleWheel : public Spatial{
public:
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

protected:
public:
explicit VehicleWheel(WasGoID p_wasgo_id);
explicit VehicleWheel(Spatial other);
VehicleWheel();
VehicleWheel new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_VehicleWheel_wrapper_get_brake(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_damping_compression(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_damping_relaxation(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_engine_force(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_friction_slip(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_radius(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_roll_influence(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_rpm(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_skidinfo(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_steering(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_max_force(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_rest_length(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_stiffness(WasGoID wasgo_id);
float _wasgo_VehicleWheel_wrapper_get_suspension_travel(WasGoID wasgo_id);
int _wasgo_VehicleWheel_wrapper_is_in_contact(WasGoID wasgo_id);
int _wasgo_VehicleWheel_wrapper_is_used_as_steering(WasGoID wasgo_id);
int _wasgo_VehicleWheel_wrapper_is_used_as_traction(WasGoID wasgo_id);
void _wasgo_VehicleWheel_wrapper_set_brake(WasGoID wasgo_id, float p_brake);
void _wasgo_VehicleWheel_wrapper_set_damping_compression(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_damping_relaxation(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_engine_force(WasGoID wasgo_id, float p_engine_force);
void _wasgo_VehicleWheel_wrapper_set_friction_slip(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_radius(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_roll_influence(WasGoID wasgo_id, float p_roll_influence);
void _wasgo_VehicleWheel_wrapper_set_steering(WasGoID wasgo_id, float p_steering);
void _wasgo_VehicleWheel_wrapper_set_suspension_max_force(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_suspension_rest_length(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_suspension_stiffness(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_suspension_travel(WasGoID wasgo_id, float p_length);
void _wasgo_VehicleWheel_wrapper_set_use_as_steering(WasGoID wasgo_id, bool p_enable);
void _wasgo_VehicleWheel_wrapper_set_use_as_traction(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_VehicleWheel_constructor();
            
}
#endif