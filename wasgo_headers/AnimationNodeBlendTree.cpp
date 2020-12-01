/* THIS FILE IS GENERATED */
#include "AnimationNodeBlendTree.h"
void AnimationNodeBlendTree::add_node(String p_name, AnimationNode p_node, Vector2 p_position = Vector2((0, 0))){
	_wasgo_AnimationNodeBlendTree_wrapper_add_node(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_node).get_wasgo_id(), ((Variant) p_position).get_wasgo_id());
}
void AnimationNodeBlendTree::connect_node(String p_input_node, int p_input_index, String p_output_node){
	_wasgo_AnimationNodeBlendTree_wrapper_connect_node(wasgo_id, ((Variant) p_input_node).get_wasgo_id(), p_input_index, ((Variant) p_output_node).get_wasgo_id());
}
void AnimationNodeBlendTree::disconnect_node(String p_input_node, int p_input_index){
	_wasgo_AnimationNodeBlendTree_wrapper_disconnect_node(wasgo_id, ((Variant) p_input_node).get_wasgo_id(), p_input_index);
}
Vector2 AnimationNodeBlendTree::get_graph_offset(){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeBlendTree_wrapper_get_graph_offset(wasgo_id));
}
AnimationNode AnimationNodeBlendTree::get_node(String p_name){
	return AnimationNode::from_wasgo_id(_wasgo_AnimationNodeBlendTree_wrapper_get_node(wasgo_id, ((Variant) p_name).get_wasgo_id()));
}
Vector2 AnimationNodeBlendTree::get_node_position(String p_name){
	return Vector2::from_wasgo_id(_wasgo_AnimationNodeBlendTree_wrapper_get_node_position(wasgo_id, ((Variant) p_name).get_wasgo_id()));
}
bool AnimationNodeBlendTree::has_node(String p_name){
	return (bool) _wasgo_AnimationNodeBlendTree_wrapper_has_node(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
void AnimationNodeBlendTree::remove_node(String p_name){
	_wasgo_AnimationNodeBlendTree_wrapper_remove_node(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
void AnimationNodeBlendTree::rename_node(String p_name, String p_new_name){
	_wasgo_AnimationNodeBlendTree_wrapper_rename_node(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_new_name).get_wasgo_id());
}
void AnimationNodeBlendTree::set_graph_offset(Vector2 p_offset){
	_wasgo_AnimationNodeBlendTree_wrapper_set_graph_offset(wasgo_id, ((Variant) p_offset).get_wasgo_id());
}
void AnimationNodeBlendTree::set_node_position(String p_name, Vector2 p_position){
	_wasgo_AnimationNodeBlendTree_wrapper_set_node_position(wasgo_id, ((Variant) p_name).get_wasgo_id(), ((Variant) p_position).get_wasgo_id());
}