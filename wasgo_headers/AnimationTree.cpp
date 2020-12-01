/* THIS FILE IS GENERATED */
#include "AnimationTree.h"
NodePath AnimationTree::get_animation_player(){
	return NodePath::from_wasgo_id(_wasgo_AnimationTree_wrapper_get_animation_player(wasgo_id));
}
AnimationTree::AnimationProcessMode AnimationTree::get_process_mode(){
	return AnimationTree::AnimationProcessMode::from_wasgo_id(_wasgo_AnimationTree_wrapper_get_process_mode(wasgo_id));
}
NodePath AnimationTree::get_root_motion_track(){
	return NodePath::from_wasgo_id(_wasgo_AnimationTree_wrapper_get_root_motion_track(wasgo_id));
}
Transform AnimationTree::get_root_motion_transform(){
	return Transform::from_wasgo_id(_wasgo_AnimationTree_wrapper_get_root_motion_transform(wasgo_id));
}
AnimationNode AnimationTree::get_tree_root(){
	return AnimationNode::from_wasgo_id(_wasgo_AnimationTree_wrapper_get_tree_root(wasgo_id));
}
bool AnimationTree::is_active(){
	return (bool) _wasgo_AnimationTree_wrapper_is_active(wasgo_id);
}
void AnimationTree::set_active(bool p_active){
	_wasgo_AnimationTree_wrapper_set_active(wasgo_id, p_active);
}
void AnimationTree::set_animation_player(NodePath p_root){
	_wasgo_AnimationTree_wrapper_set_animation_player(wasgo_id, ((Variant) p_root).get_wasgo_id());
}
void AnimationTree::set_process_mode(AnimationTree::AnimationProcessMode p_mode){
	_wasgo_AnimationTree_wrapper_set_process_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void AnimationTree::set_root_motion_track(NodePath p_path){
	_wasgo_AnimationTree_wrapper_set_root_motion_track(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
void AnimationTree::set_tree_root(AnimationNode p_root){
	_wasgo_AnimationTree_wrapper_set_tree_root(wasgo_id, ((Variant) p_root).get_wasgo_id());
}