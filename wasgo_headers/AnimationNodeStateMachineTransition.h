/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINETRANSITION_H
#define ANIMATIONNODESTATEMACHINETRANSITION_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
class AnimationNodeStateMachineTransition : public Resource{
public: AnimationNodeStateMachineTransition();
enum SwitchMode{
SWITCH_MODE_IMMEDIATE: 0,
SWITCH_MODE_SYNC: 1,
};
String  get_advance_condition();
String  get_advance_condition();
int  get_priority();
int  get_priority();
enum.AnimationNodeStateMachineTransition::SwitchMode  get_switch_mode();
enum.AnimationNodeStateMachineTransition::SwitchMode  get_switch_mode();
float  get_xfade_time();
float  get_xfade_time();
bool  has_auto_advance();
bool  has_auto_advance();
bool  is_disabled();
bool  is_disabled();
void  set_advance_condition(String name);
void  set_auto_advance(bool auto_advance);
void  set_disabled(bool disabled);
void  set_priority(int priority);
void  set_switch_mode(int mode);
void  set_xfade_time(float secs);
};
#endif