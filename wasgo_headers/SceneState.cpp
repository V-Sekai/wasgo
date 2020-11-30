/* THIS FILE IS GENERATED */
#include "SceneState.h"
Array SceneState::get_connection_binds(int p_idx){
	return Array::from_wasgo_id(_wasgo_SceneState_wrapper_get_connection_binds(wasgo_id, idx));
}
int SceneState::get_connection_count(){
	return (int) _wasgo_SceneState_wrapper_get_connection_count(wasgo_id));
}
int SceneState::get_connection_flags(int p_idx){
	return (int) _wasgo_SceneState_wrapper_get_connection_flags(wasgo_id, idx));
}
String SceneState::get_connection_method(int p_idx){
	return String::from_wasgo_id(_wasgo_SceneState_wrapper_get_connection_method(wasgo_id, idx));
}
String SceneState::get_connection_signal(int p_idx){
	return String::from_wasgo_id(_wasgo_SceneState_wrapper_get_connection_signal(wasgo_id, idx));
}
NodePath SceneState::get_connection_source(int p_idx){
	return NodePath::from_wasgo_id(_wasgo_SceneState_wrapper_get_connection_source(wasgo_id, idx));
}
NodePath SceneState::get_connection_target(int p_idx){
	return NodePath::from_wasgo_id(_wasgo_SceneState_wrapper_get_connection_target(wasgo_id, idx));
}
int SceneState::get_node_count(){
	return (int) _wasgo_SceneState_wrapper_get_node_count(wasgo_id));
}
PoolStringArray SceneState::get_node_groups(int p_idx){
	return PoolStringArray::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_groups(wasgo_id, idx));
}
int SceneState::get_node_index(int p_idx){
	return (int) _wasgo_SceneState_wrapper_get_node_index(wasgo_id, idx));
}
PackedScene SceneState::get_node_instance(int p_idx){
	return PackedScene::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_instance(wasgo_id, idx));
}
String SceneState::get_node_instance_placeholder(int p_idx){
	return String::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_instance_placeholder(wasgo_id, idx));
}
String SceneState::get_node_name(int p_idx){
	return String::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_name(wasgo_id, idx));
}
NodePath SceneState::get_node_owner_path(int p_idx){
	return NodePath::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_owner_path(wasgo_id, idx));
}
NodePath SceneState::get_node_path(int p_idx, bool p_for_parent = (bool) False){
	return NodePath::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_path(wasgo_id, idx, for_parent));
}
int SceneState::get_node_property_count(int p_idx){
	return (int) _wasgo_SceneState_wrapper_get_node_property_count(wasgo_id, idx));
}
String SceneState::get_node_property_name(int p_idx, int p_prop_idx){
	return String::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_property_name(wasgo_id, idx, prop_idx));
}
Variant SceneState::get_node_property_value(int p_idx, int p_prop_idx){
	return Variant::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_property_value(wasgo_id, idx, prop_idx));
}
String SceneState::get_node_type(int p_idx){
	return String::from_wasgo_id(_wasgo_SceneState_wrapper_get_node_type(wasgo_id, idx));
}
bool SceneState::is_node_instance_placeholder(int p_idx){
	return (bool) _wasgo_SceneState_wrapper_is_node_instance_placeholder(wasgo_id, idx));
}