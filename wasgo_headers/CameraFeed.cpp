/* THIS FILE IS GENERATED */
#include "CameraFeed.h"
int CameraFeed::get_id(){
	return (int) _wasgo_CameraFeed_wrapper_get_id(wasgo_id);
}
String CameraFeed::get_name(){
	return String::from_wasgo_id(_wasgo_CameraFeed_wrapper_get_name(wasgo_id));
}