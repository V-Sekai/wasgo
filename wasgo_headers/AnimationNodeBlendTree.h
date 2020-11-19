/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDTREE_H
#define ANIMATIONNODEBLENDTREE_H

#include <stdint.h>

#include "AnimationNode.h"
#include "String.h"
#include "Vector2.h"
#include "AnimationRootNode.h"
class AnimationNodeBlendTree : public AnimationRootNode{
public: AnimationNodeBlendTree();
void  _node_changed(String node);
void  _tree_changed();
void  _tree_changed();
void  add_node(String name, AnimationNode node, Vector2 position = (0, 0));
void  connect_node(String input_node, int input_index, String output_node);
void  disconnect_node(String input_node, int input_index);
Vector2  get_graph_offset();
Vector2  get_graph_offset();
AnimationNode  get_node(String name);
Vector2  get_node_position(String name);
bool  has_node(String name);
void  remove_node(String name);
void  rename_node(String name, String new_name);
void  set_graph_offset(Vector2 offset);
void  set_node_position(String name, Vector2 position);
};
#endif