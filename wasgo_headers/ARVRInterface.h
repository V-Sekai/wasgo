/* THIS FILE IS GENERATED */
#ifndef ARVRINTERFACE_H
#define ARVRINTERFACE_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
#include "Ustring.h"
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

protected:
public:
explicit ARVRInterface(WasGoID p_wasgo_id);
explicit ARVRInterface(Reference other);
ARVRInterface();
ARVRInterface new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ARVRInterface_wrapper_get_anchor_detection_is_enabled(WasGoID wasgo_id);
int _wasgo_ARVRInterface_wrapper_get_camera_feed_id(WasGoID wasgo_id);
int _wasgo_ARVRInterface_wrapper_get_capabilities(WasGoID wasgo_id);
void _wasgo_ARVRInterface_wrapper_get_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRInterface_wrapper_get_render_targetsize(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ARVRInterface_wrapper_get_tracking_status(WasGoID wasgo_id);
int _wasgo_ARVRInterface_wrapper_initialize(WasGoID wasgo_id);
int _wasgo_ARVRInterface_wrapper_is_initialized(WasGoID wasgo_id);
int _wasgo_ARVRInterface_wrapper_is_primary(WasGoID wasgo_id);
int _wasgo_ARVRInterface_wrapper_is_stereo(WasGoID wasgo_id);
void _wasgo_ARVRInterface_wrapper_set_anchor_detection_is_enabled(WasGoID wasgo_id, bool p_enable);
void _wasgo_ARVRInterface_wrapper_set_is_initialized(WasGoID wasgo_id, bool p_initialized);
void _wasgo_ARVRInterface_wrapper_set_is_primary(WasGoID wasgo_id, bool p_enable);
void _wasgo_ARVRInterface_wrapper_uninitialize(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_ARVRInterface_constructor();
            
}
#endif