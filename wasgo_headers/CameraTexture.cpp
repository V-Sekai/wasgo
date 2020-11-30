/* THIS FILE IS GENERATED */
#include "CameraTexture.h"
bool CameraTexture::get_camera_active(){
	return (bool) _wasgo_CameraTexture_wrapper_get_camera_active(wasgo_id));
}
int CameraTexture::get_camera_feed_id(){
	return (int) _wasgo_CameraTexture_wrapper_get_camera_feed_id(wasgo_id));
}
CameraServer::FeedImage CameraTexture::get_which_feed(){
	return CameraServer::FeedImage::from_wasgo_id(_wasgo_CameraTexture_wrapper_get_which_feed(wasgo_id));
}
void CameraTexture::set_camera_active(bool p_active){
	_wasgo_CameraTexture_wrapper_set_camera_active(wasgo_id, active);
}
void CameraTexture::set_camera_feed_id(int p_feed_id){
	_wasgo_CameraTexture_wrapper_set_camera_feed_id(wasgo_id, feed_id);
}
void CameraTexture::set_which_feed(CameraServer::FeedImage p_which_feed){
	_wasgo_CameraTexture_wrapper_set_which_feed(wasgo_id, ((Variant) which_feed).get_wasgo_id());
}

CameraTexture::CameraTexture(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CameraTexture::~CameraTexture(){
}