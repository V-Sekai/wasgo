/* THIS FILE IS GENERATED */
#ifndef SCENESTATE_H
#define SCENESTATE_H

#include "stdint.h"

#include "PackedScene.h"
#include "Variant.h"
#include "Reference.h"
class SceneState : public Reference{
public: SceneState();
enum GenEditState{
GEN_EDIT_STATE_DISABLED,
GEN_EDIT_STATE_INSTANCE,
GEN_EDIT_STATE_MAIN
};
Array get_connection_binds(int p_idx);
int get_connection_count();
int get_connection_flags(int p_idx);
String get_connection_method(int p_idx);
String get_connection_signal(int p_idx);
NodePath get_connection_source(int p_idx);
NodePath get_connection_target(int p_idx);
int get_node_count();
PoolStringArray get_node_groups(int p_idx);
int get_node_index(int p_idx);
PackedScene get_node_instance(int p_idx);
String get_node_instance_placeholder(int p_idx);
String get_node_name(int p_idx);
NodePath get_node_owner_path(int p_idx);
NodePath get_node_path(int p_idx, bool p_for_parent = (bool) False);
int get_node_property_count(int p_idx);
String get_node_property_name(int p_idx, int p_prop_idx);
Variant get_node_property_value(int p_idx, int p_prop_idx);
String get_node_type(int p_idx);
bool is_node_instance_placeholder(int p_idx);
};
#endif