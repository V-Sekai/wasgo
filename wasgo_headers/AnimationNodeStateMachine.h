/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINE_H
#define ANIMATIONNODESTATEMACHINE_H

#include "stdint.h"

#include "AnimationNode.h"
#include "Variant.h"
#include "AnimationRootNode.h"
#include "AnimationNodeStateMachineTransition.h"
class AnimationNodeStateMachine : public AnimationRootNode{
public: AnimationNodeStateMachine();
void add_node(String p_name, AnimationNode p_node, Vector2 p_position = (Vector2) (0, 0));
void add_transition(String p_from, String p_to, AnimationNodeStateMachineTransition p_transition);
String get_end_node();
Vector2 get_graph_offset();
AnimationNode get_node(String p_name);
String get_node_name(AnimationNode p_node);
Vector2 get_node_position(String p_name);
String get_start_node();
AnimationNodeStateMachineTransition get_transition(int p_idx);
int get_transition_count();
String get_transition_from(int p_idx);
String get_transition_to(int p_idx);
bool has_node(String p_name);
bool has_transition(String p_from, String p_to);
void remove_node(String p_name);
void remove_transition(String p_from, String p_to);
void remove_transition_by_index(int p_idx);
void rename_node(String p_name, String p_new_name);
void replace_node(String p_name, AnimationNode p_node);
void set_end_node(String p_name);
void set_graph_offset(Vector2 p_offset);
void set_node_position(String p_name, Vector2 p_position);
void set_start_node(String p_name);
};
#endif