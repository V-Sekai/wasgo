/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINETRANSITION_H
#define ANIMATIONNODESTATEMACHINETRANSITION_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Ustring.h"
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
public:
explicit AnimationNodeStateMachineTransition(WasGoID p_wasgo_id);
explicit AnimationNodeStateMachineTransition(Resource other);
AnimationNodeStateMachineTransition();
AnimationNodeStateMachineTransition new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeStateMachineTransition_wrapper_get_advance_condition(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimationNodeStateMachineTransition_wrapper_get_priority(WasGoID wasgo_id);
WasGoID _wasgo_AnimationNodeStateMachineTransition_wrapper_get_switch_mode(WasGoID wasgo_id);
float _wasgo_AnimationNodeStateMachineTransition_wrapper_get_xfade_time(WasGoID wasgo_id);
int _wasgo_AnimationNodeStateMachineTransition_wrapper_has_auto_advance(WasGoID wasgo_id);
int _wasgo_AnimationNodeStateMachineTransition_wrapper_is_disabled(WasGoID wasgo_id);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_advance_condition(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_auto_advance(WasGoID wasgo_id, bool p_auto_advance);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_disabled(WasGoID wasgo_id, bool p_disabled);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_priority(WasGoID wasgo_id, int p_priority);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_switch_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AnimationNodeStateMachineTransition_wrapper_set_xfade_time(WasGoID wasgo_id, float p_secs);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeStateMachineTransition_constructor();
            
}
#endif