/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINEPLAYBACK_H
#define ANIMATIONNODESTATEMACHINEPLAYBACK_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
class AnimationNodeStateMachinePlayback : public Resource{
String get_current_node();
PoolStringArray get_travel_path();
bool is_playing();
void start(String p_node);
void stop();
void travel(String p_to_node);

AnimationNodeStateMachinePlayback(WasGoId p_wasgo_id);
~AnimationNodeStateMachinePlayback();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_AnimationNodeStateMachinePlayback_wrapper_get_current_node(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AnimationNodeStateMachinePlayback_wrapper_get_travel_path(WasGoId wasgo_id);
int _wasgo_AnimationNodeStateMachinePlayback_wrapper_is_playing(WasGoId wasgo_id);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_start(WasGoId wasgo_id, WasGo::WasGoId p_node);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_stop(WasGoId wasgo_id);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_travel(WasGoId wasgo_id, WasGo::WasGoId p_to_node);
}
#endif