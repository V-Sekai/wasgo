/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEANIMATION_H
#define ANIMATIONNODEANIMATION_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "AnimationRootNode.h"
class AnimationNodeAnimation : public AnimationRootNode{
public:
String get_animation();
void set_animation(String p_name);

protected:
public:
explicit AnimationNodeAnimation(WasGoID p_wasgo_id);
explicit AnimationNodeAnimation(AnimationRootNode other);
AnimationNodeAnimation();
AnimationNodeAnimation new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeAnimation_wrapper_get_animation(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeAnimation_wrapper_set_animation(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeAnimation_constructor();
            
}
#endif