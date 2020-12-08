/* THIS FILE IS GENERATED */
#ifndef ANIMATIONROOTNODE_H
#define ANIMATIONROOTNODE_H

#include "wasgo\wasgoid.h"

#include "AnimationNode.h"
class AnimationRootNode : public AnimationNode{
public:

protected:
public:
explicit AnimationRootNode(WasGoID p_wasgo_id);
explicit AnimationRootNode(AnimationNode other);
AnimationRootNode();
AnimationRootNode new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AnimationRootNode_constructor();
            
}
#endif