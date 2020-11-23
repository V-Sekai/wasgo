/* THIS FILE IS GENERATED */
#ifndef ARVRINTERFACE_H
#define ARVRINTERFACE_H

#include <stdint.h>

#include "Reference.h"
#include "String.h"
#include "Vector2.h"
class ARVRInterface : public Reference{
public: ARVRInterface();
enum Tracking_status{
ARVR_NORMAL_TRACKING: 0,
ARVR_EXCESSIVE_MOTION: 1,
ARVR_INSUFFICIENT_FEATURES: 2,
ARVR_UNKNOWN_TRACKING: 3,
};
enum Eyes{
EYE_MONO: 0,
EYE_LEFT: 1,
};
enum Capabilities{
ARVR_NONE: 0,
ARVR_MONO: 1,
ARVR_STEREO: 2,
ARVR_AR: 4,
};
bool  get_anchor_detection_is_enabled();
bool  get_anchor_detection_is_enabled();
int  get_camera_feed_id();
int  get_camera_feed_id();
int  get_capabilities();
int  get_capabilities();
String  get_name();
String  get_name();
Vector2  get_render_targetsize();
Vector2  get_render_targetsize();
enum.ARVRInterface::Tracking_status  get_tracking_status();
enum.ARVRInterface::Tracking_status  get_tracking_status();
bool  initialize();
bool  initialize();
bool  is_initialized();
bool  is_initialized();
bool  is_primary();
bool  is_primary();
bool  is_stereo();
bool  is_stereo();
void  set_anchor_detection_is_enabled(bool enable);
void  set_is_initialized(bool initialized);
void  set_is_primary(bool enable);
void  uninitialize();
void  uninitialize();
};
#endif