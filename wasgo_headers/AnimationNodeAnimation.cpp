/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeAnimation.h"
String AnimationNodeAnimation::get_animation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeAnimation_wrapper_get_animation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void AnimationNodeAnimation::set_animation(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNodeAnimation_wrapper_set_animation(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}

AnimationNodeAnimation::AnimationNodeAnimation(WasGoID p_wasgo_id) : AnimationRootNode(p_wasgo_id){
}
AnimationNodeAnimation::AnimationNodeAnimation(AnimationRootNode other) : AnimationRootNode(other._get_wasgo_id()){
}
AnimationNodeAnimation::AnimationNodeAnimation():AnimationRootNode(){
}
AnimationNodeAnimation AnimationNodeAnimation::new_instance(){
    return AnimationNodeAnimation(_wasgo_AnimationNodeAnimation_constructor());
}
WasGoID AnimationNodeAnimation::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeAnimation::operator bool(){
    return (bool) wasgo_id;
}
