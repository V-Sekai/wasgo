/* THIS FILE IS GENERATED */
#include "AnimationNode.h"
void AnimationNode::add_input(String p_name){
	_wasgo_AnimationNode_wrapper_add_input(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
String AnimationNode::get_caption(){
	return String::from_wasgo_id(_wasgo_AnimationNode_wrapper_get_caption(wasgo_id));
}
Object AnimationNode::get_child_by_name(String p_name){
	return Object::from_wasgo_id(_wasgo_AnimationNode_wrapper_get_child_by_name(wasgo_id, ((Variant) p_name).get_wasgo_id()));
}
Dictionary AnimationNode::get_child_nodes(){
	return Dictionary::from_wasgo_id(_wasgo_AnimationNode_wrapper_get_child_nodes(wasgo_id));
}
int AnimationNode::get_input_count(){
	return (int) _wasgo_AnimationNode_wrapper_get_input_count(wasgo_id);
}
String AnimationNode::get_input_name(int p_input){
	return String::from_wasgo_id(_wasgo_AnimationNode_wrapper_get_input_name(wasgo_id, p_input));
}
Variant AnimationNode::get_parameter_default_value(String p_name){
	return Variant::from_wasgo_id(_wasgo_AnimationNode_wrapper_get_parameter_default_value(wasgo_id, ((Variant) p_name).get_wasgo_id()));
}
Array AnimationNode::get_parameter_list(){
	return Array::from_wasgo_id(_wasgo_AnimationNode_wrapper_get_parameter_list(wasgo_id));
}
String AnimationNode::has_filter(){
	return String::from_wasgo_id(_wasgo_AnimationNode_wrapper_has_filter(wasgo_id));
}
bool AnimationNode::is_filter_enabled(){
	return (bool) _wasgo_AnimationNode_wrapper_is_filter_enabled(wasgo_id);
}
bool AnimationNode::is_path_filtered(NodePath p_path){
	return (bool) _wasgo_AnimationNode_wrapper_is_path_filtered(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
void AnimationNode::process(float p_time, bool p_seek){
	_wasgo_AnimationNode_wrapper_process(wasgo_id, p_time, p_seek);
}
void AnimationNode::remove_input(int p_index){
	_wasgo_AnimationNode_wrapper_remove_input(wasgo_id, p_index);
}
void AnimationNode::set_filter_enabled(bool p_enable){
	_wasgo_AnimationNode_wrapper_set_filter_enabled(wasgo_id, p_enable);
}
void AnimationNode::set_filter_path(NodePath p_path, bool p_enable){
	_wasgo_AnimationNode_wrapper_set_filter_path(wasgo_id, ((Variant) p_path).get_wasgo_id(), p_enable);
}