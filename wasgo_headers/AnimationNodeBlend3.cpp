/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeBlend3.h"
bool AnimationNodeBlend3::is_using_sync(){
	return (bool) _wasgo_AnimationNodeBlend3_wrapper_is_using_sync(wasgo_id);
}
void AnimationNodeBlend3::set_use_sync(bool p_enable){
	_wasgo_AnimationNodeBlend3_wrapper_set_use_sync(wasgo_id, p_enable);
}

AnimationNodeBlend3::AnimationNodeBlend3(WasGoId p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeBlend3::AnimationNodeBlend3(){
    wasgo_id = _wasgo_AnimationNodeBlend3_constructor();
}
AnimationNodeBlend3::~AnimationNodeBlend3(){
    _wasgo_AnimationNodeBlend3_destructor(wasgo_id);
}