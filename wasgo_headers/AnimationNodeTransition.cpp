/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeTransition.h"
float AnimationNodeTransition::get_cross_fade_time(){
	return (float) _wasgo_AnimationNodeTransition_wrapper_get_cross_fade_time(wasgo_id);
}
int AnimationNodeTransition::get_enabled_inputs(){
	return (int) _wasgo_AnimationNodeTransition_wrapper_get_enabled_inputs(wasgo_id);
}
String AnimationNodeTransition::get_input_caption(int p_input){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeTransition_wrapper_get_input_caption(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_input);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool AnimationNodeTransition::is_input_set_as_auto_advance(int p_input){
	return (bool) _wasgo_AnimationNodeTransition_wrapper_is_input_set_as_auto_advance(wasgo_id, p_input);
}
void AnimationNodeTransition::set_cross_fade_time(float p_time){
	_wasgo_AnimationNodeTransition_wrapper_set_cross_fade_time(wasgo_id, p_time);
}
void AnimationNodeTransition::set_enabled_inputs(int p_amount){
	_wasgo_AnimationNodeTransition_wrapper_set_enabled_inputs(wasgo_id, p_amount);
}
void AnimationNodeTransition::set_input_as_auto_advance(int p_input, bool p_enable){
	_wasgo_AnimationNodeTransition_wrapper_set_input_as_auto_advance(wasgo_id, p_input, p_enable);
}
void AnimationNodeTransition::set_input_caption(int p_input, String p_caption){

    Variant wasgo_var_caption = p_caption;
    int wasgo_size_caption = String(p_caption).size();
    uint8_t wasgo_buffer_caption[wasgo_size_caption];
    encode_variant(wasgo_var_caption, wasgo_buffer_caption, wasgo_size_caption);
    
	_wasgo_AnimationNodeTransition_wrapper_set_input_caption(wasgo_id, p_input, wasgo_buffer_caption, wasgo_size_caption);
}

AnimationNodeTransition::AnimationNodeTransition(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeTransition::AnimationNodeTransition(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
}
AnimationNodeTransition::AnimationNodeTransition():AnimationNode(){
}
AnimationNodeTransition AnimationNodeTransition::new_instance(){
    return AnimationNodeTransition(_wasgo_AnimationNodeTransition_constructor());
}
WasGoID AnimationNodeTransition::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeTransition::operator bool(){
    return (bool) wasgo_id;
}
