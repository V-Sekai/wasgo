/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CameraTexture.h"
bool CameraTexture::get_camera_active(){
	return (bool) _wasgo_CameraTexture_wrapper_get_camera_active(wasgo_id);
}
int CameraTexture::get_camera_feed_id(){
	return (int) _wasgo_CameraTexture_wrapper_get_camera_feed_id(wasgo_id);
}
CameraServer::FeedImage CameraTexture::get_which_feed(){
	return CameraServer::FeedImage(_wasgo_CameraTexture_wrapper_get_which_feed(wasgo_id));
}
void CameraTexture::set_camera_active(bool p_active){
	_wasgo_CameraTexture_wrapper_set_camera_active(wasgo_id, p_active);
}
void CameraTexture::set_camera_feed_id(int p_feed_id){
	_wasgo_CameraTexture_wrapper_set_camera_feed_id(wasgo_id, p_feed_id);
}
void CameraTexture::set_which_feed(CameraServer::FeedImage p_which_feed){
	_wasgo_CameraTexture_wrapper_set_which_feed(wasgo_id, p_which_feed._get_wasgo_id());
}

CameraTexture::CameraTexture(WasGoID p_wasgo_id) : Texture(p_wasgo_id){
}
CameraTexture::CameraTexture(Texture other) : Texture(other._get_wasgo_id()){
    wasgo_id = _wasgo_CameraTexture_constructor();
}
CameraTexture::new_instance(){
    return CameraTexture(_wasgo_CameraTexture_constructor());
}