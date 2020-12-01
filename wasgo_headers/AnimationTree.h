/* THIS FILE IS GENERATED */
#ifndef ANIMATIONTREE_H
#define ANIMATIONTREE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Transform.h"
#include "Node.h"
#include "AnimationNode.h"
#include "NodePath.h"
class AnimationTree : public Node{
public:
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS,
ANIMATION_PROCESS_IDLE,
ANIMATION_PROCESS_MANUAL
};
NodePath get_animation_player();
AnimationTree::AnimationProcessMode get_process_mode();
NodePath get_root_motion_track();
Transform get_root_motion_transform();
AnimationNode get_tree_root();
bool is_active();
void set_active(bool p_active);
void set_animation_player(NodePath p_root);
void set_process_mode(AnimationTree::AnimationProcessMode p_mode);
void set_root_motion_track(NodePath p_path);
void set_tree_root(AnimationNode p_root);

AnimationTree(WasGoId p_wasgo_id);
~AnimationTree();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AnimationTree_wrapper_get_animation_player(WasGoId wasgo_id);
WasGoId _wasgo_AnimationTree_wrapper_get_process_mode(WasGoId wasgo_id);
WasGoId _wasgo_AnimationTree_wrapper_get_root_motion_track(WasGoId wasgo_id);
WasGoId _wasgo_AnimationTree_wrapper_get_root_motion_transform(WasGoId wasgo_id);
WasGoId _wasgo_AnimationTree_wrapper_get_tree_root(WasGoId wasgo_id);
int _wasgo_AnimationTree_wrapper_is_active(WasGoId wasgo_id);
void _wasgo_AnimationTree_wrapper_set_active(WasGoId wasgo_id, bool p_active);
void _wasgo_AnimationTree_wrapper_set_animation_player(WasGoId wasgo_id, WasGoId p_root);
void _wasgo_AnimationTree_wrapper_set_process_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_AnimationTree_wrapper_set_root_motion_track(WasGoId wasgo_id, WasGoId p_path);
void _wasgo_AnimationTree_wrapper_set_tree_root(WasGoId wasgo_id, WasGoId p_root);
}
#endif