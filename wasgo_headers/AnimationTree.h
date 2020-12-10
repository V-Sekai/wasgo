/* THIS FILE IS GENERATED */
#ifndef ANIMATIONTREE_H
#define ANIMATIONTREE_H

#include "wasgo\wasgoid.h"

#include "NodePath.h"
#include "Transform.h"
#include "Ustring.h"
#include "Node.h"
#include "AnimationNode.h"
class AnimationTree : public Node{
public:
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS,
ANIMATION_PROCESS_IDLE,
ANIMATION_PROCESS_MANUAL
};
void advance(float p_delta);
NodePath get_animation_player();
AnimationTree::AnimationProcessMode get_process_mode();
NodePath get_root_motion_track();
Transform get_root_motion_transform();
AnimationNode get_tree_root();
bool is_active();
void rename_parameter(String p_old_name, String p_new_name);
void set_active(bool p_active);
void set_animation_player(NodePath p_root);
void set_process_mode(AnimationTree::AnimationProcessMode p_mode);
void set_root_motion_track(NodePath p_path);
void set_tree_root(AnimationNode p_root);

protected:
public:
explicit AnimationTree(WasGoID p_wasgo_id);
explicit AnimationTree(Node other);
AnimationTree();
AnimationTree new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationTree_wrapper_advance(WasGoID wasgo_id, float p_delta);
void _wasgo_AnimationTree_wrapper_get_animation_player(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AnimationTree_wrapper_get_process_mode(WasGoID wasgo_id);
void _wasgo_AnimationTree_wrapper_get_root_motion_track(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationTree_wrapper_get_root_motion_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AnimationTree_wrapper_get_tree_root(WasGoID wasgo_id);
int _wasgo_AnimationTree_wrapper_is_active(WasGoID wasgo_id);
void _wasgo_AnimationTree_wrapper_rename_parameter(WasGoID wasgo_id, const uint8_t * p_old_name, int p_old_name_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_new_name, int p_new_name_wasgo_buffer_size);
void _wasgo_AnimationTree_wrapper_set_active(WasGoID wasgo_id, bool p_active);
void _wasgo_AnimationTree_wrapper_set_animation_player(WasGoID wasgo_id, const uint8_t * p_root, int p_root_wasgo_buffer_size);
void _wasgo_AnimationTree_wrapper_set_process_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AnimationTree_wrapper_set_root_motion_track(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_AnimationTree_wrapper_set_tree_root(WasGoID wasgo_id, WasGoID p_root);

    //constructor wrappers
    WasGoID _wasgo_AnimationTree_constructor();
            
}
#endif