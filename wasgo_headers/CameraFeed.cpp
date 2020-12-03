/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CameraFeed.h"
int CameraFeed::get_id(){
	return (int) _wasgo_CameraFeed_wrapper_get_id(wasgo_id);
}
String CameraFeed::get_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_CameraFeed_wrapper_get_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
CameraFeed::FeedPosition CameraFeed::get_position(){
	return CameraFeed::FeedPosition(_wasgo_CameraFeed_wrapper_get_position(wasgo_id));
}
Transform2D CameraFeed::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CameraFeed_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
bool CameraFeed::is_active(){
	return (bool) _wasgo_CameraFeed_wrapper_is_active(wasgo_id);
}
void CameraFeed::set_active(bool p_active){
	_wasgo_CameraFeed_wrapper_set_active(wasgo_id, p_active);
}
void CameraFeed::set_transform(Transform2D p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_CameraFeed_wrapper_set_transform(wasgo_id, wasgo_buffer_transform, wasgo_size_transform);
}

CameraFeed::CameraFeed(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
CameraFeed::CameraFeed(){
    wasgo_id = _wasgo_CameraFeed_constructor();
}
CameraFeed::~CameraFeed(){
    _wasgo_CameraFeed_destructor(wasgo_id);
}