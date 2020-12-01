/* THIS FILE IS GENERATED */
#include "Camera.h"
void Camera::clear_current(bool p_enable_next = (bool) true){
	_wasgo_Camera_wrapper_clear_current(wasgo_id, p_enable_next);
}
RID Camera::get_camera_rid(){
	return RID::from_wasgo_id(_wasgo_Camera_wrapper_get_camera_rid(wasgo_id));
}
Transform Camera::get_camera_transform(){
	return Transform::from_wasgo_id(_wasgo_Camera_wrapper_get_camera_transform(wasgo_id));
}
int Camera::get_cull_mask(){
	return (int) _wasgo_Camera_wrapper_get_cull_mask(wasgo_id);
}
bool Camera::get_cull_mask_bit(int p_layer){
	return (bool) _wasgo_Camera_wrapper_get_cull_mask_bit(wasgo_id, p_layer);
}
Camera::DopplerTracking Camera::get_doppler_tracking(){
	return Camera::DopplerTracking::from_wasgo_id(_wasgo_Camera_wrapper_get_doppler_tracking(wasgo_id));
}
Environment Camera::get_environment(){
	return Environment::from_wasgo_id(_wasgo_Camera_wrapper_get_environment(wasgo_id));
}
float Camera::get_fov(){
	return (float) _wasgo_Camera_wrapper_get_fov(wasgo_id);
}
Array Camera::get_frustum(){
	return Array::from_wasgo_id(_wasgo_Camera_wrapper_get_frustum(wasgo_id));
}
Vector2 Camera::get_frustum_offset(){
	return Vector2::from_wasgo_id(_wasgo_Camera_wrapper_get_frustum_offset(wasgo_id));
}
float Camera::get_h_offset(){
	return (float) _wasgo_Camera_wrapper_get_h_offset(wasgo_id);
}
Camera::KeepAspect Camera::get_keep_aspect_mode(){
	return Camera::KeepAspect::from_wasgo_id(_wasgo_Camera_wrapper_get_keep_aspect_mode(wasgo_id));
}
Camera::Projection Camera::get_projection(){
	return Camera::Projection::from_wasgo_id(_wasgo_Camera_wrapper_get_projection(wasgo_id));
}
float Camera::get_size(){
	return (float) _wasgo_Camera_wrapper_get_size(wasgo_id);
}
float Camera::get_v_offset(){
	return (float) _wasgo_Camera_wrapper_get_v_offset(wasgo_id);
}
float Camera::get_zfar(){
	return (float) _wasgo_Camera_wrapper_get_zfar(wasgo_id);
}
float Camera::get_znear(){
	return (float) _wasgo_Camera_wrapper_get_znear(wasgo_id);
}
bool Camera::is_current(){
	return (bool) _wasgo_Camera_wrapper_is_current(wasgo_id);
}
bool Camera::is_position_behind(Vector3 p_world_point){
	return (bool) _wasgo_Camera_wrapper_is_position_behind(wasgo_id, ((Variant) p_world_point).get_wasgo_id());
}
void Camera::make_current(){
	_wasgo_Camera_wrapper_make_current(wasgo_id);
}
Vector3 Camera::project_local_ray_normal(Vector2 p_screen_point){
	return Vector3::from_wasgo_id(_wasgo_Camera_wrapper_project_local_ray_normal(wasgo_id, ((Variant) p_screen_point).get_wasgo_id()));
}
Vector3 Camera::project_position(Vector2 p_screen_point, float p_z_depth){
	return Vector3::from_wasgo_id(_wasgo_Camera_wrapper_project_position(wasgo_id, ((Variant) p_screen_point).get_wasgo_id(), p_z_depth));
}
Vector3 Camera::project_ray_normal(Vector2 p_screen_point){
	return Vector3::from_wasgo_id(_wasgo_Camera_wrapper_project_ray_normal(wasgo_id, ((Variant) p_screen_point).get_wasgo_id()));
}
Vector3 Camera::project_ray_origin(Vector2 p_screen_point){
	return Vector3::from_wasgo_id(_wasgo_Camera_wrapper_project_ray_origin(wasgo_id, ((Variant) p_screen_point).get_wasgo_id()));
}
void Camera::set_cull_mask(int p_mask){
	_wasgo_Camera_wrapper_set_cull_mask(wasgo_id, p_mask);
}
void Camera::set_cull_mask_bit(int p_layer, bool p_enable){
	_wasgo_Camera_wrapper_set_cull_mask_bit(wasgo_id, p_layer, p_enable);
}
void Camera::set_current(bool p_arg0){
	_wasgo_Camera_wrapper_set_current(wasgo_id, p_arg0);
}
void Camera::set_doppler_tracking(Camera::DopplerTracking p_mode){
	_wasgo_Camera_wrapper_set_doppler_tracking(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void Camera::set_environment(Environment p_env){
	_wasgo_Camera_wrapper_set_environment(wasgo_id, ((Variant) p_env).get_wasgo_id());
}
void Camera::set_fov(float p_arg0){
	_wasgo_Camera_wrapper_set_fov(wasgo_id, p_arg0);
}
void Camera::set_frustum(float p_size, Vector2 p_offset, float p_z_near, float p_z_far){
	_wasgo_Camera_wrapper_set_frustum(wasgo_id, p_size, ((Variant) p_offset).get_wasgo_id(), p_z_near, p_z_far);
}
void Camera::set_frustum_offset(Vector2 p_arg0){
	_wasgo_Camera_wrapper_set_frustum_offset(wasgo_id, ((Variant) p_arg0).get_wasgo_id());
}
void Camera::set_h_offset(float p_ofs){
	_wasgo_Camera_wrapper_set_h_offset(wasgo_id, p_ofs);
}
void Camera::set_keep_aspect_mode(Camera::KeepAspect p_mode){
	_wasgo_Camera_wrapper_set_keep_aspect_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void Camera::set_orthogonal(float p_size, float p_z_near, float p_z_far){
	_wasgo_Camera_wrapper_set_orthogonal(wasgo_id, p_size, p_z_near, p_z_far);
}
void Camera::set_perspective(float p_fov, float p_z_near, float p_z_far){
	_wasgo_Camera_wrapper_set_perspective(wasgo_id, p_fov, p_z_near, p_z_far);
}
void Camera::set_projection(Camera::Projection p_arg0){
	_wasgo_Camera_wrapper_set_projection(wasgo_id, ((Variant) p_arg0).get_wasgo_id());
}
void Camera::set_size(float p_arg0){
	_wasgo_Camera_wrapper_set_size(wasgo_id, p_arg0);
}
void Camera::set_v_offset(float p_ofs){
	_wasgo_Camera_wrapper_set_v_offset(wasgo_id, p_ofs);
}
void Camera::set_zfar(float p_arg0){
	_wasgo_Camera_wrapper_set_zfar(wasgo_id, p_arg0);
}
void Camera::set_znear(float p_arg0){
	_wasgo_Camera_wrapper_set_znear(wasgo_id, p_arg0);
}
Vector2 Camera::unproject_position(Vector3 p_world_point){
	return Vector2::from_wasgo_id(_wasgo_Camera_wrapper_unproject_position(wasgo_id, ((Variant) p_world_point).get_wasgo_id()));
}