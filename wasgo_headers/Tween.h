/* THIS FILE IS GENERATED */
#ifndef TWEEN_H
#define TWEEN_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Node.h"
class Tween : public Node{
enum EaseType{
EASE_IN,
EASE_OUT,
EASE_IN_OUT,
EASE_OUT_IN
};
enum TransitionType{
TRANS_LINEAR,
TRANS_SINE,
TRANS_QUINT,
TRANS_QUART,
TRANS_QUAD,
TRANS_EXPO,
TRANS_ELASTIC,
TRANS_CUBIC,
TRANS_CIRC,
TRANS_BOUNCE,
TRANS_BACK
};
enum TweenProcessMode{
TWEEN_PROCESS_PHYSICS,
TWEEN_PROCESS_IDLE
};
float get_speed_scale();
Tween::TweenProcessMode get_tween_process_mode();
bool is_active();
bool is_repeat();
bool remove(Object p_object, String p_key = (String) );
bool reset(Object p_object, String p_key = (String) );
bool reset_all();
bool resume(Object p_object, String p_key = (String) );
bool resume_all();
void set_active(bool p_active);
void set_repeat(bool p_repeat);
void set_speed_scale(float p_speed);
void set_tween_process_mode(Tween::TweenProcessMode p_mode);
bool start();
bool stop(Object p_object, String p_key = (String) );
bool stop_all();

Tween(WasGoId p_wasgo_id);
~Tween();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_Tween_wrapper_get_speed_scale(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Tween_wrapper_get_tween_process_mode(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_is_active(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_is_repeat(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_remove(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_key);
int _wasgo_Tween_wrapper_reset(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_key);
int _wasgo_Tween_wrapper_reset_all(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_resume(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_key);
int _wasgo_Tween_wrapper_resume_all(WasGoId wasgo_id);
void _wasgo_Tween_wrapper_set_active(WasGoId wasgo_id, bool p_active);
void _wasgo_Tween_wrapper_set_repeat(WasGoId wasgo_id, bool p_repeat);
void _wasgo_Tween_wrapper_set_speed_scale(WasGoId wasgo_id, float p_speed);
void _wasgo_Tween_wrapper_set_tween_process_mode(WasGoId wasgo_id, WasGo::WasGoId p_mode);
int _wasgo_Tween_wrapper_start(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_stop(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_key);
int _wasgo_Tween_wrapper_stop_all(WasGoId wasgo_id);
}
#endif