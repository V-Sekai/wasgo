/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEOUTPUT_H
#define ANIMATIONNODEOUTPUT_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeOutput : public AnimationNode{
public:

protected:
AnimationNodeOutput(WasGoId p_wasgo_id);
public:
AnimationNodeOutput();
~AnimationNodeOutput();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNodeOutput_constructor();
    void _wasgo_AnimationNodeOutput_destructor(WasGoId p_wasgo_id);
            
}
#endif