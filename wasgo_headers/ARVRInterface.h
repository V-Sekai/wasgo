/* THIS FILE IS GENERATED */
#ifndef ARVRINTERFACE_H
#define ARVRINTERFACE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "ustring.h"
#include "Vector2.h"
class ARVRInterface : public Reference{
public:
enum Capabilities{
ARVR_NONE,
ARVR_MONO,
ARVR_STEREO,
ARVR_AR,
ARVR_EXTERNAL
};
enum Eyes{
EYE_MONO,
EYE_LEFT,
EYE_RIGHT
};
enum Tracking_status{
ARVR_NORMAL_TRACKING,
ARVR_EXCESSIVE_MOTION,
ARVR_INSUFFICIENT_FEATURES,
ARVR_UNKNOWN_TRACKING,
ARVR_NOT_TRACKING
};
bool get_anchor_detection_is_enabled();
int get_camera_feed_id();
int get_capabilities();
String get_name();
Vector2 get_render_targetsize();
ARVRInterface::Tracking_status get_tracking_status();
bool initialize();
bool is_initialized();
bool is_primary();
bool is_stereo();
void set_anchor_detection_is_enabled(bool p_enable);
void set_is_initialized(bool p_initialized);
void set_is_primary(bool p_enable);
void uninitialize();
};


//Wrapper Functions
extern "C"{
int _wasgo_ARVRInterface_wrapper_get_anchor_detection_is_enabled(WasGoId wasgo_id);
int _wasgo_ARVRInterface_wrapper_get_camera_feed_id(WasGoId wasgo_id);
int _wasgo_ARVRInterface_wrapper_get_capabilities(WasGoId wasgo_id);
WasGoId _wasgo_ARVRInterface_wrapper_get_name(WasGoId wasgo_id);
WasGoId _wasgo_ARVRInterface_wrapper_get_render_targetsize(WasGoId wasgo_id);
WasGoId _wasgo_ARVRInterface_wrapper_get_tracking_status(WasGoId wasgo_id);
int _wasgo_ARVRInterface_wrapper_initialize(WasGoId wasgo_id);
int _wasgo_ARVRInterface_wrapper_is_initialized(WasGoId wasgo_id);
int _wasgo_ARVRInterface_wrapper_is_primary(WasGoId wasgo_id);
int _wasgo_ARVRInterface_wrapper_is_stereo(WasGoId wasgo_id);
void _wasgo_ARVRInterface_wrapper_set_anchor_detection_is_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_ARVRInterface_wrapper_set_is_initialized(WasGoId wasgo_id, bool p_initialized);
void _wasgo_ARVRInterface_wrapper_set_is_primary(WasGoId wasgo_id, bool p_enable);
void _wasgo_ARVRInterface_wrapper_uninitialize(WasGoId wasgo_id);
}
#endif