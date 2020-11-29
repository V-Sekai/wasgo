/* THIS FILE IS GENERATED */
#ifndef TWEEN_H
#define TWEEN_H

#include "stdint.h"

#include "Object.h"
#include "Node.h"
#include "Variant.h"
class Tween : public Node{
public: Tween();
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
};
#endif