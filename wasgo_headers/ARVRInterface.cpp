/* THIS FILE IS GENERATED */
#include "ARVRInterface.h"
bool ARVRInterface::get_anchor_detection_is_enabled(){
	return (bool) _wasgo_ARVRInterface_wrapper_get_anchor_detection_is_enabled(wasgo_id);
}
int ARVRInterface::get_camera_feed_id(){
	return (int) _wasgo_ARVRInterface_wrapper_get_camera_feed_id(wasgo_id);
}
int ARVRInterface::get_capabilities(){
	return (int) _wasgo_ARVRInterface_wrapper_get_capabilities(wasgo_id);
}
String ARVRInterface::get_name(){
	return String::from_wasgo_id(_wasgo_ARVRInterface_wrapper_get_name(wasgo_id));
}
Vector2 ARVRInterface::get_render_targetsize(){
	return Vector2::from_wasgo_id(_wasgo_ARVRInterface_wrapper_get_render_targetsize(wasgo_id));
}
ARVRInterface::Tracking_status ARVRInterface::get_tracking_status(){
	return ARVRInterface::Tracking_status::from_wasgo_id(_wasgo_ARVRInterface_wrapper_get_tracking_status(wasgo_id));
}
bool ARVRInterface::initialize(){
	return (bool) _wasgo_ARVRInterface_wrapper_initialize(wasgo_id);
}
bool ARVRInterface::is_initialized(){
	return (bool) _wasgo_ARVRInterface_wrapper_is_initialized(wasgo_id);
}
bool ARVRInterface::is_primary(){
	return (bool) _wasgo_ARVRInterface_wrapper_is_primary(wasgo_id);
}
bool ARVRInterface::is_stereo(){
	return (bool) _wasgo_ARVRInterface_wrapper_is_stereo(wasgo_id);
}
void ARVRInterface::set_anchor_detection_is_enabled(bool p_enable){
	_wasgo_ARVRInterface_wrapper_set_anchor_detection_is_enabled(wasgo_id, p_enable);
}
void ARVRInterface::set_is_initialized(bool p_initialized){
	_wasgo_ARVRInterface_wrapper_set_is_initialized(wasgo_id, p_initialized);
}
void ARVRInterface::set_is_primary(bool p_enable){
	_wasgo_ARVRInterface_wrapper_set_is_primary(wasgo_id, p_enable);
}
void ARVRInterface::uninitialize(){
	_wasgo_ARVRInterface_wrapper_uninitialize(wasgo_id);
}