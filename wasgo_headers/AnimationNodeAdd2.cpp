/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeAdd2.h"
bool AnimationNodeAdd2::is_using_sync(){
	return (bool) _wasgo_AnimationNodeAdd2_wrapper_is_using_sync(wasgo_id);
}
void AnimationNodeAdd2::set_use_sync(bool p_enable){
	_wasgo_AnimationNodeAdd2_wrapper_set_use_sync(wasgo_id, p_enable);
}

AnimationNodeAdd2::AnimationNodeAdd2(WasGoId p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeAdd2::AnimationNodeAdd2(){
    wasgo_id = _wasgo_AnimationNodeAdd2_constructor();
}
AnimationNodeAdd2::~AnimationNodeAdd2(){
    _wasgo_AnimationNodeAdd2_destructor(wasgo_id);
}