/* THIS FILE IS GENERATED */
#ifndef VEHICLEWHEEL_H
#define VEHICLEWHEEL_H

#include <stdint.h>

#include "Spatial.h"
class VehicleWheel : public Spatial{
public: VehicleWheel();
float  get_brake();
float  get_brake();
float  get_damping_compression();
float  get_damping_compression();
float  get_damping_relaxation();
float  get_damping_relaxation();
float  get_engine_force();
float  get_engine_force();
float  get_friction_slip();
float  get_friction_slip();
float  get_radius();
float  get_radius();
float  get_roll_influence();
float  get_roll_influence();
float  get_rpm();
float  get_rpm();
float  get_skidinfo();
float  get_skidinfo();
float  get_steering();
float  get_steering();
float  get_suspension_max_force();
float  get_suspension_max_force();
float  get_suspension_rest_length();
float  get_suspension_rest_length();
float  get_suspension_stiffness();
float  get_suspension_stiffness();
float  get_suspension_travel();
float  get_suspension_travel();
bool  is_in_contact();
bool  is_in_contact();
bool  is_used_as_steering();
bool  is_used_as_steering();
bool  is_used_as_traction();
bool  is_used_as_traction();
void  set_brake(float brake);
void  set_damping_compression(float length);
void  set_damping_relaxation(float length);
void  set_engine_force(float engine_force);
void  set_friction_slip(float length);
void  set_radius(float length);
void  set_roll_influence(float roll_influence);
void  set_steering(float steering);
void  set_suspension_max_force(float length);
void  set_suspension_rest_length(float length);
void  set_suspension_stiffness(float length);
void  set_suspension_travel(float length);
void  set_use_as_steering(bool enable);
void  set_use_as_traction(bool enable);
};
#endif