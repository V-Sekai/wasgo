/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDTREE_H
#define ANIMATIONNODEBLENDTREE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "AnimationNode.h"
#include "AnimationRootNode.h"
#include "Vector2.h"
class AnimationNodeBlendTree : public AnimationRootNode{
public:
void add_node(String p_name, AnimationNode p_node, Vector2 p_position = Vector2((0, 0)));
void connect_node(String p_input_node, int p_input_index, String p_output_node);
void disconnect_node(String p_input_node, int p_input_index);
Vector2 get_graph_offset();
AnimationNode get_node(String p_name);
Vector2 get_node_position(String p_name);
bool has_node(String p_name);
void remove_node(String p_name);
void rename_node(String p_name, String p_new_name);
void set_graph_offset(Vector2 p_offset);
void set_node_position(String p_name, Vector2 p_position);

AnimationNodeBlendTree(WasGoId p_wasgo_id);
~AnimationNodeBlendTree();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeBlendTree_wrapper_add_node(WasGoId wasgo_id, WasGoId p_name, WasGoId p_node, WasGoId p_position);
void _wasgo_AnimationNodeBlendTree_wrapper_connect_node(WasGoId wasgo_id, WasGoId p_input_node, int p_input_index, WasGoId p_output_node);
void _wasgo_AnimationNodeBlendTree_wrapper_disconnect_node(WasGoId wasgo_id, WasGoId p_input_node, int p_input_index);
WasGoId _wasgo_AnimationNodeBlendTree_wrapper_get_graph_offset(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNodeBlendTree_wrapper_get_node(WasGoId wasgo_id, WasGoId p_name);
WasGoId _wasgo_AnimationNodeBlendTree_wrapper_get_node_position(WasGoId wasgo_id, WasGoId p_name);
int _wasgo_AnimationNodeBlendTree_wrapper_has_node(WasGoId wasgo_id, WasGoId p_name);
void _wasgo_AnimationNodeBlendTree_wrapper_remove_node(WasGoId wasgo_id, WasGoId p_name);
void _wasgo_AnimationNodeBlendTree_wrapper_rename_node(WasGoId wasgo_id, WasGoId p_name, WasGoId p_new_name);
void _wasgo_AnimationNodeBlendTree_wrapper_set_graph_offset(WasGoId wasgo_id, WasGoId p_offset);
void _wasgo_AnimationNodeBlendTree_wrapper_set_node_position(WasGoId wasgo_id, WasGoId p_name, WasGoId p_position);
}
#endif