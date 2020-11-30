/* THIS FILE IS GENERATED */
#include "RemoteTransform.h"
void RemoteTransform::force_update_cache(){
	_wasgo_RemoteTransform_wrapper_force_update_cache(wasgo_id);
}
NodePath RemoteTransform::get_remote_node(){
	return NodePath::from_wasgo_id(_wasgo_RemoteTransform_wrapper_get_remote_node(wasgo_id));
}
bool RemoteTransform::get_update_position(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_update_position(wasgo_id));
}
bool RemoteTransform::get_update_rotation(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_update_rotation(wasgo_id));
}
bool RemoteTransform::get_update_scale(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_update_scale(wasgo_id));
}
bool RemoteTransform::get_use_global_coordinates(){
	return (bool) _wasgo_RemoteTransform_wrapper_get_use_global_coordinates(wasgo_id));
}
void RemoteTransform::set_remote_node(NodePath p_path){
	_wasgo_RemoteTransform_wrapper_set_remote_node(wasgo_id, ((Variant) path).get_wasgo_id());
}
void RemoteTransform::set_update_position(bool p_update_remote_position){
	_wasgo_RemoteTransform_wrapper_set_update_position(wasgo_id, update_remote_position);
}
void RemoteTransform::set_update_rotation(bool p_update_remote_rotation){
	_wasgo_RemoteTransform_wrapper_set_update_rotation(wasgo_id, update_remote_rotation);
}
void RemoteTransform::set_update_scale(bool p_update_remote_scale){
	_wasgo_RemoteTransform_wrapper_set_update_scale(wasgo_id, update_remote_scale);
}
void RemoteTransform::set_use_global_coordinates(bool p_use_global_coordinates){
	_wasgo_RemoteTransform_wrapper_set_use_global_coordinates(wasgo_id, use_global_coordinates);
}

RemoteTransform::RemoteTransform(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
RemoteTransform::~RemoteTransform(){
}