/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDTREE_H
#define ANIMATIONNODEBLENDTREE_H

#include "wasgo\wasgo.h"

#include "AnimationRootNode.h"
#include "Vector2.h"
#include "AnimationNode.h"
#include "ustring.h"
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

protected:
public:
explicit AnimationNodeBlendTree(WasGoID p_wasgo_id);
explicit AnimationNodeBlendTree(AnimationRootNode other);
AnimationNodeBlendTree new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeBlendTree_wrapper_add_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_node, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendTree_wrapper_connect_node(WasGoID wasgo_id, const uint8_t * p_input_node, int p_input_node_wasgo_buffer_size, int p_input_index, const uint8_t * p_output_node, int p_output_node_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendTree_wrapper_disconnect_node(WasGoID wasgo_id, const uint8_t * p_input_node, int p_input_node_wasgo_buffer_size, int p_input_index);
void _wasgo_AnimationNodeBlendTree_wrapper_get_graph_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AnimationNodeBlendTree_wrapper_get_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendTree_wrapper_get_node_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_AnimationNodeBlendTree_wrapper_has_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendTree_wrapper_remove_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendTree_wrapper_rename_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_new_name, int p_new_name_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendTree_wrapper_set_graph_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendTree_wrapper_set_node_position(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeBlendTree_constructor();
            
}
#endif