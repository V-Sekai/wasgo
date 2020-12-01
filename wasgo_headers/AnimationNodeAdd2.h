/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEADD2_H
#define ANIMATIONNODEADD2_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeAdd2 : public AnimationNode{
public:
bool is_using_sync();
void set_use_sync(bool p_enable);

AnimationNodeAdd2(WasGoId p_wasgo_id);
~AnimationNodeAdd2();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeAdd2_wrapper_is_using_sync(WasGoId wasgo_id);
void _wasgo_AnimationNodeAdd2_wrapper_set_use_sync(WasGoId wasgo_id, bool p_enable);
}
#endif