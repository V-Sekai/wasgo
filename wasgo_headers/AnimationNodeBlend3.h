/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLEND3_H
#define ANIMATIONNODEBLEND3_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeBlend3 : public AnimationNode{
public:
bool is_using_sync();
void set_use_sync(bool p_enable);

AnimationNodeBlend3(WasGoId p_wasgo_id);
~AnimationNodeBlend3();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeBlend3_wrapper_is_using_sync(WasGoId wasgo_id);
void _wasgo_AnimationNodeBlend3_wrapper_set_use_sync(WasGoId wasgo_id, bool p_enable);
}
#endif