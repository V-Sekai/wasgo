/* THIS FILE IS GENERATED */
#ifndef SCENESTATE_H
#define SCENESTATE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "NodePath.h"
#include "Reference.h"
#include "ustring.h"
#include "PackedScene.h"
class SceneState : public Reference{
public:
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
NodePath get_node_path(int p_idx, bool p_for_parent = (bool) false);
int get_node_property_count(int p_idx);
String get_node_property_name(int p_idx, int p_prop_idx);
Variant get_node_property_value(int p_idx, int p_prop_idx);
String get_node_type(int p_idx);
bool is_node_instance_placeholder(int p_idx);
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_SceneState_wrapper_get_connection_binds(WasGoId wasgo_id, int p_idx);
int _wasgo_SceneState_wrapper_get_connection_count(WasGoId wasgo_id);
int _wasgo_SceneState_wrapper_get_connection_flags(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_connection_method(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_connection_signal(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_connection_source(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_connection_target(WasGoId wasgo_id, int p_idx);
int _wasgo_SceneState_wrapper_get_node_count(WasGoId wasgo_id);
WasGoId _wasgo_SceneState_wrapper_get_node_groups(WasGoId wasgo_id, int p_idx);
int _wasgo_SceneState_wrapper_get_node_index(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_instance(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_instance_placeholder(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_name(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_owner_path(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_path(WasGoId wasgo_id, int p_idx, bool p_for_parent);
int _wasgo_SceneState_wrapper_get_node_property_count(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_property_name(WasGoId wasgo_id, int p_idx, int p_prop_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_property_value(WasGoId wasgo_id, int p_idx, int p_prop_idx);
WasGoId _wasgo_SceneState_wrapper_get_node_type(WasGoId wasgo_id, int p_idx);
int _wasgo_SceneState_wrapper_is_node_instance_placeholder(WasGoId wasgo_id, int p_idx);
}
#endif