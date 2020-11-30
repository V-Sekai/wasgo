/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEADD3_H
#define ANIMATIONNODEADD3_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeAdd3 : public AnimationNode{
bool is_using_sync();
void set_use_sync(bool p_enable);

AnimationNodeAdd3(WasGoId p_wasgo_id);
~AnimationNodeAdd3();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeAdd3_wrapper_is_using_sync(WasGoId wasgo_id);
void _wasgo_AnimationNodeAdd3_wrapper_set_use_sync(WasGoId wasgo_id, bool p_enable);
}
#endif