/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETRANSITION_H
#define ANIMATIONNODETRANSITION_H

#include <stdint.h>

#include "AnimationNode.h"
#include "String.h"
class AnimationNodeTransition : public AnimationNode{
public: AnimationNodeTransition();
float  get_cross_fade_time();
float  get_cross_fade_time();
int  get_enabled_inputs();
int  get_enabled_inputs();
String  get_input_caption(int input);
bool  is_input_set_as_auto_advance(int input);
void  set_cross_fade_time(float time);
void  set_enabled_inputs(int amount);
void  set_input_as_auto_advance(int input, bool enable);
void  set_input_caption(int input, String caption);
};
#endif