/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINE_H
#define ANIMATIONNODESTATEMACHINE_H

#include <stdint.h>

#include "AnimationNode.h"
#include "Vector2.h"
#include "AnimationNodeStateMachineTransition.h"
#include "String.h"
#include "AnimationRootNode.h"
class AnimationNodeStateMachine : public AnimationRootNode{
public: AnimationNodeStateMachine();
void  _tree_changed();
void  _tree_changed();
void  add_node(String name, AnimationNode node, Vector2 position = (0, 0));
void  add_transition(String from, String to, AnimationNodeStateMachineTransition transition);
String  get_end_node();
String  get_end_node();
Vector2  get_graph_offset();
Vector2  get_graph_offset();
AnimationNode  get_node(String name);
String  get_node_name(AnimationNode node);
Vector2  get_node_position(String name);
String  get_start_node();
String  get_start_node();
AnimationNodeStateMachineTransition  get_transition(int idx);
int  get_transition_count();
int  get_transition_count();
String  get_transition_from(int idx);
String  get_transition_to(int idx);
bool  has_node(String name);
bool  has_transition(String from, String to);
void  remove_node(String name);
void  remove_transition(String from, String to);
void  remove_transition_by_index(int idx);
void  rename_node(String name, String new_name);
void  set_end_node(String name);
void  set_graph_offset(Vector2 offset);
void  set_node_position(String name, Vector2 position);
void  set_start_node(String name);
};
#endif