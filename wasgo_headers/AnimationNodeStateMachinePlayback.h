/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINEPLAYBACK_H
#define ANIMATIONNODESTATEMACHINEPLAYBACK_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Resource.h"
#include "Variant.h"
class AnimationNodeStateMachinePlayback : public Resource{
public:
String get_current_node();
PoolStringArray get_travel_path();
bool is_playing();
void start(String p_node);
void stop();
void travel(String p_to_node);

protected:
AnimationNodeStateMachinePlayback(WasGoId p_wasgo_id);
public:
AnimationNodeStateMachinePlayback();
~AnimationNodeStateMachinePlayback();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_get_current_node(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_AnimationNodeStateMachinePlayback_wrapper_get_travel_path(WasGoId wasgo_id);
int _wasgo_AnimationNodeStateMachinePlayback_wrapper_is_playing(WasGoId wasgo_id);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_start(WasGoId wasgo_id, const uint8_t * p_node, int p_node_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_stop(WasGoId wasgo_id);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_travel(WasGoId wasgo_id, const uint8_t * p_to_node, int p_to_node_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNodeStateMachinePlayback_constructor();
    void _wasgo_AnimationNodeStateMachinePlayback_destructor(WasGoId p_wasgo_id);
            
}
#endif