/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLEND2_H
#define ANIMATIONNODEBLEND2_H

#include "wasgo\wasgoid.h"

#include "AnimationNode.h"
class AnimationNodeBlend2 : public AnimationNode{
public:
bool is_using_sync();
void set_use_sync(bool p_enable);

protected:
public:
explicit AnimationNodeBlend2(WasGoID p_wasgo_id);
explicit AnimationNodeBlend2(AnimationNode other);
AnimationNodeBlend2();
AnimationNodeBlend2 new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeBlend2_wrapper_is_using_sync(WasGoID wasgo_id);
void _wasgo_AnimationNodeBlend2_wrapper_set_use_sync(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeBlend2_constructor();
            
}
#endif