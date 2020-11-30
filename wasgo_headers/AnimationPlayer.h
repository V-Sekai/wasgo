/* THIS FILE IS GENERATED */
#ifndef ANIMATIONPLAYER_H
#define ANIMATIONPLAYER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Node.h"
class AnimationPlayer : public Node{
enum AnimationMethodCallMode{
ANIMATION_METHOD_CALL_DEFERRED,
ANIMATION_METHOD_CALL_IMMEDIATE
};
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS,
ANIMATION_PROCESS_IDLE,
ANIMATION_PROCESS_MANUAL
};

AnimationPlayer(WasGoId p_wasgo_id);
~AnimationPlayer();
            
};


//Wrapper Functions
extern "C"{
}
#endif