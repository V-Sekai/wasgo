/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETRANSITION_H
#define ANIMATIONNODETRANSITION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "AnimationNode.h"
class AnimationNodeTransition : public AnimationNode{
float get_cross_fade_time();
int get_enabled_inputs();
String get_input_caption(int p_input);
bool is_input_set_as_auto_advance(int p_input);
void set_cross_fade_time(float p_time);
void set_enabled_inputs(int p_amount);
void set_input_as_auto_advance(int p_input, bool p_enable);
void set_input_caption(int p_input, String p_caption);

AnimationNodeTransition(WasGoId p_wasgo_id);
~AnimationNodeTransition();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AnimationNodeTransition_wrapper_get_cross_fade_time(WasGoId wasgo_id);
int _wasgo_AnimationNodeTransition_wrapper_get_enabled_inputs(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AnimationNodeTransition_wrapper_get_input_caption(WasGoId wasgo_id, int p_input);
int _wasgo_AnimationNodeTransition_wrapper_is_input_set_as_auto_advance(WasGoId wasgo_id, int p_input);
void _wasgo_AnimationNodeTransition_wrapper_set_cross_fade_time(WasGoId wasgo_id, float p_time);
void _wasgo_AnimationNodeTransition_wrapper_set_enabled_inputs(WasGoId wasgo_id, int p_amount);
void _wasgo_AnimationNodeTransition_wrapper_set_input_as_auto_advance(WasGoId wasgo_id, int p_input, bool p_enable);
void _wasgo_AnimationNodeTransition_wrapper_set_input_caption(WasGoId wasgo_id, int p_input, WasGo::WasGoId p_caption);
}
#endif