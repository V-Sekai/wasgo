/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETIMESEEK_H
#define ANIMATIONNODETIMESEEK_H

#include "wasgo\wasgoid.h"

#include "AnimationNode.h"
class AnimationNodeTimeSeek : public AnimationNode{
public:

protected:
public:
explicit AnimationNodeTimeSeek(WasGoID p_wasgo_id);
explicit AnimationNodeTimeSeek(AnimationNode other);
AnimationNodeTimeSeek();
AnimationNodeTimeSeek new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeTimeSeek_constructor();
            
}
#endif