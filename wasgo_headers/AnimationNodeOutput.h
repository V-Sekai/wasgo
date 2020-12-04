/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEOUTPUT_H
#define ANIMATIONNODEOUTPUT_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeOutput : public AnimationNode{
public:

protected:
public:
explicit AnimationNodeOutput(WasGoId p_wasgo_id);
explicit AnimationNodeOutput(AnimationNode other);
AnimationNodeOutput new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AnimationNodeOutput_constructor();
            
}
#endif