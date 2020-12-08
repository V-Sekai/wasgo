/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Node.h"
void Node::add_child(Node p_node, bool p_legible_unique_name){
	_wasgo_Node_wrapper_add_child(wasgo_id, p_node._get_wasgo_id(), p_legible_unique_name);
}
void Node::add_child_below_node(Node p_node, Node p_child_node, bool p_legible_unique_name){
	_wasgo_Node_wrapper_add_child_below_node(wasgo_id, p_node._get_wasgo_id(), p_child_node._get_wasgo_id(), p_legible_unique_name);
}
void Node::add_to_group(String p_group, bool p_persistent){

    Variant wasgo_var_group = p_group;
    int wasgo_size_group = String(p_group).size();
    uint8_t wasgo_buffer_group[wasgo_size_group];
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    
	_wasgo_Node_wrapper_add_to_group(wasgo_id, wasgo_buffer_group, wasgo_size_group, p_persistent);
}
bool Node::can_process(){
	return (bool) _wasgo_Node_wrapper_can_process(wasgo_id);
}
Node Node::duplicate(int p_flags){
	return Node(_wasgo_Node_wrapper_duplicate(wasgo_id, p_flags));
}
Node Node::find_node(String p_mask, bool p_recursive, bool p_owned){

    Variant wasgo_var_mask = p_mask;
    int wasgo_size_mask = String(p_mask).size();
    uint8_t wasgo_buffer_mask[wasgo_size_mask];
    encode_variant(wasgo_var_mask, wasgo_buffer_mask, wasgo_size_mask);
    
	return Node(_wasgo_Node_wrapper_find_node(wasgo_id, wasgo_buffer_mask, wasgo_size_mask, p_recursive, p_owned));
}
Node Node::find_parent(String p_mask){

    Variant wasgo_var_mask = p_mask;
    int wasgo_size_mask = String(p_mask).size();
    uint8_t wasgo_buffer_mask[wasgo_size_mask];
    encode_variant(wasgo_var_mask, wasgo_buffer_mask, wasgo_size_mask);
    
	return Node(_wasgo_Node_wrapper_find_parent(wasgo_id, wasgo_buffer_mask, wasgo_size_mask));
}
Node Node::get_child(int p_idx){
	return Node(_wasgo_Node_wrapper_get_child(wasgo_id, p_idx));
}
int Node::get_child_count(){
	return (int) _wasgo_Node_wrapper_get_child_count(wasgo_id);
}
Array Node::get_children(){
	return Array(_wasgo_Node_wrapper_get_children(wasgo_id));
}
MultiplayerAPI Node::get_custom_multiplayer(){
	return MultiplayerAPI(_wasgo_Node_wrapper_get_custom_multiplayer(wasgo_id));
}
String Node::get_filename(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Node_wrapper_get_filename(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Array Node::get_groups(){
	return Array(_wasgo_Node_wrapper_get_groups(wasgo_id));
}
int Node::get_index(){
	return (int) _wasgo_Node_wrapper_get_index(wasgo_id);
}
MultiplayerAPI Node::get_multiplayer(){
	return MultiplayerAPI(_wasgo_Node_wrapper_get_multiplayer(wasgo_id));
}
String Node::get_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Node_wrapper_get_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Node::get_network_master(){
	return (int) _wasgo_Node_wrapper_get_network_master(wasgo_id);
}
Node Node::get_node(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Node(_wasgo_Node_wrapper_get_node(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Array Node::get_node_and_resource(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Array(_wasgo_Node_wrapper_get_node_and_resource(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Node Node::get_node_or_null(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Node(_wasgo_Node_wrapper_get_node_or_null(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Node Node::get_owner(){
	return Node(_wasgo_Node_wrapper_get_owner(wasgo_id));
}
Node Node::get_parent(){
	return Node(_wasgo_Node_wrapper_get_parent(wasgo_id));
}
NodePath Node::get_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Node_wrapper_get_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
NodePath Node::get_path_to(Node p_node){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Node_wrapper_get_path_to(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_node._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
Node::PauseMode Node::get_pause_mode(){
	return Node::PauseMode(_wasgo_Node_wrapper_get_pause_mode(wasgo_id));
}
float Node::get_physics_process_delta_time(){
	return (float) _wasgo_Node_wrapper_get_physics_process_delta_time(wasgo_id);
}
int Node::get_position_in_parent(){
	return (int) _wasgo_Node_wrapper_get_position_in_parent(wasgo_id);
}
float Node::get_process_delta_time(){
	return (float) _wasgo_Node_wrapper_get_process_delta_time(wasgo_id);
}
int Node::get_process_priority(){
	return (int) _wasgo_Node_wrapper_get_process_priority(wasgo_id);
}
bool Node::get_scene_instance_load_placeholder(){
	return (bool) _wasgo_Node_wrapper_get_scene_instance_load_placeholder(wasgo_id);
}
SceneTree Node::get_tree(){
	return SceneTree(_wasgo_Node_wrapper_get_tree(wasgo_id));
}
Viewport Node::get_viewport(){
	return Viewport(_wasgo_Node_wrapper_get_viewport(wasgo_id));
}
bool Node::has_node(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (bool) _wasgo_Node_wrapper_has_node(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
bool Node::has_node_and_resource(NodePath p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (bool) _wasgo_Node_wrapper_has_node_and_resource(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
bool Node::is_a_parent_of(Node p_node){
	return (bool) _wasgo_Node_wrapper_is_a_parent_of(wasgo_id, p_node._get_wasgo_id());
}
bool Node::is_displayed_folded(){
	return (bool) _wasgo_Node_wrapper_is_displayed_folded(wasgo_id);
}
bool Node::is_greater_than(Node p_node){
	return (bool) _wasgo_Node_wrapper_is_greater_than(wasgo_id, p_node._get_wasgo_id());
}
bool Node::is_in_group(String p_group){

    Variant wasgo_var_group = p_group;
    int wasgo_size_group = String(p_group).size();
    uint8_t wasgo_buffer_group[wasgo_size_group];
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    
	return (bool) _wasgo_Node_wrapper_is_in_group(wasgo_id, wasgo_buffer_group, wasgo_size_group);
}
bool Node::is_inside_tree(){
	return (bool) _wasgo_Node_wrapper_is_inside_tree(wasgo_id);
}
bool Node::is_network_master(){
	return (bool) _wasgo_Node_wrapper_is_network_master(wasgo_id);
}
bool Node::is_physics_processing(){
	return (bool) _wasgo_Node_wrapper_is_physics_processing(wasgo_id);
}
bool Node::is_physics_processing_internal(){
	return (bool) _wasgo_Node_wrapper_is_physics_processing_internal(wasgo_id);
}
bool Node::is_processing(){
	return (bool) _wasgo_Node_wrapper_is_processing(wasgo_id);
}
bool Node::is_processing_input(){
	return (bool) _wasgo_Node_wrapper_is_processing_input(wasgo_id);
}
bool Node::is_processing_internal(){
	return (bool) _wasgo_Node_wrapper_is_processing_internal(wasgo_id);
}
bool Node::is_processing_unhandled_input(){
	return (bool) _wasgo_Node_wrapper_is_processing_unhandled_input(wasgo_id);
}
bool Node::is_processing_unhandled_key_input(){
	return (bool) _wasgo_Node_wrapper_is_processing_unhandled_key_input(wasgo_id);
}
void Node::move_child(Node p_child_node, int p_to_position){
	_wasgo_Node_wrapper_move_child(wasgo_id, p_child_node._get_wasgo_id(), p_to_position);
}
void Node::print_stray_nodes(){
	_wasgo_Node_wrapper_print_stray_nodes(wasgo_id);
}
void Node::print_tree(){
	_wasgo_Node_wrapper_print_tree(wasgo_id);
}
void Node::print_tree_pretty(){
	_wasgo_Node_wrapper_print_tree_pretty(wasgo_id);
}
void Node::propagate_call(String p_method, Array p_args, bool p_parent_first){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_Node_wrapper_propagate_call(wasgo_id, wasgo_buffer_method, wasgo_size_method, p_args._get_wasgo_id(), p_parent_first);
}
void Node::propagate_notification(int p_what){
	_wasgo_Node_wrapper_propagate_notification(wasgo_id, p_what);
}
void Node::queue_free(){
	_wasgo_Node_wrapper_queue_free(wasgo_id);
}
void Node::raise(){
	_wasgo_Node_wrapper_raise(wasgo_id);
}
void Node::remove_and_skip(){
	_wasgo_Node_wrapper_remove_and_skip(wasgo_id);
}
void Node::remove_child(Node p_node){
	_wasgo_Node_wrapper_remove_child(wasgo_id, p_node._get_wasgo_id());
}
void Node::remove_from_group(String p_group){

    Variant wasgo_var_group = p_group;
    int wasgo_size_group = String(p_group).size();
    uint8_t wasgo_buffer_group[wasgo_size_group];
    encode_variant(wasgo_var_group, wasgo_buffer_group, wasgo_size_group);
    
	_wasgo_Node_wrapper_remove_from_group(wasgo_id, wasgo_buffer_group, wasgo_size_group);
}
void Node::replace_by(Node p_node, bool p_keep_data){
	_wasgo_Node_wrapper_replace_by(wasgo_id, p_node._get_wasgo_id(), p_keep_data);
}
void Node::request_ready(){
	_wasgo_Node_wrapper_request_ready(wasgo_id);
}
Variant Node::rpc(String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_Node_wrapper_rpc(wasgo_id, wasgo_buffer_method, wasgo_size_method));
}
void Node::rpc_config(String p_method, MultiplayerAPI::RPCMode p_mode){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_Node_wrapper_rpc_config(wasgo_id, wasgo_buffer_method, wasgo_size_method, p_mode._get_wasgo_id());
}
Variant Node::rpc_id(int p_peer_id, String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_Node_wrapper_rpc_id(wasgo_id, p_peer_id, wasgo_buffer_method, wasgo_size_method));
}
Variant Node::rpc_unreliable(String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_Node_wrapper_rpc_unreliable(wasgo_id, wasgo_buffer_method, wasgo_size_method));
}
Variant Node::rpc_unreliable_id(int p_peer_id, String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_Node_wrapper_rpc_unreliable_id(wasgo_id, p_peer_id, wasgo_buffer_method, wasgo_size_method));
}
void Node::rset(String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Node_wrapper_rset(wasgo_id, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void Node::rset_config(String p_property, MultiplayerAPI::RPCMode p_mode){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Node_wrapper_rset_config(wasgo_id, wasgo_buffer_property, wasgo_size_property, p_mode._get_wasgo_id());
}
void Node::rset_id(int p_peer_id, String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Node_wrapper_rset_id(wasgo_id, p_peer_id, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void Node::rset_unreliable(String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Node_wrapper_rset_unreliable(wasgo_id, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void Node::rset_unreliable_id(int p_peer_id, String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Node_wrapper_rset_unreliable_id(wasgo_id, p_peer_id, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void Node::set_custom_multiplayer(MultiplayerAPI p_api){
	_wasgo_Node_wrapper_set_custom_multiplayer(wasgo_id, p_api._get_wasgo_id());
}
void Node::set_display_folded(bool p_fold){
	_wasgo_Node_wrapper_set_display_folded(wasgo_id, p_fold);
}
void Node::set_filename(String p_filename){

    Variant wasgo_var_filename = p_filename;
    int wasgo_size_filename = String(p_filename).size();
    uint8_t wasgo_buffer_filename[wasgo_size_filename];
    encode_variant(wasgo_var_filename, wasgo_buffer_filename, wasgo_size_filename);
    
	_wasgo_Node_wrapper_set_filename(wasgo_id, wasgo_buffer_filename, wasgo_size_filename);
}
void Node::set_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Node_wrapper_set_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Node::set_network_master(int p_id, bool p_recursive){
	_wasgo_Node_wrapper_set_network_master(wasgo_id, p_id, p_recursive);
}
void Node::set_owner(Node p_owner){
	_wasgo_Node_wrapper_set_owner(wasgo_id, p_owner._get_wasgo_id());
}
void Node::set_pause_mode(Node::PauseMode p_mode){
	_wasgo_Node_wrapper_set_pause_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Node::set_physics_process(bool p_enable){
	_wasgo_Node_wrapper_set_physics_process(wasgo_id, p_enable);
}
void Node::set_physics_process_internal(bool p_enable){
	_wasgo_Node_wrapper_set_physics_process_internal(wasgo_id, p_enable);
}
void Node::set_process(bool p_enable){
	_wasgo_Node_wrapper_set_process(wasgo_id, p_enable);
}
void Node::set_process_input(bool p_enable){
	_wasgo_Node_wrapper_set_process_input(wasgo_id, p_enable);
}
void Node::set_process_internal(bool p_enable){
	_wasgo_Node_wrapper_set_process_internal(wasgo_id, p_enable);
}
void Node::set_process_priority(int p_priority){
	_wasgo_Node_wrapper_set_process_priority(wasgo_id, p_priority);
}
void Node::set_process_unhandled_input(bool p_enable){
	_wasgo_Node_wrapper_set_process_unhandled_input(wasgo_id, p_enable);
}
void Node::set_process_unhandled_key_input(bool p_enable){
	_wasgo_Node_wrapper_set_process_unhandled_key_input(wasgo_id, p_enable);
}
void Node::set_scene_instance_load_placeholder(bool p_load_placeholder){
	_wasgo_Node_wrapper_set_scene_instance_load_placeholder(wasgo_id, p_load_placeholder);
}
void Node::update_configuration_warning(){
	_wasgo_Node_wrapper_update_configuration_warning(wasgo_id);
}

Node::Node(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
Node::Node(Object other) : Object(other._get_wasgo_id()){
}
Node::Node():Object(){
}
Node Node::new_instance(){
    return Node(_wasgo_Node_constructor());
}
WasGoID Node::_get_wasgo_id(){
    return wasgo_id;
}
Node::operator bool(){
    return (bool) wasgo_id;
}
