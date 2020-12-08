/* THIS FILE IS GENERATED */
#ifndef VEHICLEBODY_H
#define VEHICLEBODY_H

#include "wasgo\wasgoid.h"

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
public:
explicit VehicleBody(WasGoID p_wasgo_id);
explicit VehicleBody(RigidBody other);
VehicleBody();
VehicleBody new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_VehicleBody_wrapper_get_brake(WasGoID wasgo_id);
float _wasgo_VehicleBody_wrapper_get_engine_force(WasGoID wasgo_id);
float _wasgo_VehicleBody_wrapper_get_steering(WasGoID wasgo_id);
void _wasgo_VehicleBody_wrapper_set_brake(WasGoID wasgo_id, float p_brake);
void _wasgo_VehicleBody_wrapper_set_engine_force(WasGoID wasgo_id, float p_engine_force);
void _wasgo_VehicleBody_wrapper_set_steering(WasGoID wasgo_id, float p_steering);

    //constructor wrappers
    WasGoID _wasgo_VehicleBody_constructor();
            
}
#endif