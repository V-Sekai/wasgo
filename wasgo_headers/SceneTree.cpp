/* THIS FILE IS GENERATED */
#include "SceneTree.h"
Variant SceneTree::call_group(String p_group, String p_method){
	return Variant::from_wasgo_id(_wasgo_SceneTree_wrapper_call_group(wasgo_id, ((Variant) p_group).get_wasgo_id(), ((Variant) p_method).get_wasgo_id()));
}
Variant SceneTree::call_group_flags(int p_flags, String p_group, String p_method){
	return Variant::from_wasgo_id(_wasgo_SceneTree_wrapper_call_group_flags(wasgo_id, p_flags, ((Variant) p_group).get_wasgo_id(), ((Variant) p_method).get_wasgo_id()));
}
Error SceneTree::change_scene(String p_path){
	return Error::from_wasgo_id(_wasgo_SceneTree_wrapper_change_scene(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}
Error SceneTree::change_scene_to(PackedScene p_packed_scene){
	return Error::from_wasgo_id(_wasgo_SceneTree_wrapper_change_scene_to(wasgo_id, ((Variant) p_packed_scene).get_wasgo_id()));
}
SceneTreeTimer SceneTree::create_timer(float p_time_sec, bool p_pause_mode_process = (bool) true){
	return SceneTreeTimer::from_wasgo_id(_wasgo_SceneTree_wrapper_create_timer(wasgo_id, p_time_sec, p_pause_mode_process));
}
Node SceneTree::get_current_scene(){
	return Node::from_wasgo_id(_wasgo_SceneTree_wrapper_get_current_scene(wasgo_id));
}
Node SceneTree::get_edited_scene_root(){
	return Node::from_wasgo_id(_wasgo_SceneTree_wrapper_get_edited_scene_root(wasgo_id));
}
int SceneTree::get_frame(){
	return (int) _wasgo_SceneTree_wrapper_get_frame(wasgo_id);
}
int SceneTree::get_node_count(){
	return (int) _wasgo_SceneTree_wrapper_get_node_count(wasgo_id);
}
Array SceneTree::get_nodes_in_group(String p_group){
	return Array::from_wasgo_id(_wasgo_SceneTree_wrapper_get_nodes_in_group(wasgo_id, ((Variant) p_group).get_wasgo_id()));
}
Viewport SceneTree::get_root(){
	return Viewport::from_wasgo_id(_wasgo_SceneTree_wrapper_get_root(wasgo_id));
}
bool SceneTree::has_group(String p_name){
	return (bool) _wasgo_SceneTree_wrapper_has_group(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
bool SceneTree::is_debugging_collisions_hint(){
	return (bool) _wasgo_SceneTree_wrapper_is_debugging_collisions_hint(wasgo_id);
}
bool SceneTree::is_debugging_navigation_hint(){
	return (bool) _wasgo_SceneTree_wrapper_is_debugging_navigation_hint(wasgo_id);
}
bool SceneTree::is_input_handled(){
	return (bool) _wasgo_SceneTree_wrapper_is_input_handled(wasgo_id);
}
bool SceneTree::is_paused(){
	return (bool) _wasgo_SceneTree_wrapper_is_paused(wasgo_id);
}
void SceneTree::notify_group(String p_group, int p_notification){
	_wasgo_SceneTree_wrapper_notify_group(wasgo_id, ((Variant) p_group).get_wasgo_id(), p_notification);
}
void SceneTree::notify_group_flags(int p_call_flags, String p_group, int p_notification){
	_wasgo_SceneTree_wrapper_notify_group_flags(wasgo_id, p_call_flags, ((Variant) p_group).get_wasgo_id(), p_notification);
}
void SceneTree::queue_delete(Object p_obj){
	_wasgo_SceneTree_wrapper_queue_delete(wasgo_id, ((Variant) p_obj).get_wasgo_id());
}
void SceneTree::quit(int p_exit_code = (int) -1){
	_wasgo_SceneTree_wrapper_quit(wasgo_id, p_exit_code);
}
Error SceneTree::reload_current_scene(){
	return Error::from_wasgo_id(_wasgo_SceneTree_wrapper_reload_current_scene(wasgo_id));
}
void SceneTree::set_auto_accept_quit(bool p_enabled){
	_wasgo_SceneTree_wrapper_set_auto_accept_quit(wasgo_id, p_enabled);
}
void SceneTree::set_current_scene(Node p_child_node){
	_wasgo_SceneTree_wrapper_set_current_scene(wasgo_id, ((Variant) p_child_node).get_wasgo_id());
}
void SceneTree::set_debug_collisions_hint(bool p_enable){
	_wasgo_SceneTree_wrapper_set_debug_collisions_hint(wasgo_id, p_enable);
}
void SceneTree::set_debug_navigation_hint(bool p_enable){
	_wasgo_SceneTree_wrapper_set_debug_navigation_hint(wasgo_id, p_enable);
}
void SceneTree::set_edited_scene_root(Node p_scene){
	_wasgo_SceneTree_wrapper_set_edited_scene_root(wasgo_id, ((Variant) p_scene).get_wasgo_id());
}
void SceneTree::set_group(String p_group, String p_property, Variant p_value){
	_wasgo_SceneTree_wrapper_set_group(wasgo_id, ((Variant) p_group).get_wasgo_id(), ((Variant) p_property).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}
void SceneTree::set_group_flags(int p_call_flags, String p_group, String p_property, Variant p_value){
	_wasgo_SceneTree_wrapper_set_group_flags(wasgo_id, p_call_flags, ((Variant) p_group).get_wasgo_id(), ((Variant) p_property).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}
void SceneTree::set_input_as_handled(){
	_wasgo_SceneTree_wrapper_set_input_as_handled(wasgo_id);
}
void SceneTree::set_pause(bool p_enable){
	_wasgo_SceneTree_wrapper_set_pause(wasgo_id, p_enable);
}
void SceneTree::set_quit_on_go_back(bool p_enabled){
	_wasgo_SceneTree_wrapper_set_quit_on_go_back(wasgo_id, p_enabled);
}
void SceneTree::set_screen_stretch(SceneTree::StretchMode p_mode, SceneTree::StretchAspect p_aspect, Vector2 p_minsize, float p_shrink = (float) 1){
	_wasgo_SceneTree_wrapper_set_screen_stretch(wasgo_id, ((Variant) p_mode).get_wasgo_id(), ((Variant) p_aspect).get_wasgo_id(), ((Variant) p_minsize).get_wasgo_id(), p_shrink);
}