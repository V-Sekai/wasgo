/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINETRANSITION_H
#define ANIMATIONNODESTATEMACHINETRANSITION_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "ustring.h"
class AnimationNodeStateMachineTransition : public Resource{
public:
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

protected:
AnimationNodeStateMachineTransition(WasGoId p_wasgo_id);
public:
AnimationNodeStateMachineTransition();
~AnimationNodeStateMachineTransition();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeStateMachineTransition_wrapper_get_advance_condition(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimationNodeStateMachineTransition_wrapper_get_priority(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNodeStateMachineTransition_wrapper_get_switch_mode(WasGoId wasgo_id);
float _wasgo_AnimationNodeStateMachineTransition_wrapper_get_xfade_time(WasGoId wasgo_id);
int _wasgo_AnimationNodeStateMachineTransition_wrapper_has_auto_advance(WasGoId wasgo_id);
int _wasgo_AnimationNodeStateMachineTransition_wrapper_is_disabled(WasGoId wasgo_id);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_advance_condition(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_auto_advance(WasGoId wasgo_id, bool p_auto_advance);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_disabled(WasGoId wasgo_id, bool p_disabled);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_priority(WasGoId wasgo_id, int p_priority);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_switch_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_xfade_time(WasGoId wasgo_id, float p_secs);

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNodeStateMachineTransition_constructor();
    void _wasgo_AnimationNodeStateMachineTransition_destructor(WasGoId p_wasgo_id);
            
}
#endif