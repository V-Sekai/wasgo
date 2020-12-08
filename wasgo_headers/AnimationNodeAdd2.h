/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEADD2_H
#define ANIMATIONNODEADD2_H

#include "wasgo\wasgoid.h"

#include "AnimationNode.h"
class AnimationNodeAdd2 : public AnimationNode{
public:
bool is_using_sync();
void set_use_sync(bool p_enable);

protected:
public:
explicit AnimationNodeAdd2(WasGoID p_wasgo_id);
explicit AnimationNodeAdd2(AnimationNode other);
AnimationNodeAdd2();
AnimationNodeAdd2 new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeAdd2_wrapper_is_using_sync(WasGoID wasgo_id);
void _wasgo_AnimationNodeAdd2_wrapper_set_use_sync(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeAdd2_constructor();
            
}
#endif