/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETIMESCALE_H
#define ANIMATIONNODETIMESCALE_H

#include "wasgo\wasgoid.h"

#include "AnimationNode.h"
class AnimationNodeTimeScale : public AnimationNode{
public:

protected:
public:
explicit AnimationNodeTimeScale(WasGoID p_wasgo_id);
explicit AnimationNodeTimeScale(AnimationNode other);
AnimationNodeTimeScale();
AnimationNodeTimeScale new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeTimeScale_constructor();
            
}
#endif