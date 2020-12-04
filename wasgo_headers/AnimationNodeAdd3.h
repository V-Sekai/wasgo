/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEADD3_H
#define ANIMATIONNODEADD3_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeAdd3 : public AnimationNode{
public:
bool is_using_sync();
void set_use_sync(bool p_enable);

protected:
public:
explicit AnimationNodeAdd3(WasGoID p_wasgo_id);
explicit AnimationNodeAdd3(AnimationNode other);
AnimationNodeAdd3 new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimationNodeAdd3_wrapper_is_using_sync(WasGoID wasgo_id);
void _wasgo_AnimationNodeAdd3_wrapper_set_use_sync(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeAdd3_constructor();
            
}
#endif