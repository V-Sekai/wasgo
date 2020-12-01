/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLEND2_H
#define ANIMATIONNODEBLEND2_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeBlend2 : public AnimationNode{
public:
bool is_using_sync();
void set_use_sync(bool p_enable);

AnimationNodeBlend2(WasGoId p_wasgo_id);
~AnimationNodeBlend2();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeBlend2_wrapper_is_using_sync(WasGoId wasgo_id);
void _wasgo_AnimationNodeBlend2_wrapper_set_use_sync(WasGoId wasgo_id, bool p_enable);
}
#endif