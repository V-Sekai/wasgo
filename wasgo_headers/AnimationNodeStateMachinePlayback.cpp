/* THIS FILE IS GENERATED */
#include "AnimationNodeStateMachinePlayback.h"
String AnimationNodeStateMachinePlayback::get_current_node(){
	return String::from_wasgo_id(_wasgo_AnimationNodeStateMachinePlayback_wrapper_get_current_node(wasgo_id));
}
PoolStringArray AnimationNodeStateMachinePlayback::get_travel_path(){
	return PoolStringArray::from_wasgo_id(_wasgo_AnimationNodeStateMachinePlayback_wrapper_get_travel_path(wasgo_id));
}
bool AnimationNodeStateMachinePlayback::is_playing(){
	return (bool) _wasgo_AnimationNodeStateMachinePlayback_wrapper_is_playing(wasgo_id);
}
void AnimationNodeStateMachinePlayback::start(String p_node){
	_wasgo_AnimationNodeStateMachinePlayback_wrapper_start(wasgo_id, ((Variant) p_node).get_wasgo_id());
}
void AnimationNodeStateMachinePlayback::stop(){
	_wasgo_AnimationNodeStateMachinePlayback_wrapper_stop(wasgo_id);
}
void AnimationNodeStateMachinePlayback::travel(String p_to_node){
	_wasgo_AnimationNodeStateMachinePlayback_wrapper_travel(wasgo_id, ((Variant) p_to_node).get_wasgo_id());
}