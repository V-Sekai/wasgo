/* THIS FILE IS GENERATED */
#ifndef ANIMATIONROOTNODE_H
#define ANIMATIONROOTNODE_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationRootNode : public AnimationNode{
public:

protected:
public:
explicit AnimationRootNode(WasGoId p_wasgo_id);
explicit AnimationRootNode(AnimationNode other);
AnimationRootNode new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AnimationRootNode_constructor();
            
}
#endif