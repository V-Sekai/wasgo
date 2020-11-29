/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDTREE_H
#define ANIMATIONNODEBLENDTREE_H

#include "stdint.h"

#include "AnimationNode.h"
#include "Variant.h"
#include "AnimationRootNode.h"
class AnimationNodeBlendTree : public AnimationRootNode{
public: AnimationNodeBlendTree();
void add_node(String p_name, AnimationNode p_node, Vector2 p_position = (Vector2) (0, 0));
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
};
#endif