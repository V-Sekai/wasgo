/* THIS FILE IS GENERATED */
#ifndef ARVRSERVER_H
#define ARVRSERVER_H

#include <stdint.h>

#include "ARVRPositionalTracker.h"
#include "ARVRInterface.h"
#include "String.h"
#include "Transform.h"
#include "Object.h"
#include "Variant.h"
class ARVRServer : public Object{
public: ARVRServer();
enum RotationMode{
RESET_FULL_ROTATION: 0,
RESET_BUT_KEEP_TILT: 1,
};
enum TrackerType{
TRACKER_CONTROLLER: 1,
TRACKER_BASESTATION: 2,
TRACKER_ANCHOR: 4,
TRACKER_ANY_KNOWN: 127,
TRACKER_UNKNOWN: 128,
};
void  center_on_hmd(int rotation_mode, bool keep_height);
ARVRInterface  find_interface(String name);
Transform  get_hmd_transform();
Transform  get_hmd_transform();
ARVRInterface  get_interface(int idx);
int  get_interface_count();
int  get_interface_count();
Array  get_interfaces();
Array  get_interfaces();
int  get_last_commit_usec();
int  get_last_commit_usec();
int  get_last_frame_usec();
int  get_last_frame_usec();
int  get_last_process_usec();
int  get_last_process_usec();
ARVRInterface  get_primary_interface();
ARVRInterface  get_primary_interface();
Transform  get_reference_frame();
Transform  get_reference_frame();
ARVRPositionalTracker  get_tracker(int idx);
int  get_tracker_count();
int  get_tracker_count();
float  get_world_scale();
float  get_world_scale();
void  set_primary_interface(ARVRInterface interface);
void  set_world_scale(float arg0);
};
#endif