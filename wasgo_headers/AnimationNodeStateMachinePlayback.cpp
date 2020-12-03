/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeStateMachinePlayback.h"
String AnimationNodeStateMachinePlayback::get_current_node(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeStateMachinePlayback_wrapper_get_current_node(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
PoolStringArray AnimationNodeStateMachinePlayback::get_travel_path(){
	return PoolStringArray(_wasgo_AnimationNodeStateMachinePlayback_wrapper_get_travel_path(wasgo_id));
}
bool AnimationNodeStateMachinePlayback::is_playing(){
	return (bool) _wasgo_AnimationNodeStateMachinePlayback_wrapper_is_playing(wasgo_id);
}
void AnimationNodeStateMachinePlayback::start(String p_node){

    Variant wasgo_var_node = p_node;
    uint8_t wasgo_buffer_node[256];
    int wasgo_size_node = 256;
    encode_variant(wasgo_var_node, wasgo_buffer_node, wasgo_size_node);
    
	_wasgo_AnimationNodeStateMachinePlayback_wrapper_start(wasgo_id, wasgo_buffer_node, wasgo_size_node);
}
void AnimationNodeStateMachinePlayback::stop(){
	_wasgo_AnimationNodeStateMachinePlayback_wrapper_stop(wasgo_id);
}
void AnimationNodeStateMachinePlayback::travel(String p_to_node){

    Variant wasgo_var_to_node = p_to_node;
    uint8_t wasgo_buffer_to_node[256];
    int wasgo_size_to_node = 256;
    encode_variant(wasgo_var_to_node, wasgo_buffer_to_node, wasgo_size_to_node);
    
	_wasgo_AnimationNodeStateMachinePlayback_wrapper_travel(wasgo_id, wasgo_buffer_to_node, wasgo_size_to_node);
}

AnimationNodeStateMachinePlayback::AnimationNodeStateMachinePlayback(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
AnimationNodeStateMachinePlayback::AnimationNodeStateMachinePlayback(){
    wasgo_id = _wasgo_AnimationNodeStateMachinePlayback_constructor();
}
AnimationNodeStateMachinePlayback::~AnimationNodeStateMachinePlayback(){
    _wasgo_AnimationNodeStateMachinePlayback_destructor(wasgo_id);
}