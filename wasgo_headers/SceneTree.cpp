/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SceneTree.h"
Variant SceneTree::call_group(String p_group, String p_method){

    Variant wasgo_var_group = p_group;
    uint8_t wasgo_buffer_group[256];
    int wasgo_size_group = 256;
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    

    Variant wasgo_var_method = p_method;
    uint8_t wasgo_buffer_method[256];
    int wasgo_size_method = 256;
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_SceneTree_wrapper_call_group(wasgo_id, wasgo_buffer_group, wasgo_size_group, wasgo_buffer_method, wasgo_size_method));
}
Variant SceneTree::call_group_flags(int p_flags, String p_group, String p_method){

    Variant wasgo_var_group = p_group;
    uint8_t wasgo_buffer_group[256];
    int wasgo_size_group = 256;
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    

    Variant wasgo_var_method = p_method;
    uint8_t wasgo_buffer_method[256];
    int wasgo_size_method = 256;
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_SceneTree_wrapper_call_group_flags(wasgo_id, p_flags, wasgo_buffer_group, wasgo_size_group, wasgo_buffer_method, wasgo_size_method));
}
Error SceneTree::change_scene(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_SceneTree_wrapper_change_scene(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error SceneTree::change_scene_to(PackedScene p_packed_scene){
	return Error(_wasgo_SceneTree_wrapper_change_scene_to(wasgo_id, p_packed_scene._get_wasgo_id()));
}
SceneTreeTimer SceneTree::create_timer(float p_time_sec, bool p_pause_mode_process = (bool) true){
	return SceneTreeTimer(_wasgo_SceneTree_wrapper_create_timer(wasgo_id, p_time_sec, p_pause_mode_process));
}
Node SceneTree::get_current_scene(){
	return Node(_wasgo_SceneTree_wrapper_get_current_scene(wasgo_id));
}
Node SceneTree::get_edited_scene_root(){
	return Node(_wasgo_SceneTree_wrapper_get_edited_scene_root(wasgo_id));
}
int SceneTree::get_frame(){
	return (int) _wasgo_SceneTree_wrapper_get_frame(wasgo_id);
}
MultiplayerAPI SceneTree::get_multiplayer(){
	return MultiplayerAPI(_wasgo_SceneTree_wrapper_get_multiplayer(wasgo_id));
}
PoolIntArray SceneTree::get_network_connected_peers(){
	return PoolIntArray(_wasgo_SceneTree_wrapper_get_network_connected_peers(wasgo_id));
}
NetworkedMultiplayerPeer SceneTree::get_network_peer(){
	return NetworkedMultiplayerPeer(_wasgo_SceneTree_wrapper_get_network_peer(wasgo_id));
}
int SceneTree::get_network_unique_id(){
	return (int) _wasgo_SceneTree_wrapper_get_network_unique_id(wasgo_id);
}
int SceneTree::get_node_count(){
	return (int) _wasgo_SceneTree_wrapper_get_node_count(wasgo_id);
}
Array SceneTree::get_nodes_in_group(String p_group){

    Variant wasgo_var_group = p_group;
    uint8_t wasgo_buffer_group[256];
    int wasgo_size_group = 256;
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    
	return Array(_wasgo_SceneTree_wrapper_get_nodes_in_group(wasgo_id, wasgo_buffer_group, wasgo_size_group));
}
Viewport SceneTree::get_root(){
	return Viewport(_wasgo_SceneTree_wrapper_get_root(wasgo_id));
}
int SceneTree::get_rpc_sender_id(){
	return (int) _wasgo_SceneTree_wrapper_get_rpc_sender_id(wasgo_id);
}
bool SceneTree::has_group(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_SceneTree_wrapper_has_group(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool SceneTree::has_network_peer(){
	return (bool) _wasgo_SceneTree_wrapper_has_network_peer(wasgo_id);
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
bool SceneTree::is_multiplayer_poll_enabled(){
	return (bool) _wasgo_SceneTree_wrapper_is_multiplayer_poll_enabled(wasgo_id);
}
bool SceneTree::is_network_server(){
	return (bool) _wasgo_SceneTree_wrapper_is_network_server(wasgo_id);
}
bool SceneTree::is_paused(){
	return (bool) _wasgo_SceneTree_wrapper_is_paused(wasgo_id);
}
bool SceneTree::is_refusing_new_network_connections(){
	return (bool) _wasgo_SceneTree_wrapper_is_refusing_new_network_connections(wasgo_id);
}
bool SceneTree::is_using_font_oversampling(){
	return (bool) _wasgo_SceneTree_wrapper_is_using_font_oversampling(wasgo_id);
}
void SceneTree::notify_group(String p_group, int p_notification){

    Variant wasgo_var_group = p_group;
    uint8_t wasgo_buffer_group[256];
    int wasgo_size_group = 256;
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    
	_wasgo_SceneTree_wrapper_notify_group(wasgo_id, wasgo_buffer_group, wasgo_size_group, p_notification);
}
void SceneTree::notify_group_flags(int p_call_flags, String p_group, int p_notification){

    Variant wasgo_var_group = p_group;
    uint8_t wasgo_buffer_group[256];
    int wasgo_size_group = 256;
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    
	_wasgo_SceneTree_wrapper_notify_group_flags(wasgo_id, p_call_flags, wasgo_buffer_group, wasgo_size_group, p_notification);
}
void SceneTree::queue_delete(Object p_obj){
	_wasgo_SceneTree_wrapper_queue_delete(wasgo_id, p_obj._get_wasgo_id());
}
void SceneTree::quit(int p_exit_code = (int) -1){
	_wasgo_SceneTree_wrapper_quit(wasgo_id, p_exit_code);
}
Error SceneTree::reload_current_scene(){
	return Error(_wasgo_SceneTree_wrapper_reload_current_scene(wasgo_id));
}
void SceneTree::set_auto_accept_quit(bool p_enabled){
	_wasgo_SceneTree_wrapper_set_auto_accept_quit(wasgo_id, p_enabled);
}
void SceneTree::set_current_scene(Node p_child_node){
	_wasgo_SceneTree_wrapper_set_current_scene(wasgo_id, p_child_node._get_wasgo_id());
}
void SceneTree::set_debug_collisions_hint(bool p_enable){
	_wasgo_SceneTree_wrapper_set_debug_collisions_hint(wasgo_id, p_enable);
}
void SceneTree::set_debug_navigation_hint(bool p_enable){
	_wasgo_SceneTree_wrapper_set_debug_navigation_hint(wasgo_id, p_enable);
}
void SceneTree::set_edited_scene_root(Node p_scene){
	_wasgo_SceneTree_wrapper_set_edited_scene_root(wasgo_id, p_scene._get_wasgo_id());
}
void SceneTree::set_group(String p_group, String p_property, Variant p_value){

    Variant wasgo_var_group = p_group;
    uint8_t wasgo_buffer_group[256];
    int wasgo_size_group = 256;
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    

    Variant wasgo_var_property = p_property;
    uint8_t wasgo_buffer_property[256];
    int wasgo_size_property = 256;
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_SceneTree_wrapper_set_group(wasgo_id, wasgo_buffer_group, wasgo_size_group, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void SceneTree::set_group_flags(int p_call_flags, String p_group, String p_property, Variant p_value){

    Variant wasgo_var_group = p_group;
    uint8_t wasgo_buffer_group[256];
    int wasgo_size_group = 256;
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    

    Variant wasgo_var_property = p_property;
    uint8_t wasgo_buffer_property[256];
    int wasgo_size_property = 256;
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_SceneTree_wrapper_set_group_flags(wasgo_id, p_call_flags, wasgo_buffer_group, wasgo_size_group, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void SceneTree::set_input_as_handled(){
	_wasgo_SceneTree_wrapper_set_input_as_handled(wasgo_id);
}
void SceneTree::set_multiplayer(MultiplayerAPI p_multiplayer){
	_wasgo_SceneTree_wrapper_set_multiplayer(wasgo_id, p_multiplayer._get_wasgo_id());
}
void SceneTree::set_multiplayer_poll_enabled(bool p_enabled){
	_wasgo_SceneTree_wrapper_set_multiplayer_poll_enabled(wasgo_id, p_enabled);
}
void SceneTree::set_network_peer(NetworkedMultiplayerPeer p_peer){
	_wasgo_SceneTree_wrapper_set_network_peer(wasgo_id, p_peer._get_wasgo_id());
}
void SceneTree::set_pause(bool p_enable){
	_wasgo_SceneTree_wrapper_set_pause(wasgo_id, p_enable);
}
void SceneTree::set_quit_on_go_back(bool p_enabled){
	_wasgo_SceneTree_wrapper_set_quit_on_go_back(wasgo_id, p_enabled);
}
void SceneTree::set_refuse_new_network_connections(bool p_refuse){
	_wasgo_SceneTree_wrapper_set_refuse_new_network_connections(wasgo_id, p_refuse);
}
void SceneTree::set_screen_stretch(SceneTree::StretchMode p_mode, SceneTree::StretchAspect p_aspect, Vector2 p_minsize, float p_shrink = (float) 1){

    Variant wasgo_var_minsize = p_minsize;
    uint8_t wasgo_buffer_minsize[12];
    int wasgo_size_minsize = 12;
    encode_variant(wasgo_var_minsize, wasgo_buffer_minsize, wasgo_size_minsize);
    
	_wasgo_SceneTree_wrapper_set_screen_stretch(wasgo_id, p_mode._get_wasgo_id(), p_aspect._get_wasgo_id(), wasgo_buffer_minsize, wasgo_size_minsize, p_shrink);
}
void SceneTree::set_use_font_oversampling(bool p_enable){
	_wasgo_SceneTree_wrapper_set_use_font_oversampling(wasgo_id, p_enable);
}

SceneTree::SceneTree(WasGoId p_wasgo_id) : MainLoop(p_wasgo_id){
}
SceneTree::SceneTree(){
    wasgo_id = _wasgo_SceneTree_constructor();
}
SceneTree::~SceneTree(){
    _wasgo_SceneTree_destructor(wasgo_id);
}