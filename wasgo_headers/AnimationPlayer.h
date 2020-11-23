/* THIS FILE IS GENERATED */
#ifndef ANIMATIONPLAYER_H
#define ANIMATIONPLAYER_H

#include <stdint.h>

#include "String.h"
#include "Node.h"
#include "PoolStringArray.h"
#include "Animation.h"
#include "Erro.h"
#include "NodePath.h"
class AnimationPlayer : public Node{
public: AnimationPlayer();
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS: 0,
ANIMATION_PROCESS_IDLE: 1,
};
enum AnimationMethodCallMode{
ANIMATION_METHOD_CALL_DEFERRED: 0,
};
void  _animation_changed();
void  _animation_changed();
void  _node_removed(Node arg0);
enum.Error  add_animation(String name, Animation animation);
void  advance(float delta);
String  animation_get_next(String anim_from);
void  animation_set_next(String anim_from, String anim_to);
void  clear_caches();
void  clear_caches();
void  clear_queue();
void  clear_queue();
String  find_animation(Animation animation);
Animation  get_animation(String name);
PoolStringArray  get_animation_list();
PoolStringArray  get_animation_list();
enum.AnimationPlayer::AnimationProcessMode  get_animation_process_mode();
enum.AnimationPlayer::AnimationProcessMode  get_animation_process_mode();
String  get_assigned_animation();
String  get_assigned_animation();
String  get_autoplay();
String  get_autoplay();
float  get_blend_time(String anim_from, String anim_to);
String  get_current_animation();
String  get_current_animation();
float  get_current_animation_length();
float  get_current_animation_length();
float  get_current_animation_position();
float  get_current_animation_position();
float  get_default_blend_time();
float  get_default_blend_time();
enum.AnimationPlayer::AnimationMethodCallMode  get_method_call_mode();
enum.AnimationPlayer::AnimationMethodCallMode  get_method_call_mode();
float  get_playing_speed();
float  get_playing_speed();
PoolStringArray  get_queue();
PoolStringArray  get_queue();
NodePath  get_root();
NodePath  get_root();
float  get_speed_scale();
float  get_speed_scale();
bool  has_animation(String name);
bool  is_active();
bool  is_active();
bool  is_playing();
bool  is_playing();
void  play(String name = "", float custom_blend = -1, float custom_speed = 1, bool from_end = false);
void  play_backwards(String name = "", float custom_blend = -1);
void  queue(String name);
void  remove_animation(String name);
void  rename_animation(String name, String newname);
void  seek(float seconds, bool update = false);
void  set_active(bool active);
void  set_animation_process_mode(int mode);
void  set_assigned_animation(String anim);
void  set_autoplay(String name);
void  set_blend_time(String anim_from, String anim_to, float sec);
void  set_current_animation(String anim);
void  set_default_blend_time(float sec);
void  set_method_call_mode(int mode);
void  set_root(NodePath path);
void  set_speed_scale(float speed);
void  stop(bool reset = true);
};
#endif