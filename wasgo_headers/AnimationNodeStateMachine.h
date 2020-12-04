/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINE_H
#define ANIMATIONNODESTATEMACHINE_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "ustring.h"
#include "AnimationNode.h"
#include "AnimationNodeStateMachineTransition.h"
#include "AnimationRootNode.h"
class AnimationNodeStateMachine : public AnimationRootNode{
public:
void add_node(String p_name, AnimationNode p_node, Vector2 p_position = Vector2((0, 0)));
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

protected:
public:
explicit AnimationNodeStateMachine(WasGoId p_wasgo_id);
explicit AnimationNodeStateMachine(AnimationRootNode other);
AnimationNodeStateMachine new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeStateMachine_wrapper_add_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoId p_node, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_add_transition(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size, WasGoId p_transition);
void _wasgo_AnimationNodeStateMachine_wrapper_get_end_node(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeStateMachine_wrapper_get_graph_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_get_node_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoId p_node);
void _wasgo_AnimationNodeStateMachine_wrapper_get_node_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_get_start_node(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_transition(WasGoId wasgo_id, int p_idx);
int _wasgo_AnimationNodeStateMachine_wrapper_get_transition_count(WasGoId wasgo_id);
void _wasgo_AnimationNodeStateMachine_wrapper_get_transition_from(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_AnimationNodeStateMachine_wrapper_get_transition_to(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_AnimationNodeStateMachine_wrapper_has_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_AnimationNodeStateMachine_wrapper_has_transition(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_transition(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_transition_by_index(WasGoId wasgo_id, int p_idx);
void _wasgo_AnimationNodeStateMachine_wrapper_rename_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_new_name, int p_new_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_replace_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoId p_node);
void _wasgo_AnimationNodeStateMachine_wrapper_set_end_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_set_graph_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_set_node_position(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_set_start_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_AnimationNodeStateMachine_constructor();
            
}
#endif