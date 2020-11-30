/* THIS FILE IS GENERATED */
#include "AnimationNodeStateMachine.h"
void AnimationNodeStateMachine::add_node(String p_name, AnimationNode p_node, Vector2 p_position = (Vector2) (0, 0)){
	_wasgo_AnimationNodeStateMachine_wrapper_add_node(wasgo_id, ((Variant) name).get_wasgo_id(), ((Variant) node).get_wasgo_id(), ((Variant) position).get_wasgo_id());
}
void AnimationNodeStateMachine::add_transition(String p_from, String p_to, AnimationNodeStateMachineTransition p_transition){
	_wasgo_AnimationNodeStateMachine_wrapper_add_transition(wasgo_id, ((Variant) from).get_wasgo_id(), ((Variant) to).get_wasgo_id(), ((Variant) transition).get_wasgo_id());
}
String AnimationNodeStateMachine::get_end_node(){
	return String::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_end_node(wasgo_id));
}
Vector2 AnimationNodeStateMachine::get_graph_offset(){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_graph_offset(wasgo_id));
}
AnimationNode AnimationNodeStateMachine::get_node(String p_name){
	return AnimationNode::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_node(wasgo_id, ((Variant) name).get_wasgo_id()));
}
String AnimationNodeStateMachine::get_node_name(AnimationNode p_node){
	return String::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_node_name(wasgo_id, ((Variant) node).get_wasgo_id()));
}
Vector2 AnimationNodeStateMachine::get_node_position(String p_name){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_node_position(wasgo_id, ((Variant) name).get_wasgo_id()));
}
String AnimationNodeStateMachine::get_start_node(){
	return String::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_start_node(wasgo_id));
}
AnimationNodeStateMachineTransition AnimationNodeStateMachine::get_transition(int p_idx){
	return AnimationNodeStateMachineTransition::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_transition(wasgo_id, idx));
}
int AnimationNodeStateMachine::get_transition_count(){
	return (int) _wasgo_AnimationNodeStateMachine_wrapper_get_transition_count(wasgo_id));
}
String AnimationNodeStateMachine::get_transition_from(int p_idx){
	return String::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_transition_from(wasgo_id, idx));
}
String AnimationNodeStateMachine::get_transition_to(int p_idx){
	return String::from_wasgo_id(_wasgo_AnimationNodeStateMachine_wrapper_get_transition_to(wasgo_id, idx));
}
bool AnimationNodeStateMachine::has_node(String p_name){
	return (bool) _wasgo_AnimationNodeStateMachine_wrapper_has_node(wasgo_id, ((Variant) name).get_wasgo_id()));
}
bool AnimationNodeStateMachine::has_transition(String p_from, String p_to){
	return (bool) _wasgo_AnimationNodeStateMachine_wrapper_has_transition(wasgo_id, ((Variant) from).get_wasgo_id(), ((Variant) to).get_wasgo_id()));
}
void AnimationNodeStateMachine::remove_node(String p_name){
	_wasgo_AnimationNodeStateMachine_wrapper_remove_node(wasgo_id, ((Variant) name).get_wasgo_id());
}
void AnimationNodeStateMachine::remove_transition(String p_from, String p_to){
	_wasgo_AnimationNodeStateMachine_wrapper_remove_transition(wasgo_id, ((Variant) from).get_wasgo_id(), ((Variant) to).get_wasgo_id());
}
void AnimationNodeStateMachine::remove_transition_by_index(int p_idx){
	_wasgo_AnimationNodeStateMachine_wrapper_remove_transition_by_index(wasgo_id, idx);
}
void AnimationNodeStateMachine::rename_node(String p_name, String p_new_name){
	_wasgo_AnimationNodeStateMachine_wrapper_rename_node(wasgo_id, ((Variant) name).get_wasgo_id(), ((Variant) new_name).get_wasgo_id());
}
void AnimationNodeStateMachine::replace_node(String p_name, AnimationNode p_node){
	_wasgo_AnimationNodeStateMachine_wrapper_replace_node(wasgo_id, ((Variant) name).get_wasgo_id(), ((Variant) node).get_wasgo_id());
}
void AnimationNodeStateMachine::set_end_node(String p_name){
	_wasgo_AnimationNodeStateMachine_wrapper_set_end_node(wasgo_id, ((Variant) name).get_wasgo_id());
}
void AnimationNodeStateMachine::set_graph_offset(Vector2 p_offset){
	_wasgo_AnimationNodeStateMachine_wrapper_set_graph_offset(wasgo_id, ((Variant) offset).get_wasgo_id());
}
void AnimationNodeStateMachine::set_node_position(String p_name, Vector2 p_position){
	_wasgo_AnimationNodeStateMachine_wrapper_set_node_position(wasgo_id, ((Variant) name).get_wasgo_id(), ((Variant) position).get_wasgo_id());
}
void AnimationNodeStateMachine::set_start_node(String p_name){
	_wasgo_AnimationNodeStateMachine_wrapper_set_start_node(wasgo_id, ((Variant) name).get_wasgo_id());
}

AnimationNodeStateMachine::AnimationNodeStateMachine(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AnimationNodeStateMachine::~AnimationNodeStateMachine(){
}