/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLEND3_H
#define ANIMATIONNODEBLEND3_H

#include "wasgo\wasgoid.h"

#include "AnimationNode.h"
class AnimationNodeBlend3 : public AnimationNode{
public:
bool is_using_sync();
void set_use_sync(bool p_enable);

protected:
public:
explicit AnimationNodeBlend3(WasGoID p_wasgo_id);
explicit AnimationNodeBlend3(AnimationNode other);
AnimationNodeBlend3();
AnimationNodeBlend3 new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeBlend3_wrapper_is_using_sync(WasGoID wasgo_id);
void _wasgo_AnimationNodeBlend3_wrapper_set_use_sync(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeBlend3_constructor();
            
}
#endif