/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINE_H
#define ANIMATIONNODESTATEMACHINE_H

#include "wasgo\wasgo.h"

#include "AnimationNodeStateMachineTransition.h"
#include "Vector2.h"
#include "AnimationRootNode.h"
#include "AnimationNode.h"
#include "ustring.h"
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
explicit AnimationNodeStateMachine(WasGoID p_wasgo_id);
explicit AnimationNodeStateMachine(AnimationRootNode other);
AnimationNodeStateMachine new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeStateMachine_wrapper_add_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_node, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_add_transition(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size, WasGoID p_transition);
void _wasgo_AnimationNodeStateMachine_wrapper_get_end_node(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeStateMachine_wrapper_get_graph_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AnimationNodeStateMachine_wrapper_get_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_get_node_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoID p_node);
void _wasgo_AnimationNodeStateMachine_wrapper_get_node_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_get_start_node(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AnimationNodeStateMachine_wrapper_get_transition(WasGoID wasgo_id, int p_idx);
int _wasgo_AnimationNodeStateMachine_wrapper_get_transition_count(WasGoID wasgo_id);
void _wasgo_AnimationNodeStateMachine_wrapper_get_transition_from(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_AnimationNodeStateMachine_wrapper_get_transition_to(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_AnimationNodeStateMachine_wrapper_has_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_AnimationNodeStateMachine_wrapper_has_transition(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_transition(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_transition_by_index(WasGoID wasgo_id, int p_idx);
void _wasgo_AnimationNodeStateMachine_wrapper_rename_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_new_name, int p_new_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_replace_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_node);
void _wasgo_AnimationNodeStateMachine_wrapper_set_end_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_set_graph_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_set_node_position(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_AnimationNodeStateMachine_wrapper_set_start_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeStateMachine_constructor();
            
}
#endif