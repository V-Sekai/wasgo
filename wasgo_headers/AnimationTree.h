/* THIS FILE IS GENERATED */
#ifndef ANIMATIONTREE_H
#define ANIMATIONTREE_H

#include "stdint.h"

#include "AnimationNode.h"
#include "Variant.h"
#include "Node.h"
class AnimationTree : public Node{
public: AnimationTree();
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
};
#endif