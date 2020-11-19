/* THIS FILE IS GENERATED */
#ifndef ARVRCONTROLLER_H
#define ARVRCONTROLLER_H

#include <stdint.h>

#include "ARVRPositionalTracker.h"
#include "String.h"
#include "Spatial.h"
#include "Mesh.h"
class ARVRController : public Spatial{
public: ARVRController();
int  get_controller_id();
int  get_controller_id();
String  get_controller_name();
String  get_controller_name();
enum.ARVRPositionalTracker::TrackerHand  get_hand();
enum.ARVRPositionalTracker::TrackerHand  get_hand();
bool  get_is_active();
bool  get_is_active();
float  get_joystick_axis(int axis);
int  get_joystick_id();
int  get_joystick_id();
Mesh  get_mesh();
Mesh  get_mesh();
float  get_rumble();
float  get_rumble();
int  is_button_pressed(int button);
void  set_controller_id(int controller_id);
void  set_rumble(float rumble);
};
#endif