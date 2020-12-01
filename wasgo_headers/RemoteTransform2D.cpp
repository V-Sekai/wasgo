/* THIS FILE IS GENERATED */
#include "RemoteTransform2D.h"
void RemoteTransform2D::force_update_cache(){
	_wasgo_RemoteTransform2D_wrapper_force_update_cache(wasgo_id);
}
NodePath RemoteTransform2D::get_remote_node(){
	return NodePath::from_wasgo_id(_wasgo_RemoteTransform2D_wrapper_get_remote_node(wasgo_id));
}
bool RemoteTransform2D::get_update_position(){
	return (bool) _wasgo_RemoteTransform2D_wrapper_get_update_position(wasgo_id);
}
bool RemoteTransform2D::get_update_rotation(){
	return (bool) _wasgo_RemoteTransform2D_wrapper_get_update_rotation(wasgo_id);
}
bool RemoteTransform2D::get_update_scale(){
	return (bool) _wasgo_RemoteTransform2D_wrapper_get_update_scale(wasgo_id);
}
bool RemoteTransform2D::get_use_global_coordinates(){
	return (bool) _wasgo_RemoteTransform2D_wrapper_get_use_global_coordinates(wasgo_id);
}
void RemoteTransform2D::set_remote_node(NodePath p_path){
	_wasgo_RemoteTransform2D_wrapper_set_remote_node(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
void RemoteTransform2D::set_update_position(bool p_update_remote_position){
	_wasgo_RemoteTransform2D_wrapper_set_update_position(wasgo_id, p_update_remote_position);
}
void RemoteTransform2D::set_update_rotation(bool p_update_remote_rotation){
	_wasgo_RemoteTransform2D_wrapper_set_update_rotation(wasgo_id, p_update_remote_rotation);
}
void RemoteTransform2D::set_update_scale(bool p_update_remote_scale){
	_wasgo_RemoteTransform2D_wrapper_set_update_scale(wasgo_id, p_update_remote_scale);
}
void RemoteTransform2D::set_use_global_coordinates(bool p_use_global_coordinates){
	_wasgo_RemoteTransform2D_wrapper_set_use_global_coordinates(wasgo_id, p_use_global_coordinates);
}