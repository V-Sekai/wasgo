/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETIMESCALE_H
#define ANIMATIONNODETIMESCALE_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeTimeScale : public AnimationNode{
public:

protected:
AnimationNodeTimeScale(WasGoId p_wasgo_id);
public:
AnimationNodeTimeScale();
~AnimationNodeTimeScale();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNodeTimeScale_constructor();
    void _wasgo_AnimationNodeTimeScale_destructor(WasGoId p_wasgo_id);
            
}
#endif