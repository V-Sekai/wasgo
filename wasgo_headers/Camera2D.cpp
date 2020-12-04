/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Camera2D.h"
void Camera2D::align(){
	_wasgo_Camera2D_wrapper_align(wasgo_id);
}
void Camera2D::clear_current(){
	_wasgo_Camera2D_wrapper_clear_current(wasgo_id);
}
void Camera2D::force_update_scroll(){
	_wasgo_Camera2D_wrapper_force_update_scroll(wasgo_id);
}
Camera2D::AnchorMode Camera2D::get_anchor_mode(){
	return Camera2D::AnchorMode(_wasgo_Camera2D_wrapper_get_anchor_mode(wasgo_id));
}
Vector2 Camera2D::get_camera_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Camera2D_wrapper_get_camera_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Camera2D::get_camera_screen_center(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Camera2D_wrapper_get_camera_screen_center(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Node Camera2D::get_custom_viewport(){
	return Node(_wasgo_Camera2D_wrapper_get_custom_viewport(wasgo_id));
}
float Camera2D::get_drag_margin(Margin p_margin){
	return (float) _wasgo_Camera2D_wrapper_get_drag_margin(wasgo_id, p_margin._get_wasgo_id());
}
float Camera2D::get_follow_smoothing(){
	return (float) _wasgo_Camera2D_wrapper_get_follow_smoothing(wasgo_id);
}
float Camera2D::get_h_offset(){
	return (float) _wasgo_Camera2D_wrapper_get_h_offset(wasgo_id);
}
int Camera2D::get_limit(Margin p_margin){
	return (int) _wasgo_Camera2D_wrapper_get_limit(wasgo_id, p_margin._get_wasgo_id());
}
Vector2 Camera2D::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Camera2D_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Camera2D::Camera2DProcessMode Camera2D::get_process_mode(){
	return Camera2D::Camera2DProcessMode(_wasgo_Camera2D_wrapper_get_process_mode(wasgo_id));
}
float Camera2D::get_v_offset(){
	return (float) _wasgo_Camera2D_wrapper_get_v_offset(wasgo_id);
}
Vector2 Camera2D::get_zoom(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Camera2D_wrapper_get_zoom(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
bool Camera2D::is_current(){
	return (bool) _wasgo_Camera2D_wrapper_is_current(wasgo_id);
}
bool Camera2D::is_follow_smoothing_enabled(){
	return (bool) _wasgo_Camera2D_wrapper_is_follow_smoothing_enabled(wasgo_id);
}
bool Camera2D::is_h_drag_enabled(){
	return (bool) _wasgo_Camera2D_wrapper_is_h_drag_enabled(wasgo_id);
}
bool Camera2D::is_limit_drawing_enabled(){
	return (bool) _wasgo_Camera2D_wrapper_is_limit_drawing_enabled(wasgo_id);
}
bool Camera2D::is_limit_smoothing_enabled(){
	return (bool) _wasgo_Camera2D_wrapper_is_limit_smoothing_enabled(wasgo_id);
}
bool Camera2D::is_margin_drawing_enabled(){
	return (bool) _wasgo_Camera2D_wrapper_is_margin_drawing_enabled(wasgo_id);
}
bool Camera2D::is_rotating(){
	return (bool) _wasgo_Camera2D_wrapper_is_rotating(wasgo_id);
}
bool Camera2D::is_screen_drawing_enabled(){
	return (bool) _wasgo_Camera2D_wrapper_is_screen_drawing_enabled(wasgo_id);
}
bool Camera2D::is_v_drag_enabled(){
	return (bool) _wasgo_Camera2D_wrapper_is_v_drag_enabled(wasgo_id);
}
void Camera2D::make_current(){
	_wasgo_Camera2D_wrapper_make_current(wasgo_id);
}
void Camera2D::reset_smoothing(){
	_wasgo_Camera2D_wrapper_reset_smoothing(wasgo_id);
}
void Camera2D::set_anchor_mode(Camera2D::AnchorMode p_anchor_mode){
	_wasgo_Camera2D_wrapper_set_anchor_mode(wasgo_id, p_anchor_mode._get_wasgo_id());
}
void Camera2D::set_custom_viewport(Node p_viewport){
	_wasgo_Camera2D_wrapper_set_custom_viewport(wasgo_id, p_viewport._get_wasgo_id());
}
void Camera2D::set_drag_margin(Margin p_margin, float p_drag_margin){
	_wasgo_Camera2D_wrapper_set_drag_margin(wasgo_id, p_margin._get_wasgo_id(), p_drag_margin);
}
void Camera2D::set_enable_follow_smoothing(bool p_follow_smoothing){
	_wasgo_Camera2D_wrapper_set_enable_follow_smoothing(wasgo_id, p_follow_smoothing);
}
void Camera2D::set_follow_smoothing(float p_follow_smoothing){
	_wasgo_Camera2D_wrapper_set_follow_smoothing(wasgo_id, p_follow_smoothing);
}
void Camera2D::set_h_drag_enabled(bool p_enabled){
	_wasgo_Camera2D_wrapper_set_h_drag_enabled(wasgo_id, p_enabled);
}
void Camera2D::set_h_offset(float p_ofs){
	_wasgo_Camera2D_wrapper_set_h_offset(wasgo_id, p_ofs);
}
void Camera2D::set_limit(Margin p_margin, int p_limit){
	_wasgo_Camera2D_wrapper_set_limit(wasgo_id, p_margin._get_wasgo_id(), p_limit);
}
void Camera2D::set_limit_drawing_enabled(bool p_limit_drawing_enabled){
	_wasgo_Camera2D_wrapper_set_limit_drawing_enabled(wasgo_id, p_limit_drawing_enabled);
}
void Camera2D::set_limit_smoothing_enabled(bool p_limit_smoothing_enabled){
	_wasgo_Camera2D_wrapper_set_limit_smoothing_enabled(wasgo_id, p_limit_smoothing_enabled);
}
void Camera2D::set_margin_drawing_enabled(bool p_margin_drawing_enabled){
	_wasgo_Camera2D_wrapper_set_margin_drawing_enabled(wasgo_id, p_margin_drawing_enabled);
}
void Camera2D::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_Camera2D_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void Camera2D::set_process_mode(Camera2D::Camera2DProcessMode p_mode){
	_wasgo_Camera2D_wrapper_set_process_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Camera2D::set_rotating(bool p_rotating){
	_wasgo_Camera2D_wrapper_set_rotating(wasgo_id, p_rotating);
}
void Camera2D::set_screen_drawing_enabled(bool p_screen_drawing_enabled){
	_wasgo_Camera2D_wrapper_set_screen_drawing_enabled(wasgo_id, p_screen_drawing_enabled);
}
void Camera2D::set_v_drag_enabled(bool p_enabled){
	_wasgo_Camera2D_wrapper_set_v_drag_enabled(wasgo_id, p_enabled);
}
void Camera2D::set_v_offset(float p_ofs){
	_wasgo_Camera2D_wrapper_set_v_offset(wasgo_id, p_ofs);
}
void Camera2D::set_zoom(Vector2 p_zoom){

    Variant wasgo_var_zoom = p_zoom;
    uint8_t wasgo_buffer_zoom[12];
    int wasgo_size_zoom = 12;
    encode_variant(wasgo_var_zoom, wasgo_buffer_zoom, wasgo_size_zoom);
    
	_wasgo_Camera2D_wrapper_set_zoom(wasgo_id, wasgo_buffer_zoom, wasgo_size_zoom);
}

Camera2D::Camera2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
Camera2D::Camera2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_Camera2D_constructor();
}
Camera2D::new_instance(){
    return Camera2D(_wasgo_Camera2D_constructor());
}