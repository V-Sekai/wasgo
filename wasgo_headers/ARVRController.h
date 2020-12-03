/* THIS FILE IS GENERATED */
#ifndef ARVRCONTROLLER_H
#define ARVRCONTROLLER_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Spatial.h"
#include "ARVRPositionalTracker.h"
#include "Mesh.h"
class ARVRController : public Spatial{
public:
int get_controller_id();
String get_controller_name();
ARVRPositionalTracker::TrackerHand get_hand();
bool get_is_active();
float get_joystick_axis(int p_axis);
int get_joystick_id();
Mesh get_mesh();
float get_rumble();
int is_button_pressed(int p_button);
void set_controller_id(int p_controller_id);
void set_rumble(float p_rumble);

protected:
ARVRController(WasGoId p_wasgo_id);
public:
ARVRController();
~ARVRController();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ARVRController_wrapper_get_controller_id(WasGoId wasgo_id);
void _wasgo_ARVRController_wrapper_get_controller_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_ARVRController_wrapper_get_hand(WasGoId wasgo_id);
int _wasgo_ARVRController_wrapper_get_is_active(WasGoId wasgo_id);
float _wasgo_ARVRController_wrapper_get_joystick_axis(WasGoId wasgo_id, int p_axis);
int _wasgo_ARVRController_wrapper_get_joystick_id(WasGoId wasgo_id);
WasGoId _wasgo_ARVRController_wrapper_get_mesh(WasGoId wasgo_id);
float _wasgo_ARVRController_wrapper_get_rumble(WasGoId wasgo_id);
int _wasgo_ARVRController_wrapper_is_button_pressed(WasGoId wasgo_id, int p_button);
void _wasgo_ARVRController_wrapper_set_controller_id(WasGoId wasgo_id, int p_controller_id);
void _wasgo_ARVRController_wrapper_set_rumble(WasGoId wasgo_id, float p_rumble);

    //constructor and destructor wrappers
    WasGoId _wasgo_ARVRController_constructor();
    void _wasgo_ARVRController_destructor(WasGoId p_wasgo_id);
            
}
#endif