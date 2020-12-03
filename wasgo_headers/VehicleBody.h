/* THIS FILE IS GENERATED */
#ifndef VEHICLEBODY_H
#define VEHICLEBODY_H

#include "wasgo\wasgo.h"

#include "RigidBody.h"
class VehicleBody : public RigidBody{
public:
float get_brake();
float get_engine_force();
float get_steering();
void set_brake(float p_brake);
void set_engine_force(float p_engine_force);
void set_steering(float p_steering);

protected:
VehicleBody(WasGoId p_wasgo_id);
public:
VehicleBody();
~VehicleBody();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_VehicleBody_wrapper_get_brake(WasGoId wasgo_id);
float _wasgo_VehicleBody_wrapper_get_engine_force(WasGoId wasgo_id);
float _wasgo_VehicleBody_wrapper_get_steering(WasGoId wasgo_id);
void _wasgo_VehicleBody_wrapper_set_brake(WasGoId wasgo_id, float p_brake);
void _wasgo_VehicleBody_wrapper_set_engine_force(WasGoId wasgo_id, float p_engine_force);
void _wasgo_VehicleBody_wrapper_set_steering(WasGoId wasgo_id, float p_steering);

    //constructor and destructor wrappers
    WasGoId _wasgo_VehicleBody_constructor();
    void _wasgo_VehicleBody_destructor(WasGoId p_wasgo_id);
            
}
#endif