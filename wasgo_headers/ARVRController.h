/* THIS FILE IS GENERATED */
#ifndef ARVRCONTROLLER_H
#define ARVRCONTROLLER_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
#include "Mesh.h"
#include "ARVRPositionalTracker.h"
class ARVRController : public Spatial{
public: ARVRController();
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
};
#endif