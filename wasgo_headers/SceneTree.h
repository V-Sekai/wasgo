/* THIS FILE IS GENERATED */
#ifndef SCENETREE_H
#define SCENETREE_H

#include <stdint.h>

#include "MultiplayerAPI.h"
#include "String.h"
#include "Vector2.h"
#include "PackedScene.h"
#include "MainLoop.h"
#include "Node.h"
#include "SceneTreeTimer.h"
#include "Erro.h"
#include "Object.h"
#include "PoolIntArray.h"
#include "Viewport.h"
#include "Variant.h"
#include "NetworkedMultiplayerPeer.h"
class SceneTree : public MainLoop{
public: SceneTree();
enum StretchAspect{
STRETCH_ASPECT_IGNORE: 0,
STRETCH_ASPECT_KEEP: 1,
STRETCH_ASPECT_KEEP_WIDTH: 2,
STRETCH_ASPECT_KEEP_HEIGHT: 3,
};
enum GroupCallFlags{
GROUP_CALL_DEFAULT: 0,
GROUP_CALL_REVERSE: 1,
GROUP_CALL_REALTIME: 2,
};
enum StretchMode{
STRETCH_MODE_DISABLED: 0,
STRETCH_MODE_2D: 1,
};
void  _change_scene(Node arg0);
void  _connected_to_server();
void  _connected_to_server();
void  _connection_failed();
void  _connection_failed();
void  _network_peer_connected(int arg0);
void  _network_peer_disconnected(int arg0);
void  _server_disconnected();
void  _server_disconnected();
Variant  call_group(String group, String method);
Variant  call_group_flags(int flags, String group, String method);
enum.Error  change_scene(String path);
enum.Error  change_scene_to(PackedScene packed_scene);
SceneTreeTimer  create_timer(float time_sec, bool pause_mode_process = true);
Node  get_current_scene();
Node  get_current_scene();
Node  get_edited_scene_root();
Node  get_edited_scene_root();
int  get_frame();
int  get_frame();
MultiplayerAPI  get_multiplayer();
MultiplayerAPI  get_multiplayer();
PoolIntArray  get_network_connected_peers();
PoolIntArray  get_network_connected_peers();
NetworkedMultiplayerPeer  get_network_peer();
NetworkedMultiplayerPeer  get_network_peer();
int  get_network_unique_id();
int  get_network_unique_id();
int  get_node_count();
int  get_node_count();
Array  get_nodes_in_group(String group);
Viewport  get_root();
Viewport  get_root();
int  get_rpc_sender_id();
int  get_rpc_sender_id();
bool  has_group(String name);
bool  has_network_peer();
bool  has_network_peer();
bool  is_debugging_collisions_hint();
bool  is_debugging_collisions_hint();
bool  is_debugging_navigation_hint();
bool  is_debugging_navigation_hint();
bool  is_input_handled();
bool  is_input_handled();
bool  is_multiplayer_poll_enabled();
bool  is_multiplayer_poll_enabled();
bool  is_network_server();
bool  is_network_server();
bool  is_paused();
bool  is_paused();
bool  is_refusing_new_network_connections();
bool  is_refusing_new_network_connections();
bool  is_using_font_oversampling();
bool  is_using_font_oversampling();
void  notify_group(String group, int notification);
void  notify_group_flags(int call_flags, String group, int notification);
void  queue_delete(Object obj);
void  quit(int exit_code = -1);
enum.Error  reload_current_scene();
enum.Error  reload_current_scene();
void  set_auto_accept_quit(bool enabled);
void  set_current_scene(Node child_node);
void  set_debug_collisions_hint(bool enable);
void  set_debug_navigation_hint(bool enable);
void  set_edited_scene_root(Node scene);
void  set_group(String group, String property, Variant value);
void  set_group_flags(int call_flags, String group, String property, Variant value);
void  set_input_as_handled();
void  set_input_as_handled();
void  set_multiplayer(MultiplayerAPI multiplayer);
void  set_multiplayer_poll_enabled(bool enabled);
void  set_network_peer(NetworkedMultiplayerPeer peer);
void  set_pause(bool enable);
void  set_quit_on_go_back(bool enabled);
void  set_refuse_new_network_connections(bool refuse);
void  set_screen_stretch(int mode, int aspect, Vector2 minsize, float shrink = 1);
void  set_use_font_oversampling(bool enable);
};
#endif