/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETIMESEEK_H
#define ANIMATIONNODETIMESEEK_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeTimeSeek : public AnimationNode{
public:

protected:
public:
explicit AnimationNodeTimeSeek(WasGoID p_wasgo_id);
explicit AnimationNodeTimeSeek(AnimationNode other);
AnimationNodeTimeSeek new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeTimeSeek_constructor();
            
}
#endif