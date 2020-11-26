/* THIS FILE IS GENERATED */
#ifndef NODE_H
#define NODE_H

#include <stdint.h>

#include "NodePath.h"
#include "InputEventKey.h"
#include "String.h"
#include "SceneTree.h"
#include "InputEvent.h"
#include "Viewport.h"
#include "Object.h"
#include "MultiplayerAPI.h"
#include "Variant.h"
class Node : public Object{
public: Node();
enum PauseMode{
PAUSE_MODE_INHERIT: 0,
PAUSE_MODE_STOP: 1,
};
enum DuplicateFlags{
DUPLICATE_SIGNALS: 1,
DUPLICATE_GROUPS: 2,
DUPLICATE_SCRIPTS: 4,
};
void  _enter_tree();
void  _enter_tree();
void  _exit_tree();
void  _exit_tree();
String  _get_configuration_warning();
String  _get_configuration_warning();
String  _get_editor_description();
String  _get_editor_description();
NodePath  _get_import_path();
NodePath  _get_import_path();
void  _input(InputEvent event);
void  _physics_process(float delta);
void  _process(float delta);
void  _ready();
void  _ready();
void  _set_editor_description(String editor_description);
void  _set_import_path(NodePath import_path);
void  _unhandled_input(InputEvent event);
void  _unhandled_key_input(InputEventKey event);
void  add_child(Node node, bool legible_unique_name = false);
void  add_child_below_node(Node node, Node child_node, bool legible_unique_name = false);
void  add_to_group(String group, bool persistent = false);
bool  can_process();
bool  can_process();
Node  duplicate(int flags = 15);
Node  find_node(String mask, bool recursive = true, bool owned = true);
Node  find_parent(String mask);
Node  get_child(int idx);
int  get_child_count();
int  get_child_count();
Array  get_children();
Array  get_children();
MultiplayerAPI  get_custom_multiplayer();
MultiplayerAPI  get_custom_multiplayer();
String  get_filename();
String  get_filename();
Array  get_groups();
Array  get_groups();
int  get_index();
int  get_index();
MultiplayerAPI  get_multiplayer();
MultiplayerAPI  get_multiplayer();
String  get_name();
String  get_name();
int  get_network_master();
int  get_network_master();
Node  get_node(NodePath path);
Array  get_node_and_resource(NodePath path);
Node  get_node_or_null(NodePath path);
Node  get_owner();
Node  get_owner();
Node  get_parent();
Node  get_parent();
NodePath  get_path();
NodePath  get_path();
NodePath  get_path_to(Node node);
enum.Node::PauseMode  get_pause_mode();
enum.Node::PauseMode  get_pause_mode();
float  get_physics_process_delta_time();
float  get_physics_process_delta_time();
int  get_position_in_parent();
int  get_position_in_parent();
float  get_process_delta_time();
float  get_process_delta_time();
int  get_process_priority();
int  get_process_priority();
bool  get_scene_instance_load_placeholder();
bool  get_scene_instance_load_placeholder();
SceneTree  get_tree();
SceneTree  get_tree();
Viewport  get_viewport();
Viewport  get_viewport();
bool  has_node(NodePath path);
bool  has_node_and_resource(NodePath path);
bool  is_a_parent_of(Node node);
bool  is_displayed_folded();
bool  is_displayed_folded();
bool  is_greater_than(Node node);
bool  is_in_group(String group);
bool  is_inside_tree();
bool  is_inside_tree();
bool  is_network_master();
bool  is_network_master();
bool  is_physics_processing();
bool  is_physics_processing();
bool  is_physics_processing_internal();
bool  is_physics_processing_internal();
bool  is_processing();
bool  is_processing();
bool  is_processing_input();
bool  is_processing_input();
bool  is_processing_internal();
bool  is_processing_internal();
bool  is_processing_unhandled_input();
bool  is_processing_unhandled_input();
bool  is_processing_unhandled_key_input();
bool  is_processing_unhandled_key_input();
void  move_child(Node child_node, int to_position);
void  print_stray_nodes();
void  print_stray_nodes();
void  print_tree();
void  print_tree();
void  print_tree_pretty();
void  print_tree_pretty();
void  propagate_call(String method, Array args = [], bool parent_first = false);
void  propagate_notification(int what);
void  queue_free();
void  queue_free();
void  raise();
void  raise();
void  remove_and_skip();
void  remove_and_skip();
void  remove_child(Node node);
void  remove_from_group(String group);
void  replace_by(Node node, bool keep_data = false);
void  request_ready();
void  request_ready();
Variant  rpc(String method);
void  rpc_config(String method, int mode);
Variant  rpc_id(int peer_id, String method);
Variant  rpc_unreliable(String method);
Variant  rpc_unreliable_id(int peer_id, String method);
void  rset(String property, Variant value);
void  rset_config(String property, int mode);
void  rset_id(int peer_id, String property, Variant value);
void  rset_unreliable(String property, Variant value);
void  rset_unreliable_id(int peer_id, String property, Variant value);
void  set_custom_multiplayer(MultiplayerAPI api);
void  set_display_folded(bool fold);
void  set_filename(String filename);
void  set_name(String name);
void  set_network_master(int id, bool recursive = true);
void  set_owner(Node owner);
void  set_pause_mode(int mode);
void  set_physics_process(bool enable);
void  set_physics_process_internal(bool enable);
void  set_process(bool enable);
void  set_process_input(bool enable);
void  set_process_internal(bool enable);
void  set_process_priority(int priority);
void  set_process_unhandled_input(bool enable);
void  set_process_unhandled_key_input(bool enable);
void  set_scene_instance_load_placeholder(bool load_placeholder);
void  update_configuration_warning();
void  update_configuration_warning();
};
#endif