/* THIS FILE IS GENERATED */
#include "Spatial.h"
void Spatial::force_update_transform(){
	_wasgo_Spatial_wrapper_force_update_transform(wasgo_id);
}
Transform Spatial::get_global_transform(){
	return Transform::from_wasgo_id(_wasgo_Spatial_wrapper_get_global_transform(wasgo_id));
}
Spatial Spatial::get_parent_spatial(){
	return Spatial::from_wasgo_id(_wasgo_Spatial_wrapper_get_parent_spatial(wasgo_id));
}
Vector3 Spatial::get_rotation(){
	return Vector3::from_wasgo_id(_wasgo_Spatial_wrapper_get_rotation(wasgo_id));
}
Vector3 Spatial::get_rotation_degrees(){
	return Vector3::from_wasgo_id(_wasgo_Spatial_wrapper_get_rotation_degrees(wasgo_id));
}
Vector3 Spatial::get_scale(){
	return Vector3::from_wasgo_id(_wasgo_Spatial_wrapper_get_scale(wasgo_id));
}
Transform Spatial::get_transform(){
	return Transform::from_wasgo_id(_wasgo_Spatial_wrapper_get_transform(wasgo_id));
}
Vector3 Spatial::get_translation(){
	return Vector3::from_wasgo_id(_wasgo_Spatial_wrapper_get_translation(wasgo_id));
}
World Spatial::get_world(){
	return World::from_wasgo_id(_wasgo_Spatial_wrapper_get_world(wasgo_id));
}
bool Spatial::is_scale_disabled(){
	return (bool) _wasgo_Spatial_wrapper_is_scale_disabled(wasgo_id));
}
bool Spatial::is_set_as_toplevel(){
	return (bool) _wasgo_Spatial_wrapper_is_set_as_toplevel(wasgo_id));
}
void Spatial::set_as_toplevel(bool p_enable){
	_wasgo_Spatial_wrapper_set_as_toplevel(wasgo_id, enable);
}
void Spatial::set_disable_scale(bool p_disable){
	_wasgo_Spatial_wrapper_set_disable_scale(wasgo_id, disable);
}
void Spatial::set_global_transform(Transform p_global){
	_wasgo_Spatial_wrapper_set_global_transform(wasgo_id, ((Variant) global).get_wasgo_id());
}
void Spatial::set_ignore_transform_notification(bool p_enabled){
	_wasgo_Spatial_wrapper_set_ignore_transform_notification(wasgo_id, enabled);
}
void Spatial::set_rotation(Vector3 p_euler){
	_wasgo_Spatial_wrapper_set_rotation(wasgo_id, ((Variant) euler).get_wasgo_id());
}
void Spatial::set_rotation_degrees(Vector3 p_euler_degrees){
	_wasgo_Spatial_wrapper_set_rotation_degrees(wasgo_id, ((Variant) euler_degrees).get_wasgo_id());
}
void Spatial::set_scale(Vector3 p_scale){
	_wasgo_Spatial_wrapper_set_scale(wasgo_id, ((Variant) scale).get_wasgo_id());
}
void Spatial::set_transform(Transform p_local){
	_wasgo_Spatial_wrapper_set_transform(wasgo_id, ((Variant) local).get_wasgo_id());
}
void Spatial::set_translation(Vector3 p_translation){
	_wasgo_Spatial_wrapper_set_translation(wasgo_id, ((Variant) translation).get_wasgo_id());
}

Spatial::Spatial(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Spatial::~Spatial(){
}