/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEANIMATION_H
#define ANIMATIONNODEANIMATION_H

#include "wasgo\wasgo.h"

#include "AnimationRootNode.h"
#include "ustring.h"
class AnimationNodeAnimation : public AnimationRootNode{
public:
String get_animation();
void set_animation(String p_name);

protected:
AnimationNodeAnimation(WasGoId p_wasgo_id);
public:
AnimationNodeAnimation();
~AnimationNodeAnimation();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeAnimation_wrapper_get_animation(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeAnimation_wrapper_set_animation(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNodeAnimation_constructor();
    void _wasgo_AnimationNodeAnimation_destructor(WasGoId p_wasgo_id);
            
}
#endif