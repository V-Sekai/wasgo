/* THIS FILE IS GENERATED */
#ifndef NODE_H
#define NODE_H

#include "wasgo\wasgoid.h"

// #include "Viewport.h"
// #include "SceneTree.h"
#include "NodePath.h"
#include "Ustring.h"
#include "Variant.h"
#include "Object.h"
// #include "MultiplayerAPI.h"
class Node : public Object{
public:
enum DuplicateFlags{
DUPLICATE_SIGNALS,
DUPLICATE_GROUPS,
DUPLICATE_SCRIPTS,
DUPLICATE_USE_INSTANCING
};
enum PauseMode{
PAUSE_MODE_INHERIT,
PAUSE_MODE_STOP,
PAUSE_MODE_PROCESS
};
void add_child(Node p_node, bool p_legible_unique_name = (bool) false);
void add_child_below_node(Node p_node, Node p_child_node, bool p_legible_unique_name = (bool) false);
void add_to_group(String p_group, bool p_persistent = (bool) false);
bool can_process();
Node duplicate(int p_flags = (int) 15);
Node find_node(String p_mask, bool p_recursive = (bool) true, bool p_owned = (bool) true);
Node find_parent(String p_mask);
Node get_child(int p_idx);
int get_child_count();
// Array get_children();
// MultiplayerAPI get_custom_multiplayer();
String get_filename();
// Array get_groups();
int get_index();
// MultiplayerAPI get_multiplayer();
String get_name();
int get_network_master();
Node get_node(NodePath p_path);
// Array get_node_and_resource(NodePath p_path);
Node get_node_or_null(NodePath p_path);
Node get_owner();
Node get_parent();
NodePath get_path();
NodePath get_path_to(Node p_node);
Node::PauseMode get_pause_mode();
float get_physics_process_delta_time();
int get_position_in_parent();
float get_process_delta_time();
int get_process_priority();
bool get_scene_instance_load_placeholder();
// SceneTree get_tree();
// Viewport get_viewport();
bool has_node(NodePath p_path);
bool has_node_and_resource(NodePath p_path);
bool is_a_parent_of(Node p_node);
bool is_displayed_folded();
bool is_greater_than(Node p_node);
bool is_in_group(String p_group);
bool is_inside_tree();
bool is_network_master();
bool is_physics_processing();
bool is_physics_processing_internal();
bool is_processing();
bool is_processing_input();
bool is_processing_internal();
bool is_processing_unhandled_input();
bool is_processing_unhandled_key_input();
void move_child(Node p_child_node, int p_to_position);
void print_stray_nodes();
void print_tree();
void print_tree_pretty();
// void propagate_call(String p_method, Array p_args = Array(), bool p_parent_first = (bool) false);
void propagate_notification(int p_what);
void queue_free();
void raise();
void remove_and_skip();
void remove_child(Node p_node);
void remove_from_group(String p_group);
void replace_by(Node p_node, bool p_keep_data = (bool) false);
void request_ready();
Variant rpc(String p_method);
// void rpc_config(String p_method, MultiplayerAPI::RPCMode p_mode);
Variant rpc_id(int p_peer_id, String p_method);
Variant rpc_unreliable(String p_method);
Variant rpc_unreliable_id(int p_peer_id, String p_method);
void rset(String p_property, Variant p_value);
// void rset_config(String p_property, MultiplayerAPI::RPCMode p_mode);
void rset_id(int p_peer_id, String p_property, Variant p_value);
void rset_unreliable(String p_property, Variant p_value);
void rset_unreliable_id(int p_peer_id, String p_property, Variant p_value);
// void set_custom_multiplayer(MultiplayerAPI p_api);
void set_display_folded(bool p_fold);
void set_filename(String p_filename);
void set_name(String p_name);
void set_network_master(int p_id, bool p_recursive = (bool) true);
void set_owner(Node p_owner);
void set_pause_mode(Node::PauseMode p_mode);
void set_physics_process(bool p_enable);
void set_physics_process_internal(bool p_enable);
void set_process(bool p_enable);
void set_process_input(bool p_enable);
void set_process_internal(bool p_enable);
void set_process_priority(int p_priority);
void set_process_unhandled_input(bool p_enable);
void set_process_unhandled_key_input(bool p_enable);
void set_scene_instance_load_placeholder(bool p_load_placeholder);
void update_configuration_warning();

protected:
public:
explicit Node(WasGoID p_wasgo_id);
explicit Node(Object other);
Node();
Node new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Node_wrapper_add_child(WasGoID wasgo_id, WasGoID p_node, bool p_legible_unique_name);
void _wasgo_Node_wrapper_add_child_below_node(WasGoID wasgo_id, WasGoID p_node, WasGoID p_child_node, int wasgo_throwaway, bool p_legible_unique_name);
void _wasgo_Node_wrapper_add_to_group(WasGoID wasgo_id, const uint8_t * p_group, int p_group_wasgo_buffer_size, int wasgo_throwaway, bool p_persistent);
int _wasgo_Node_wrapper_can_process(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_duplicate(WasGoID wasgo_id, int p_flags);
WasGoID _wasgo_Node_wrapper_find_node(WasGoID wasgo_id, const uint8_t * p_mask, int p_mask_wasgo_buffer_size, int wasgo_throwaway, bool p_recursive, bool p_owned);
WasGoID _wasgo_Node_wrapper_find_parent(WasGoID wasgo_id, const uint8_t * p_mask, int p_mask_wasgo_buffer_size);
WasGoID _wasgo_Node_wrapper_get_child(WasGoID wasgo_id, int p_idx);
int _wasgo_Node_wrapper_get_child_count(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_get_children(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_get_custom_multiplayer(WasGoID wasgo_id);
void _wasgo_Node_wrapper_get_filename(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Node_wrapper_get_groups(WasGoID wasgo_id);
int _wasgo_Node_wrapper_get_index(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_get_multiplayer(WasGoID wasgo_id);
void _wasgo_Node_wrapper_get_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Node_wrapper_get_network_master(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_get_node(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Node_wrapper_get_node_and_resource(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Node_wrapper_get_node_or_null(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Node_wrapper_get_owner(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_get_parent(WasGoID wasgo_id);
void _wasgo_Node_wrapper_get_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Node_wrapper_get_path_to(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, WasGoID p_node);
WasGoID _wasgo_Node_wrapper_get_pause_mode(WasGoID wasgo_id);
float _wasgo_Node_wrapper_get_physics_process_delta_time(WasGoID wasgo_id);
int _wasgo_Node_wrapper_get_position_in_parent(WasGoID wasgo_id);
float _wasgo_Node_wrapper_get_process_delta_time(WasGoID wasgo_id);
int _wasgo_Node_wrapper_get_process_priority(WasGoID wasgo_id);
int _wasgo_Node_wrapper_get_scene_instance_load_placeholder(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_get_tree(WasGoID wasgo_id);
WasGoID _wasgo_Node_wrapper_get_viewport(WasGoID wasgo_id);
int _wasgo_Node_wrapper_has_node(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
int _wasgo_Node_wrapper_has_node_and_resource(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
int _wasgo_Node_wrapper_is_a_parent_of(WasGoID wasgo_id, WasGoID p_node);
int _wasgo_Node_wrapper_is_displayed_folded(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_greater_than(WasGoID wasgo_id, WasGoID p_node);
int _wasgo_Node_wrapper_is_in_group(WasGoID wasgo_id, const uint8_t * p_group, int p_group_wasgo_buffer_size);
int _wasgo_Node_wrapper_is_inside_tree(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_network_master(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_physics_processing(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_physics_processing_internal(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_processing(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_processing_input(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_processing_internal(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_processing_unhandled_input(WasGoID wasgo_id);
int _wasgo_Node_wrapper_is_processing_unhandled_key_input(WasGoID wasgo_id);
void _wasgo_Node_wrapper_move_child(WasGoID wasgo_id, WasGoID p_child_node, int p_to_position);
void _wasgo_Node_wrapper_print_stray_nodes(WasGoID wasgo_id);
void _wasgo_Node_wrapper_print_tree(WasGoID wasgo_id);
void _wasgo_Node_wrapper_print_tree_pretty(WasGoID wasgo_id);
void _wasgo_Node_wrapper_propagate_call(WasGoID wasgo_id, const uint8_t * p_method, int p_method_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_args, bool p_parent_first);
void _wasgo_Node_wrapper_propagate_notification(WasGoID wasgo_id, int p_what);
void _wasgo_Node_wrapper_queue_free(WasGoID wasgo_id);
void _wasgo_Node_wrapper_raise(WasGoID wasgo_id);
void _wasgo_Node_wrapper_remove_and_skip(WasGoID wasgo_id);
void _wasgo_Node_wrapper_remove_child(WasGoID wasgo_id, WasGoID p_node);
void _wasgo_Node_wrapper_remove_from_group(WasGoID wasgo_id, const uint8_t * p_group, int p_group_wasgo_buffer_size);
void _wasgo_Node_wrapper_replace_by(WasGoID wasgo_id, WasGoID p_node, bool p_keep_data);
void _wasgo_Node_wrapper_request_ready(WasGoID wasgo_id);
void _wasgo_Node_wrapper_rpc(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_Node_wrapper_rpc_config(WasGoID wasgo_id, const uint8_t * p_method, int p_method_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_mode);
void _wasgo_Node_wrapper_rpc_id(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_peer_id, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_Node_wrapper_rpc_unreliable(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_Node_wrapper_rpc_unreliable_id(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_peer_id, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_Node_wrapper_rset(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_Node_wrapper_rset_config(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_mode);
void _wasgo_Node_wrapper_rset_id(WasGoID wasgo_id, int p_peer_id, const uint8_t * p_property, int wasgo_throwaway, int p_property_wasgo_buffer_size, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_Node_wrapper_rset_unreliable(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_Node_wrapper_rset_unreliable_id(WasGoID wasgo_id, int p_peer_id, const uint8_t * p_property, int wasgo_throwaway, int p_property_wasgo_buffer_size, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_Node_wrapper_set_custom_multiplayer(WasGoID wasgo_id, WasGoID p_api);
void _wasgo_Node_wrapper_set_display_folded(WasGoID wasgo_id, bool p_fold);
void _wasgo_Node_wrapper_set_filename(WasGoID wasgo_id, const uint8_t * p_filename, int p_filename_wasgo_buffer_size);
void _wasgo_Node_wrapper_set_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Node_wrapper_set_network_master(WasGoID wasgo_id, int p_id, bool p_recursive);
void _wasgo_Node_wrapper_set_owner(WasGoID wasgo_id, WasGoID p_owner);
void _wasgo_Node_wrapper_set_pause_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Node_wrapper_set_physics_process(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node_wrapper_set_physics_process_internal(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node_wrapper_set_process(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node_wrapper_set_process_input(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node_wrapper_set_process_internal(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node_wrapper_set_process_priority(WasGoID wasgo_id, int p_priority);
void _wasgo_Node_wrapper_set_process_unhandled_input(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node_wrapper_set_process_unhandled_key_input(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node_wrapper_set_scene_instance_load_placeholder(WasGoID wasgo_id, bool p_load_placeholder);
void _wasgo_Node_wrapper_update_configuration_warning(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Node_constructor();
            
}
#endif