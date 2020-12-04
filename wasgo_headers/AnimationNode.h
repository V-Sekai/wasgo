/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODE_H
#define ANIMATIONNODE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Object.h"
#include "Variant.h"
#include "NodePath.h"
#include "ustring.h"
class AnimationNode : public Resource{
public:
enum FilterAction{
FILTER_IGNORE,
FILTER_PASS,
FILTER_STOP,
FILTER_BLEND
};
void add_input(String p_name);
void blend_animation(String p_animation, float p_time, float p_delta, bool p_seeked, float p_blend);
float blend_input(int p_input_index, float p_time, bool p_seek, float p_blend, AnimationNode::FilterAction p_filter = (AnimationNode::FilterAction) 0, bool p_optimize = (bool) true);
float blend_node(String p_name, AnimationNode p_node, float p_time, bool p_seek, float p_blend, AnimationNode::FilterAction p_filter = (AnimationNode::FilterAction) 0, bool p_optimize = (bool) true);
String get_caption();
Object get_child_by_name(String p_name);
Dictionary get_child_nodes();
int get_input_count();
String get_input_name(int p_input);
Variant get_parameter(String p_name);
Variant get_parameter_default_value(String p_name);
Array get_parameter_list();
String has_filter();
bool is_filter_enabled();
bool is_path_filtered(NodePath p_path);
void process(float p_time, bool p_seek);
void remove_input(int p_index);
void set_filter_enabled(bool p_enable);
void set_filter_path(NodePath p_path, bool p_enable);
void set_parameter(String p_name, Variant p_value);

protected:
public:
explicit AnimationNode(WasGoID p_wasgo_id);
explicit AnimationNode(Resource other);
AnimationNode new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNode_wrapper_add_input(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNode_wrapper_blend_animation(WasGoID wasgo_id, const uint8_t * p_animation, int p_animation_wasgo_buffer_size, float p_time, float p_delta, bool p_seeked, float p_blend);
float _wasgo_AnimationNode_wrapper_blend_input(WasGoID wasgo_id, int p_input_index, float p_time, bool p_seek, float p_blend, WasGoID p_filter, bool p_optimize);
float _wasgo_AnimationNode_wrapper_blend_node(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_node, float p_time, bool p_seek, float p_blend, WasGoID p_filter, bool p_optimize);
void _wasgo_AnimationNode_wrapper_get_caption(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_AnimationNode_wrapper_get_child_by_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_AnimationNode_wrapper_get_child_nodes(WasGoID wasgo_id);
int _wasgo_AnimationNode_wrapper_get_input_count(WasGoID wasgo_id);
void _wasgo_AnimationNode_wrapper_get_input_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_input);
WasGoID _wasgo_AnimationNode_wrapper_get_parameter(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_AnimationNode_wrapper_get_parameter_default_value(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_AnimationNode_wrapper_get_parameter_list(WasGoID wasgo_id);
void _wasgo_AnimationNode_wrapper_has_filter(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimationNode_wrapper_is_filter_enabled(WasGoID wasgo_id);
int _wasgo_AnimationNode_wrapper_is_path_filtered(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_AnimationNode_wrapper_process(WasGoID wasgo_id, float p_time, bool p_seek);
void _wasgo_AnimationNode_wrapper_remove_input(WasGoID wasgo_id, int p_index);
void _wasgo_AnimationNode_wrapper_set_filter_enabled(WasGoID wasgo_id, bool p_enable);
void _wasgo_AnimationNode_wrapper_set_filter_path(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, bool p_enable);
void _wasgo_AnimationNode_wrapper_set_parameter(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_value);

    //constructor wrappers
    WasGoID _wasgo_AnimationNode_constructor();
            
}
#endif