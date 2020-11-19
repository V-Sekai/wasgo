/* THIS FILE IS GENERATED */
#ifndef VEHICLEBODY_H
#define VEHICLEBODY_H

#include <stdint.h>

#include "RigidBody.h"
class VehicleBody : public RigidBody{
public: VehicleBody();
float  get_brake();
float  get_brake();
float  get_engine_force();
float  get_engine_force();
float  get_steering();
float  get_steering();
void  set_brake(float brake);
void  set_engine_force(float engine_force);
void  set_steering(float steering);
};
#endif