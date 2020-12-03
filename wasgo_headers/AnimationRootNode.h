/* THIS FILE IS GENERATED */
#ifndef ANIMATIONROOTNODE_H
#define ANIMATIONROOTNODE_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationRootNode : public AnimationNode{
public:

protected:
AnimationRootNode(WasGoId p_wasgo_id);
public:
AnimationRootNode();
~AnimationRootNode();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationRootNode_constructor();
    void _wasgo_AnimationRootNode_destructor(WasGoId p_wasgo_id);
            
}
#endif