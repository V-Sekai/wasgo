/* THIS FILE IS GENERATED */
#ifndef ARVRSERVER_H
#define ARVRSERVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Transform.h"
#include "Variant.h"
#include "ARVRPositionalTracker.h"
#include "Object.h"
#include "ustring.h"
#include "ARVRInterface.h"
class ARVRServer : public Object{
public:
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

ARVRServer(WasGoId p_wasgo_id);
~ARVRServer();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ARVRServer_wrapper_center_on_hmd(WasGoId wasgo_id, WasGoId p_rotation_mode, bool p_keep_height);
WasGoId _wasgo_ARVRServer_wrapper_find_interface(WasGoId wasgo_id, WasGoId p_name);
WasGoId _wasgo_ARVRServer_wrapper_get_hmd_transform(WasGoId wasgo_id);
WasGoId _wasgo_ARVRServer_wrapper_get_interface(WasGoId wasgo_id, int p_idx);
int _wasgo_ARVRServer_wrapper_get_interface_count(WasGoId wasgo_id);
WasGoId _wasgo_ARVRServer_wrapper_get_interfaces(WasGoId wasgo_id);
int _wasgo_ARVRServer_wrapper_get_last_commit_usec(WasGoId wasgo_id);
int _wasgo_ARVRServer_wrapper_get_last_frame_usec(WasGoId wasgo_id);
int _wasgo_ARVRServer_wrapper_get_last_process_usec(WasGoId wasgo_id);
WasGoId _wasgo_ARVRServer_wrapper_get_primary_interface(WasGoId wasgo_id);
WasGoId _wasgo_ARVRServer_wrapper_get_reference_frame(WasGoId wasgo_id);
WasGoId _wasgo_ARVRServer_wrapper_get_tracker(WasGoId wasgo_id, int p_idx);
int _wasgo_ARVRServer_wrapper_get_tracker_count(WasGoId wasgo_id);
float _wasgo_ARVRServer_wrapper_get_world_scale(WasGoId wasgo_id);
void _wasgo_ARVRServer_wrapper_set_primary_interface(WasGoId wasgo_id, WasGoId p_interface);
void _wasgo_ARVRServer_wrapper_set_world_scale(WasGoId wasgo_id, float p_arg0);
}
#endif