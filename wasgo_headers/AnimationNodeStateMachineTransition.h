/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINETRANSITION_H
#define ANIMATIONNODESTATEMACHINETRANSITION_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class AnimationNodeStateMachineTransition : public Resource{
public: AnimationNodeStateMachineTransition();
enum SwitchMode{
SWITCH_MODE_IMMEDIATE,
SWITCH_MODE_SYNC,
SWITCH_MODE_AT_END
};
String get_advance_condition();
int get_priority();
AnimationNodeStateMachineTransition::SwitchMode get_switch_mode();
float get_xfade_time();
bool has_auto_advance();
bool is_disabled();
void set_advance_condition(String p_name);
void set_auto_advance(bool p_auto_advance);
void set_disabled(bool p_disabled);
void set_priority(int p_priority);
void set_switch_mode(AnimationNodeStateMachineTransition::SwitchMode p_mode);
void set_xfade_time(float p_secs);
};
#endif