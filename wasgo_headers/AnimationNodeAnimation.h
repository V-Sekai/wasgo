/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEANIMATION_H
#define ANIMATIONNODEANIMATION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AnimationRootNode.h"
#include "Variant.h"
class AnimationNodeAnimation : public AnimationRootNode{
String get_animation();
void set_animation(String p_name);

AnimationNodeAnimation(WasGoId p_wasgo_id);
~AnimationNodeAnimation();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_AnimationNodeAnimation_wrapper_get_animation(WasGoId wasgo_id);
void _wasgo_AnimationNodeAnimation_wrapper_set_animation(WasGoId wasgo_id, WasGo::WasGoId p_name);
}
#endif