/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETRANSITION_H
#define ANIMATIONNODETRANSITION_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
#include "ustring.h"
class AnimationNodeTransition : public AnimationNode{
public:
float get_cross_fade_time();
int get_enabled_inputs();
String get_input_caption(int p_input);
bool is_input_set_as_auto_advance(int p_input);
void set_cross_fade_time(float p_time);
void set_enabled_inputs(int p_amount);
void set_input_as_auto_advance(int p_input, bool p_enable);
void set_input_caption(int p_input, String p_caption);

protected:
public:
explicit AnimationNodeTransition(WasGoId p_wasgo_id);
explicit AnimationNodeTransition(AnimationNode other);
AnimationNodeTransition new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AnimationNodeTransition_wrapper_get_cross_fade_time(WasGoId wasgo_id);
int _wasgo_AnimationNodeTransition_wrapper_get_enabled_inputs(WasGoId wasgo_id);
void _wasgo_AnimationNodeTransition_wrapper_get_input_caption(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_input);
int _wasgo_AnimationNodeTransition_wrapper_is_input_set_as_auto_advance(WasGoId wasgo_id, int p_input);
void _wasgo_AnimationNodeTransition_wrapper_set_cross_fade_time(WasGoId wasgo_id, float p_time);
void _wasgo_AnimationNodeTransition_wrapper_set_enabled_inputs(WasGoId wasgo_id, int p_amount);
void _wasgo_AnimationNodeTransition_wrapper_set_input_as_auto_advance(WasGoId wasgo_id, int p_input, bool p_enable);
void _wasgo_AnimationNodeTransition_wrapper_set_input_caption(WasGoId wasgo_id, int p_input, const uint8_t * p_caption, int p_caption_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_AnimationNodeTransition_constructor();
            
}
#endif