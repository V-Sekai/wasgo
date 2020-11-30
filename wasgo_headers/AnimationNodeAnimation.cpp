/* THIS FILE IS GENERATED */
#include "AnimationNodeAnimation.h"
String AnimationNodeAnimation::get_animation(){
	return String::from_wasgo_id(_wasgo_AnimationNodeAnimation_wrapper_get_animation(wasgo_id));
}
void AnimationNodeAnimation::set_animation(String p_name){
	_wasgo_AnimationNodeAnimation_wrapper_set_animation(wasgo_id, ((Variant) name).get_wasgo_id());
}

AnimationNodeAnimation::AnimationNodeAnimation(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AnimationNodeAnimation::~AnimationNodeAnimation(){
}