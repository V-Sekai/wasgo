/* THIS FILE IS GENERATED */
#ifndef TWEEN_H
#define TWEEN_H

#include <stdint.h>

#include "NodePath.h"
#include "String.h"
#include "Node.h"
#include "Object.h"
#include "Variant.h"
class Tween : public Node{
public: Tween();
enum TransitionType{
TRANS_LINEAR: 0,
TRANS_SINE: 1,
TRANS_QUINT: 2,
TRANS_QUART: 3,
TRANS_QUAD: 4,
TRANS_EXPO: 5,
TRANS_ELASTIC: 6,
TRANS_CUBIC: 7,
TRANS_CIRC: 8,
TRANS_BOUNCE: 9,
};
enum TweenProcessMode{
TWEEN_PROCESS_PHYSICS: 0,
};
enum EaseType{
EASE_IN: 0,
EASE_OUT: 1,
EASE_IN_OUT: 2,
};
void  _remove_by_uid(int uid);
bool  follow_method(Object object, String method, Variant initial_val, Object target, String target_method, float duration, int trans_type = 0, int ease_type = 2, float delay = 0);
bool  follow_property(Object object, NodePath property, Variant initial_val, Object target, NodePath target_property, float duration, int trans_type = 0, int ease_type = 2, float delay = 0);
float  get_runtime();
float  get_runtime();
float  get_speed_scale();
float  get_speed_scale();
enum.Tween::TweenProcessMode  get_tween_process_mode();
enum.Tween::TweenProcessMode  get_tween_process_mode();
bool  interpolate_callback(Object object, float duration, String callback, Variant arg1 = null, Variant arg2 = null, Variant arg3 = null, Variant arg4 = null, Variant arg5 = null);
bool  interpolate_deferred_callback(Object object, float duration, String callback, Variant arg1 = null, Variant arg2 = null, Variant arg3 = null, Variant arg4 = null, Variant arg5 = null);
bool  interpolate_method(Object object, String method, Variant initial_val, Variant final_val, float duration, int trans_type = 0, int ease_type = 2, float delay = 0);
bool  interpolate_property(Object object, NodePath property, Variant initial_val, Variant final_val, float duration, int trans_type = 0, int ease_type = 2, float delay = 0);
bool  is_active();
bool  is_active();
bool  is_repeat();
bool  is_repeat();
bool  remove(Object object, String key = "");
bool  remove_all();
bool  remove_all();
bool  reset(Object object, String key = "");
bool  reset_all();
bool  reset_all();
bool  resume(Object object, String key = "");
bool  resume_all();
bool  resume_all();
bool  seek(float time);
void  set_active(bool active);
void  set_repeat(bool repeat);
void  set_speed_scale(float speed);
void  set_tween_process_mode(int mode);
bool  start();
bool  start();
bool  stop(Object object, String key = "");
bool  stop_all();
bool  stop_all();
bool  targeting_method(Object object, String method, Object initial, String initial_method, Variant final_val, float duration, int trans_type = 0, int ease_type = 2, float delay = 0);
bool  targeting_property(Object object, NodePath property, Object initial, NodePath initial_val, Variant final_val, float duration, int trans_type = 0, int ease_type = 2, float delay = 0);
float  tell();
float  tell();
};
#endif