/* THIS FILE IS GENERATED */
#ifndef ANIMATIONTREEPLAYER_H
#define ANIMATIONTREEPLAYER_H

#include "stdint.h"

#include "Error.h"
#include "Variant.h"
#include "Node.h"
#include "Animation.h"
class AnimationTreePlayer : public Node{
public: AnimationTreePlayer();
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS,
ANIMATION_PROCESS_IDLE
};
enum NodeType{
NODE_OUTPUT,
NODE_ANIMATION,
NODE_ONESHOT,
NODE_MIX,
NODE_BLEND2,
NODE_BLEND3,
NODE_BLEND4,
NODE_TIMESCALE,
NODE_TIMESEEK,
NODE_TRANSITION
};
void add_node(AnimationTreePlayer::NodeType p_type, String p_id);
void advance(float p_delta);
Animation animation_node_get_animation(String p_id);
String animation_node_get_master_animation(String p_id);
float animation_node_get_position(String p_id);
void animation_node_set_animation(String p_id, Animation p_animation);
void animation_node_set_filter_path(String p_id, NodePath p_path, bool p_enable);
void animation_node_set_master_animation(String p_id, String p_source);
bool are_nodes_connected(String p_id, String p_dst_id, int p_dst_input_idx);
float blend2_node_get_amount(String p_id);
void blend2_node_set_amount(String p_id, float p_blend);
void blend2_node_set_filter_path(String p_id, NodePath p_path, bool p_enable);
float blend3_node_get_amount(String p_id);
void blend3_node_set_amount(String p_id, float p_blend);
Vector2 blend4_node_get_amount(String p_id);
void blend4_node_set_amount(String p_id, Vector2 p_blend);
Error connect_nodes(String p_id, String p_dst_id, int p_dst_input_idx);
void disconnect_nodes(String p_id, int p_dst_input_idx);
AnimationTreePlayer::AnimationProcessMode get_animation_process_mode();
NodePath get_base_path();
NodePath get_master_player();
PoolStringArray get_node_list();
bool is_active();
float mix_node_get_amount(String p_id);
void mix_node_set_amount(String p_id, float p_ratio);
bool node_exists(String p_node);
int node_get_input_count(String p_id);
String node_get_input_source(String p_id, int p_idx);
Vector2 node_get_position(String p_id);
AnimationTreePlayer::NodeType node_get_type(String p_id);
Error node_rename(String p_node, String p_new_name);
void node_set_position(String p_id, Vector2 p_screen_position);
float oneshot_node_get_autorestart_delay(String p_id);
float oneshot_node_get_autorestart_random_delay(String p_id);
float oneshot_node_get_fadein_time(String p_id);
float oneshot_node_get_fadeout_time(String p_id);
bool oneshot_node_has_autorestart(String p_id);
bool oneshot_node_is_active(String p_id);
void oneshot_node_set_autorestart(String p_id, bool p_enable);
void oneshot_node_set_autorestart_delay(String p_id, float p_delay_sec);
void oneshot_node_set_autorestart_random_delay(String p_id, float p_rand_sec);
void oneshot_node_set_fadein_time(String p_id, float p_time_sec);
void oneshot_node_set_fadeout_time(String p_id, float p_time_sec);
void oneshot_node_set_filter_path(String p_id, NodePath p_path, bool p_enable);
void oneshot_node_start(String p_id);
void oneshot_node_stop(String p_id);
void recompute_caches();
void remove_node(String p_id);
void reset();
void set_active(bool p_enabled);
void set_animation_process_mode(AnimationTreePlayer::AnimationProcessMode p_mode);
void set_base_path(NodePath p_path);
void set_master_player(NodePath p_nodepath);
float timescale_node_get_scale(String p_id);
void timescale_node_set_scale(String p_id, float p_scale);
void timeseek_node_seek(String p_id, float p_seconds);
void transition_node_delete_input(String p_id, int p_input_idx);
int transition_node_get_current(String p_id);
int transition_node_get_input_count(String p_id);
float transition_node_get_xfade_time(String p_id);
bool transition_node_has_input_auto_advance(String p_id, int p_input_idx);
void transition_node_set_current(String p_id, int p_input_idx);
void transition_node_set_input_auto_advance(String p_id, int p_input_idx, bool p_enable);
void transition_node_set_input_count(String p_id, int p_count);
void transition_node_set_xfade_time(String p_id, float p_time_sec);
};
#endif