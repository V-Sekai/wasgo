/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeStateMachineTransition.h"
String AnimationNodeStateMachineTransition::get_advance_condition(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AnimationNodeStateMachineTransition_wrapper_get_advance_condition(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int AnimationNodeStateMachineTransition::get_priority(){
	return (int) _wasgo_AnimationNodeStateMachineTransition_wrapper_get_priority(wasgo_id);
}
AnimationNodeStateMachineTransition::SwitchMode AnimationNodeStateMachineTransition::get_switch_mode(){
	return AnimationNodeStateMachineTransition::SwitchMode(_wasgo_AnimationNodeStateMachineTransition_wrapper_get_switch_mode(wasgo_id));
}
float AnimationNodeStateMachineTransition::get_xfade_time(){
	return (float) _wasgo_AnimationNodeStateMachineTransition_wrapper_get_xfade_time(wasgo_id);
}
bool AnimationNodeStateMachineTransition::has_auto_advance(){
	return (bool) _wasgo_AnimationNodeStateMachineTransition_wrapper_has_auto_advance(wasgo_id);
}
bool AnimationNodeStateMachineTransition::is_disabled(){
	return (bool) _wasgo_AnimationNodeStateMachineTransition_wrapper_is_disabled(wasgo_id);
}
void AnimationNodeStateMachineTransition::set_advance_condition(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_advance_condition(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void AnimationNodeStateMachineTransition::set_auto_advance(bool p_auto_advance){
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_auto_advance(wasgo_id, p_auto_advance);
}
void AnimationNodeStateMachineTransition::set_disabled(bool p_disabled){
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_disabled(wasgo_id, p_disabled);
}
void AnimationNodeStateMachineTransition::set_priority(int p_priority){
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_priority(wasgo_id, p_priority);
}
void AnimationNodeStateMachineTransition::set_switch_mode(AnimationNodeStateMachineTransition::SwitchMode p_mode){
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_switch_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AnimationNodeStateMachineTransition::set_xfade_time(float p_secs){
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_xfade_time(wasgo_id, p_secs);
}

AnimationNodeStateMachineTransition::AnimationNodeStateMachineTransition(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
AnimationNodeStateMachineTransition::AnimationNodeStateMachineTransition(Resource other) : Resource(other._get_wasgo_id()){
}
AnimationNodeStateMachineTransition::AnimationNodeStateMachineTransition():Resource(){
}
AnimationNodeStateMachineTransition AnimationNodeStateMachineTransition::new_instance(){
    return AnimationNodeStateMachineTransition(_wasgo_AnimationNodeStateMachineTransition_constructor());
}
WasGoID AnimationNodeStateMachineTransition::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeStateMachineTransition::operator bool(){
    return (bool) wasgo_id;
}
