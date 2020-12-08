/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEOUTPUT_H
#define ANIMATIONNODEOUTPUT_H

#include "wasgo\wasgoid.h"

#include "AnimationNode.h"
class AnimationNodeOutput : public AnimationNode{
public:

protected:
public:
explicit AnimationNodeOutput(WasGoID p_wasgo_id);
explicit AnimationNodeOutput(AnimationNode other);
AnimationNodeOutput();
AnimationNodeOutput new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeOutput_constructor();
            
}
#endif