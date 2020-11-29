/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETRANSITION_H
#define ANIMATIONNODETRANSITION_H

#include "stdint.h"

#include "AnimationNode.h"
#include "Variant.h"
class AnimationNodeTransition : public AnimationNode{
public: AnimationNodeTransition();
float get_cross_fade_time();
int get_enabled_inputs();
String get_input_caption(int p_input);
bool is_input_set_as_auto_advance(int p_input);
void set_cross_fade_time(float p_time);
void set_enabled_inputs(int p_amount);
void set_input_as_auto_advance(int p_input, bool p_enable);
void set_input_caption(int p_input, String p_caption);
};
#endif