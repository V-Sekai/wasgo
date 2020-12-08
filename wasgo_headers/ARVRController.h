/* THIS FILE IS GENERATED */
#ifndef ARVRCONTROLLER_H
#define ARVRCONTROLLER_H

#include "wasgo\wasgoid.h"

#include "Spatial.h"
#include "Mesh.h"
#include "Ustring.h"
#include "ARVRPositionalTracker.h"
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
public:
explicit ARVRController(WasGoID p_wasgo_id);
explicit ARVRController(Spatial other);
ARVRController();
ARVRController new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ARVRController_wrapper_get_controller_id(WasGoID wasgo_id);
void _wasgo_ARVRController_wrapper_get_controller_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ARVRController_wrapper_get_hand(WasGoID wasgo_id);
int _wasgo_ARVRController_wrapper_get_is_active(WasGoID wasgo_id);
float _wasgo_ARVRController_wrapper_get_joystick_axis(WasGoID wasgo_id, int p_axis);
int _wasgo_ARVRController_wrapper_get_joystick_id(WasGoID wasgo_id);
WasGoID _wasgo_ARVRController_wrapper_get_mesh(WasGoID wasgo_id);
float _wasgo_ARVRController_wrapper_get_rumble(WasGoID wasgo_id);
int _wasgo_ARVRController_wrapper_is_button_pressed(WasGoID wasgo_id, int p_button);
void _wasgo_ARVRController_wrapper_set_controller_id(WasGoID wasgo_id, int p_controller_id);
void _wasgo_ARVRController_wrapper_set_rumble(WasGoID wasgo_id, float p_rumble);

    //constructor wrappers
    WasGoID _wasgo_ARVRController_constructor();
            
}
#endif