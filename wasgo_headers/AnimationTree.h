/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Transform.h"
#include "String.h"
#include "AnimationNode.h"
#include "NodePath.h"
#include "Node.h"
class AnimationTree : public Node{
public: AnimationTree();
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS: 0,
ANIMATION_PROCESS_IDLE: 1,
};
void  _clear_caches();
void  _clear_caches();
void  _node_removed(Node arg0);
void  _tree_changed();
void  _tree_changed();
void  _update_properties();
void  _update_properties();
void  advance(float delta);
NodePath  get_animation_player();
NodePath  get_animation_player();
enum.AnimationTree::AnimationProcessMode  get_process_mode();
enum.AnimationTree::AnimationProcessMode  get_process_mode();
NodePath  get_root_motion_track();
NodePath  get_root_motion_track();
Transform  get_root_motion_transform();
Transform  get_root_motion_transform();
AnimationNode  get_tree_root();
AnimationNode  get_tree_root();
bool  is_active();
bool  is_active();
void  rename_parameter(String old_name, String new_name);
void  set_active(bool active);
void  set_animation_player(NodePath root);
void  set_process_mode(int mode);
void  set_root_motion_track(NodePath path);
void  set_tree_root(AnimationNode root);
};