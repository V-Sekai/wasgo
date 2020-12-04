/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETIMESCALE_H
#define ANIMATIONNODETIMESCALE_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeTimeScale : public AnimationNode{
public:

protected:
public:
explicit AnimationNodeTimeScale(WasGoID p_wasgo_id);
explicit AnimationNodeTimeScale(AnimationNode other);
AnimationNodeTimeScale new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeTimeScale_constructor();
            
}
#endif