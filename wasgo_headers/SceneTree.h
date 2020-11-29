/* THIS FILE IS GENERATED */
#ifndef SCENETREE_H
#define SCENETREE_H

#include "stdint.h"

#include "PackedScene.h"
#include "MainLoop.h"
#include "Error.h"
#include "Object.h"
#include "SceneTreeTimer.h"
#include "Viewport.h"
#include "Variant.h"
#include "Node.h"
class SceneTree : public MainLoop{
public: SceneTree();
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
SceneTreeTimer create_timer(float p_time_sec, bool p_pause_mode_process = (bool) True);
Node get_current_scene();
Node get_edited_scene_root();
int get_frame();
int get_node_count();
Array get_nodes_in_group(String p_group);
Viewport get_root();
bool has_group(String p_name);
bool is_debugging_collisions_hint();
bool is_debugging_navigation_hint();
bool is_input_handled();
bool is_paused();
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
void set_pause(bool p_enable);
void set_quit_on_go_back(bool p_enabled);
void set_screen_stretch(SceneTree::StretchMode p_mode, SceneTree::StretchAspect p_aspect, Vector2 p_minsize, float p_shrink = (float) 1);
};
#endif