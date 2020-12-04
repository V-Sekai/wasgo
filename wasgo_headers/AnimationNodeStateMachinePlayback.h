/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINEPLAYBACK_H
#define ANIMATIONNODESTATEMACHINEPLAYBACK_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
#include "ustring.h"
class AnimationNodeStateMachinePlayback : public Resource{
public:
String get_current_node();
PoolStringArray get_travel_path();
bool is_playing();
void start(String p_node);
void stop();
void travel(String p_to_node);

protected:
public:
explicit AnimationNodeStateMachinePlayback(WasGoID p_wasgo_id);
explicit AnimationNodeStateMachinePlayback(Resource other);
AnimationNodeStateMachinePlayback new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_get_current_node(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AnimationNodeStateMachinePlayback_wrapper_get_travel_path(WasGoID wasgo_id);
int _wasgo_AnimationNodeStateMachinePlayback_wrapper_is_playing(WasGoID wasgo_id);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_start(WasGoID wasgo_id, const uint8_t * p_node, int p_node_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_stop(WasGoID wasgo_id);
void _wasgo_AnimationNodeStateMachinePlayback_wrapper_travel(WasGoID wasgo_id, const uint8_t * p_to_node, int p_to_node_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeStateMachinePlayback_constructor();
            
}
#endif