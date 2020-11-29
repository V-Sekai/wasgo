/* THIS FILE IS GENERATED */
#ifndef ARVRSERVER_H
#define ARVRSERVER_H

#include "stdint.h"

#include "Variant.h"
#include "Object.h"
#include "ARVRInterface.h"
#include "ARVRPositionalTracker.h"
class ARVRServer : public Object{
public: ARVRServer();
enum RotationMode{
RESET_FULL_ROTATION,
RESET_BUT_KEEP_TILT,
DONT_RESET_ROTATION
};
enum TrackerType{
TRACKER_CONTROLLER,
TRACKER_BASESTATION,
TRACKER_ANCHOR,
TRACKER_ANY_KNOWN,
TRACKER_UNKNOWN,
TRACKER_ANY
};
void center_on_hmd(ARVRServer::RotationMode p_rotation_mode, bool p_keep_height);
ARVRInterface find_interface(String p_name);
Transform get_hmd_transform();
ARVRInterface get_interface(int p_idx);
int get_interface_count();
Array get_interfaces();
int get_last_commit_usec();
int get_last_frame_usec();
int get_last_process_usec();
ARVRInterface get_primary_interface();
Transform get_reference_frame();
ARVRPositionalTracker get_tracker(int p_idx);
int get_tracker_count();
float get_world_scale();
void set_primary_interface(ARVRInterface p_interface);
void set_world_scale(float p_arg0);
};
#endif