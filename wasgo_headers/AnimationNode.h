/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODE_H
#define ANIMATIONNODE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Object.h"
#include "NodePath.h"
#include "Variant.h"
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
AnimationNode(WasGoId p_wasgo_id);
public:
AnimationNode();
~AnimationNode();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNode_wrapper_add_input(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationNode_wrapper_blend_animation(WasGoId wasgo_id, const uint8_t * p_animation, int p_animation_wasgo_buffer_size, float p_time, float p_delta, bool p_seeked, float p_blend);
float _wasgo_AnimationNode_wrapper_blend_input(WasGoId wasgo_id, int p_input_index, float p_time, bool p_seek, float p_blend, WasGoId p_filter, bool p_optimize);
float _wasgo_AnimationNode_wrapper_blend_node(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoId p_node, float p_time, bool p_seek, float p_blend, WasGoId p_filter, bool p_optimize);
void _wasgo_AnimationNode_wrapper_get_caption(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_AnimationNode_wrapper_get_child_by_name(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoId _wasgo_AnimationNode_wrapper_get_child_nodes(WasGoId wasgo_id);
int _wasgo_AnimationNode_wrapper_get_input_count(WasGoId wasgo_id);
void _wasgo_AnimationNode_wrapper_get_input_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_input);
WasGoId _wasgo_AnimationNode_wrapper_get_parameter(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoId _wasgo_AnimationNode_wrapper_get_parameter_default_value(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoId _wasgo_AnimationNode_wrapper_get_parameter_list(WasGoId wasgo_id);
void _wasgo_AnimationNode_wrapper_has_filter(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimationNode_wrapper_is_filter_enabled(WasGoId wasgo_id);
int _wasgo_AnimationNode_wrapper_is_path_filtered(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_AnimationNode_wrapper_process(WasGoId wasgo_id, float p_time, bool p_seek);
void _wasgo_AnimationNode_wrapper_remove_input(WasGoId wasgo_id, int p_index);
void _wasgo_AnimationNode_wrapper_set_filter_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_AnimationNode_wrapper_set_filter_path(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, bool p_enable);
void _wasgo_AnimationNode_wrapper_set_parameter(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoId p_value);

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNode_constructor();
    void _wasgo_AnimationNode_destructor(WasGoId p_wasgo_id);
            
}
#endif