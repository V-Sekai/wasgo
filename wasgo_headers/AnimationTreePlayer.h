/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Animation.h"
#include "String.h"
#include "Vector2.h"
#include "NodePath.h"
#include "Erro.h"
#include "Node.h"
#include "PoolStringArray.h"
class AnimationTreePlayer : public Node{
public: AnimationTreePlayer();
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS: 0,
};
enum NodeType{
NODE_OUTPUT: 0,
NODE_ANIMATION: 1,
NODE_ONESHOT: 2,
NODE_MIX: 3,
NODE_BLEND2: 4,
NODE_BLEND3: 5,
NODE_BLEND4: 6,
NODE_TIMESCALE: 7,
NODE_TIMESEEK: 8,
};
void  add_node(int type, String id);
void  advance(float delta);
Animation  animation_node_get_animation(String id);
String  animation_node_get_master_animation(String id);
float  animation_node_get_position(String id);
void  animation_node_set_animation(String id, Animation animation);
void  animation_node_set_filter_path(String id, NodePath path, bool enable);
void  animation_node_set_master_animation(String id, String source);
bool  are_nodes_connected(String id, String dst_id, int dst_input_idx);
float  blend2_node_get_amount(String id);
void  blend2_node_set_amount(String id, float blend);
void  blend2_node_set_filter_path(String id, NodePath path, bool enable);
float  blend3_node_get_amount(String id);
void  blend3_node_set_amount(String id, float blend);
Vector2  blend4_node_get_amount(String id);
void  blend4_node_set_amount(String id, Vector2 blend);
enum.Error  connect_nodes(String id, String dst_id, int dst_input_idx);
void  disconnect_nodes(String id, int dst_input_idx);
enum.AnimationTreePlayer::AnimationProcessMode  get_animation_process_mode();
enum.AnimationTreePlayer::AnimationProcessMode  get_animation_process_mode();
NodePath  get_base_path();
NodePath  get_base_path();
NodePath  get_master_player();
NodePath  get_master_player();
PoolStringArray  get_node_list();
PoolStringArray  get_node_list();
bool  is_active();
bool  is_active();
float  mix_node_get_amount(String id);
void  mix_node_set_amount(String id, float ratio);
bool  node_exists(String node);
int  node_get_input_count(String id);
String  node_get_input_source(String id, int idx);
Vector2  node_get_position(String id);
enum.AnimationTreePlayer::NodeType  node_get_type(String id);
enum.Error  node_rename(String node, String new_name);
void  node_set_position(String id, Vector2 screen_position);
float  oneshot_node_get_autorestart_delay(String id);
float  oneshot_node_get_autorestart_random_delay(String id);
float  oneshot_node_get_fadein_time(String id);
float  oneshot_node_get_fadeout_time(String id);
bool  oneshot_node_has_autorestart(String id);
bool  oneshot_node_is_active(String id);
void  oneshot_node_set_autorestart(String id, bool enable);
void  oneshot_node_set_autorestart_delay(String id, float delay_sec);
void  oneshot_node_set_autorestart_random_delay(String id, float rand_sec);
void  oneshot_node_set_fadein_time(String id, float time_sec);
void  oneshot_node_set_fadeout_time(String id, float time_sec);
void  oneshot_node_set_filter_path(String id, NodePath path, bool enable);
void  oneshot_node_start(String id);
void  oneshot_node_stop(String id);
void  recompute_caches();
void  recompute_caches();
void  remove_node(String id);
void  reset();
void  reset();
void  set_active(bool enabled);
void  set_animation_process_mode(int mode);
void  set_base_path(NodePath path);
void  set_master_player(NodePath nodepath);
float  timescale_node_get_scale(String id);
void  timescale_node_set_scale(String id, float scale);
void  timeseek_node_seek(String id, float seconds);
void  transition_node_delete_input(String id, int input_idx);
int  transition_node_get_current(String id);
int  transition_node_get_input_count(String id);
float  transition_node_get_xfade_time(String id);
bool  transition_node_has_input_auto_advance(String id, int input_idx);
void  transition_node_set_current(String id, int input_idx);
void  transition_node_set_input_auto_advance(String id, int input_idx, bool enable);
void  transition_node_set_input_count(String id, int count);
void  transition_node_set_xfade_time(String id, float time_sec);
};