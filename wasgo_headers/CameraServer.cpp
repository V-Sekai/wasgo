/* THIS FILE IS GENERATED */
#include "CameraServer.h"
void CameraServer::add_feed(CameraFeed p_feed){
	_wasgo_CameraServer_wrapper_add_feed(wasgo_id, ((Variant) p_feed).get_wasgo_id());
}
Array CameraServer::feeds(){
	return Array::from_wasgo_id(_wasgo_CameraServer_wrapper_feeds(wasgo_id));
}
CameraFeed CameraServer::get_feed(int p_index){
	return CameraFeed::from_wasgo_id(_wasgo_CameraServer_wrapper_get_feed(wasgo_id, p_index));
}
int CameraServer::get_feed_count(){
	return (int) _wasgo_CameraServer_wrapper_get_feed_count(wasgo_id);
}
void CameraServer::remove_feed(CameraFeed p_feed){
	_wasgo_CameraServer_wrapper_remove_feed(wasgo_id, ((Variant) p_feed).get_wasgo_id());
}