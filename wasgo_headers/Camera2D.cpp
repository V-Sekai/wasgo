/* THIS FILE IS GENERATED */
#include "Camera2D.h"
void Camera2D::clear_current(){
	_wasgo_Camera2D_wrapper_clear_current(wasgo_id);
}
Camera2D::AnchorMode Camera2D::get_anchor_mode(){
	return Camera2D::AnchorMode::from_wasgo_id(_wasgo_Camera2D_wrapper_get_anchor_mode(wasgo_id));
}
Vector2 Camera2D::get_offset(){
	return Vector2::from_wasgo_id(_wasgo_Camera2D_wrapper_get_offset(wasgo_id));
}
bool Camera2D::is_rotating(){
	return (bool) _wasgo_Camera2D_wrapper_is_rotating(wasgo_id));
}
void Camera2D::make_current(){
	_wasgo_Camera2D_wrapper_make_current(wasgo_id);
}
void Camera2D::set_anchor_mode(Camera2D::AnchorMode p_anchor_mode){
	_wasgo_Camera2D_wrapper_set_anchor_mode(wasgo_id, ((Variant) anchor_mode).get_wasgo_id());
}
void Camera2D::set_offset(Vector2 p_offset){
	_wasgo_Camera2D_wrapper_set_offset(wasgo_id, ((Variant) offset).get_wasgo_id());
}
void Camera2D::set_rotating(bool p_rotating){
	_wasgo_Camera2D_wrapper_set_rotating(wasgo_id, rotating);
}

Camera2D::Camera2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Camera2D::~Camera2D(){
}