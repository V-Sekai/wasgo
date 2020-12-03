/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODETIMESEEK_H
#define ANIMATIONNODETIMESEEK_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeTimeSeek : public AnimationNode{
public:

protected:
AnimationNodeTimeSeek(WasGoId p_wasgo_id);
public:
AnimationNodeTimeSeek();
~AnimationNodeTimeSeek();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNodeTimeSeek_constructor();
    void _wasgo_AnimationNodeTimeSeek_destructor(WasGoId p_wasgo_id);
            
}
#endif