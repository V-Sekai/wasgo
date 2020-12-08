/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeBlend3.h"
bool AnimationNodeBlend3::is_using_sync(){
	return (bool) _wasgo_AnimationNodeBlend3_wrapper_is_using_sync(wasgo_id);
}
void AnimationNodeBlend3::set_use_sync(bool p_enable){
	_wasgo_AnimationNodeBlend3_wrapper_set_use_sync(wasgo_id, p_enable);
}

AnimationNodeBlend3::AnimationNodeBlend3(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeBlend3::AnimationNodeBlend3(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
}
AnimationNodeBlend3::AnimationNodeBlend3():AnimationNode(){
}
AnimationNodeBlend3 AnimationNodeBlend3::new_instance(){
    return AnimationNodeBlend3(_wasgo_AnimationNodeBlend3_constructor());
}
WasGoID AnimationNodeBlend3::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeBlend3::operator bool(){
    return (bool) wasgo_id;
}
