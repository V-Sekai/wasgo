/* THIS FILE IS GENERATED */
#include "AnimationNodeStateMachineTransition.h"
String AnimationNodeStateMachineTransition::get_advance_condition(){
	return String::from_wasgo_id(_wasgo_AnimationNodeStateMachineTransition_wrapper_get_advance_condition(wasgo_id));
}
int AnimationNodeStateMachineTransition::get_priority(){
	return (int) _wasgo_AnimationNodeStateMachineTransition_wrapper_get_priority(wasgo_id);
}
AnimationNodeStateMachineTransition::SwitchMode AnimationNodeStateMachineTransition::get_switch_mode(){
	return AnimationNodeStateMachineTransition::SwitchMode::from_wasgo_id(_wasgo_AnimationNodeStateMachineTransition_wrapper_get_switch_mode(wasgo_id));
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
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_advance_condition(wasgo_id, ((Variant) p_name).get_wasgo_id());
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
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_switch_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void AnimationNodeStateMachineTransition::set_xfade_time(float p_secs){
	_wasgo_AnimationNodeStateMachineTransition_wrapper_set_xfade_time(wasgo_id, p_secs);
}