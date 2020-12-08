/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeBlend2.h"
bool AnimationNodeBlend2::is_using_sync(){
	return (bool) _wasgo_AnimationNodeBlend2_wrapper_is_using_sync(wasgo_id);
}
void AnimationNodeBlend2::set_use_sync(bool p_enable){
	_wasgo_AnimationNodeBlend2_wrapper_set_use_sync(wasgo_id, p_enable);
}

AnimationNodeBlend2::AnimationNodeBlend2(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeBlend2::AnimationNodeBlend2(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
}
AnimationNodeBlend2::AnimationNodeBlend2():AnimationNode(){
}
AnimationNodeBlend2 AnimationNodeBlend2::new_instance(){
    return AnimationNodeBlend2(_wasgo_AnimationNodeBlend2_constructor());
}
WasGoID AnimationNodeBlend2::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeBlend2::operator bool(){
    return (bool) wasgo_id;
}
