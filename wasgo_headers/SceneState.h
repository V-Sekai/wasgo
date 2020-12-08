/* THIS FILE IS GENERATED */
#ifndef SCENESTATE_H
#define SCENESTATE_H

#include "wasgo\wasgoid.h"

class PackedScene;
#include "NodePath.h"
#include "Reference.h"
#include "Variant.h"
#include "Ustring.h"
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

protected:
public:
explicit SceneState(WasGoID p_wasgo_id);
explicit SceneState(Reference other);
SceneState();
SceneState new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_SceneState_wrapper_get_connection_binds(WasGoID wasgo_id, int p_idx);
int _wasgo_SceneState_wrapper_get_connection_count(WasGoID wasgo_id);
int _wasgo_SceneState_wrapper_get_connection_flags(WasGoID wasgo_id, int p_idx);
void _wasgo_SceneState_wrapper_get_connection_method(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_SceneState_wrapper_get_connection_signal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_SceneState_wrapper_get_connection_source(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_SceneState_wrapper_get_connection_target(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_SceneState_wrapper_get_node_count(WasGoID wasgo_id);
WasGoID _wasgo_SceneState_wrapper_get_node_groups(WasGoID wasgo_id, int p_idx);
int _wasgo_SceneState_wrapper_get_node_index(WasGoID wasgo_id, int p_idx);
WasGoID _wasgo_SceneState_wrapper_get_node_instance(WasGoID wasgo_id, int p_idx);
void _wasgo_SceneState_wrapper_get_node_instance_placeholder(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_SceneState_wrapper_get_node_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_SceneState_wrapper_get_node_owner_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_SceneState_wrapper_get_node_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx, bool p_for_parent);
int _wasgo_SceneState_wrapper_get_node_property_count(WasGoID wasgo_id, int p_idx);
void _wasgo_SceneState_wrapper_get_node_property_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx, int p_prop_idx);
WasGoID _wasgo_SceneState_wrapper_get_node_property_value(WasGoID wasgo_id, int p_idx, int p_prop_idx);
void _wasgo_SceneState_wrapper_get_node_type(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_SceneState_wrapper_is_node_instance_placeholder(WasGoID wasgo_id, int p_idx);

    //constructor wrappers
    WasGoID _wasgo_SceneState_constructor();
            
}
#endif