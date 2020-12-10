/* THIS FILE IS GENERATED */
#ifndef SCENETREE_H
#define SCENETREE_H

#include "wasgo\wasgoid.h"

#include "MultiplayerAPI.h"
#include "error_list.h"
#include "SceneTreeTimer.h"
#include "NetworkedMultiplayerPeer.h"
#include "Vector2.h"
class PackedScene;
#include "Object.h"
#include "Variant.h"
#include "Viewport.h"
#include "Ustring.h"
#include "MainLoop.h"
class Node;
class SceneTree : public MainLoop{
public:
enum GroupCallFlags{
GROUP_CALL_DEFAULT,
GROUP_CALL_REVERSE,
GROUP_CALL_REALTIME,
GROUP_CALL_UNIQUE
};
enum StretchAspect{
STRETCH_ASPECT_IGNORE,
STRETCH_ASPECT_KEEP,
STRETCH_ASPECT_KEEP_WIDTH,
STRETCH_ASPECT_KEEP_HEIGHT,
STRETCH_ASPECT_EXPAND
};
enum StretchMode{
STRETCH_MODE_DISABLED,
STRETCH_MODE_2D,
STRETCH_MODE_VIEWPORT
};
Variant call_group(String p_group, String p_method);
Variant call_group_flags(int p_flags, String p_group, String p_method);
Error change_scene(String p_path);
Error change_scene_to(PackedScene p_packed_scene);
SceneTreeTimer create_timer(float p_time_sec, bool p_pause_mode_process = (bool) true);
Node get_current_scene();
Node get_edited_scene_root();
int get_frame();
MultiplayerAPI get_multiplayer();
PoolIntArray get_network_connected_peers();
NetworkedMultiplayerPeer get_network_peer();
int get_network_unique_id();
int get_node_count();
Array get_nodes_in_group(String p_group);
Viewport get_root();
int get_rpc_sender_id();
bool has_group(String p_name);
bool has_network_peer();
bool is_debugging_collisions_hint();
bool is_debugging_navigation_hint();
bool is_input_handled();
bool is_multiplayer_poll_enabled();
bool is_network_server();
bool is_paused();
bool is_refusing_new_network_connections();
bool is_using_font_oversampling();
void notify_group(String p_group, int p_notification);
void notify_group_flags(int p_call_flags, String p_group, int p_notification);
void queue_delete(Object p_obj);
void quit(int p_exit_code = (int) -1);
Error reload_current_scene();
void set_auto_accept_quit(bool p_enabled);
void set_current_scene(Node p_child_node);
void set_debug_collisions_hint(bool p_enable);
void set_debug_navigation_hint(bool p_enable);
void set_edited_scene_root(Node p_scene);
void set_group(String p_group, String p_property, Variant p_value);
void set_group_flags(int p_call_flags, String p_group, String p_property, Variant p_value);
void set_input_as_handled();
void set_multiplayer(MultiplayerAPI p_multiplayer);
void set_multiplayer_poll_enabled(bool p_enabled);
void set_network_peer(NetworkedMultiplayerPeer p_peer);
void set_pause(bool p_enable);
void set_quit_on_go_back(bool p_enabled);
void set_refuse_new_network_connections(bool p_refuse);
void set_screen_stretch(SceneTree::StretchMode p_mode, SceneTree::StretchAspect p_aspect, Vector2 p_minsize, float p_shrink = (float) 1);
void set_use_font_oversampling(bool p_enable);

protected:
public:
explicit SceneTree(WasGoID p_wasgo_id);
explicit SceneTree(MainLoop other);
SceneTree();
SceneTree new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SceneTree_wrapper_call_group(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_group, int p_group_wasgo_buffer_size, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_SceneTree_wrapper_call_group_flags(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_flags, const uint8_t * p_group, int p_group_wasgo_buffer_size, const uint8_t * p_method, int p_method_wasgo_buffer_size);
WasGoID _wasgo_SceneTree_wrapper_change_scene(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_SceneTree_wrapper_change_scene_to(WasGoID wasgo_id, WasGoID p_packed_scene);
WasGoID _wasgo_SceneTree_wrapper_create_timer(WasGoID wasgo_id, float p_time_sec, bool p_pause_mode_process);
WasGoID _wasgo_SceneTree_wrapper_get_current_scene(WasGoID wasgo_id);
WasGoID _wasgo_SceneTree_wrapper_get_edited_scene_root(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_get_frame(WasGoID wasgo_id);
WasGoID _wasgo_SceneTree_wrapper_get_multiplayer(WasGoID wasgo_id);
WasGoID _wasgo_SceneTree_wrapper_get_network_connected_peers(WasGoID wasgo_id);
WasGoID _wasgo_SceneTree_wrapper_get_network_peer(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_get_network_unique_id(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_get_node_count(WasGoID wasgo_id);
WasGoID _wasgo_SceneTree_wrapper_get_nodes_in_group(WasGoID wasgo_id, const uint8_t * p_group, int p_group_wasgo_buffer_size);
WasGoID _wasgo_SceneTree_wrapper_get_root(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_get_rpc_sender_id(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_has_group(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_SceneTree_wrapper_has_network_peer(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_debugging_collisions_hint(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_debugging_navigation_hint(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_input_handled(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_multiplayer_poll_enabled(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_network_server(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_paused(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_refusing_new_network_connections(WasGoID wasgo_id);
int _wasgo_SceneTree_wrapper_is_using_font_oversampling(WasGoID wasgo_id);
void _wasgo_SceneTree_wrapper_notify_group(WasGoID wasgo_id, const uint8_t * p_group, int p_group_wasgo_buffer_size, int wasgo_throwaway, int p_notification);
void _wasgo_SceneTree_wrapper_notify_group_flags(WasGoID wasgo_id, int p_call_flags, const uint8_t * p_group, int wasgo_throwaway, int p_group_wasgo_buffer_size, int p_notification);
void _wasgo_SceneTree_wrapper_queue_delete(WasGoID wasgo_id, WasGoID p_obj);
void _wasgo_SceneTree_wrapper_quit(WasGoID wasgo_id, int p_exit_code);
WasGoID _wasgo_SceneTree_wrapper_reload_current_scene(WasGoID wasgo_id);
void _wasgo_SceneTree_wrapper_set_auto_accept_quit(WasGoID wasgo_id, bool p_enabled);
void _wasgo_SceneTree_wrapper_set_current_scene(WasGoID wasgo_id, WasGoID p_child_node);
void _wasgo_SceneTree_wrapper_set_debug_collisions_hint(WasGoID wasgo_id, bool p_enable);
void _wasgo_SceneTree_wrapper_set_debug_navigation_hint(WasGoID wasgo_id, bool p_enable);
void _wasgo_SceneTree_wrapper_set_edited_scene_root(WasGoID wasgo_id, WasGoID p_scene);
void _wasgo_SceneTree_wrapper_set_group(WasGoID wasgo_id, const uint8_t * p_group, int p_group_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_SceneTree_wrapper_set_group_flags(WasGoID wasgo_id, int p_call_flags, const uint8_t * p_group, int wasgo_throwaway, int p_group_wasgo_buffer_size, const uint8_t * p_property, int p_property_wasgo_buffer_size, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_SceneTree_wrapper_set_input_as_handled(WasGoID wasgo_id);
void _wasgo_SceneTree_wrapper_set_multiplayer(WasGoID wasgo_id, WasGoID p_multiplayer);
void _wasgo_SceneTree_wrapper_set_multiplayer_poll_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_SceneTree_wrapper_set_network_peer(WasGoID wasgo_id, WasGoID p_peer);
void _wasgo_SceneTree_wrapper_set_pause(WasGoID wasgo_id, bool p_enable);
void _wasgo_SceneTree_wrapper_set_quit_on_go_back(WasGoID wasgo_id, bool p_enabled);
void _wasgo_SceneTree_wrapper_set_refuse_new_network_connections(WasGoID wasgo_id, bool p_refuse);
void _wasgo_SceneTree_wrapper_set_screen_stretch(WasGoID wasgo_id, WasGoID p_mode, WasGoID p_aspect, int wasgo_throwaway, const uint8_t * p_minsize, int p_minsize_wasgo_buffer_size, float p_shrink);
void _wasgo_SceneTree_wrapper_set_use_font_oversampling(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_SceneTree_constructor();
            
}
#endif