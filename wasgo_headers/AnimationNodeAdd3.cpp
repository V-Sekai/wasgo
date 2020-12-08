/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeAdd3.h"
bool AnimationNodeAdd3::is_using_sync(){
	return (bool) _wasgo_AnimationNodeAdd3_wrapper_is_using_sync(wasgo_id);
}
void AnimationNodeAdd3::set_use_sync(bool p_enable){
	_wasgo_AnimationNodeAdd3_wrapper_set_use_sync(wasgo_id, p_enable);
}

AnimationNodeAdd3::AnimationNodeAdd3(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeAdd3::AnimationNodeAdd3(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
}
AnimationNodeAdd3::AnimationNodeAdd3():AnimationNode(){
}
AnimationNodeAdd3 AnimationNodeAdd3::new_instance(){
    return AnimationNodeAdd3(_wasgo_AnimationNodeAdd3_constructor());
}
WasGoID AnimationNodeAdd3::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeAdd3::operator bool(){
    return (bool) wasgo_id;
}
