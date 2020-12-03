/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CameraServer.h"
void CameraServer::add_feed(CameraFeed p_feed){
	_wasgo_CameraServer_wrapper_add_feed(wasgo_id, p_feed._get_wasgo_id());
}
Array CameraServer::feeds(){
	return Array(_wasgo_CameraServer_wrapper_feeds(wasgo_id));
}
CameraFeed CameraServer::get_feed(int p_index){
	return CameraFeed(_wasgo_CameraServer_wrapper_get_feed(wasgo_id, p_index));
}
int CameraServer::get_feed_count(){
	return (int) _wasgo_CameraServer_wrapper_get_feed_count(wasgo_id);
}
void CameraServer::remove_feed(CameraFeed p_feed){
	_wasgo_CameraServer_wrapper_remove_feed(wasgo_id, p_feed._get_wasgo_id());
}

CameraServer::CameraServer(WasGoId p_wasgo_id) : Object(p_wasgo_id){
}
CameraServer::CameraServer(){
    wasgo_id = _wasgo_CameraServer_constructor();
}
CameraServer::~CameraServer(){
    _wasgo_CameraServer_destructor(wasgo_id);
}