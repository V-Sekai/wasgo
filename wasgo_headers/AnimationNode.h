/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODE_H
#define ANIMATIONNODE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "NodePath.h"
#include "Resource.h"
#include "Object.h"
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
String get_caption();
Object get_child_by_name(String p_name);
Dictionary get_child_nodes();
int get_input_count();
String get_input_name(int p_input);
Variant get_parameter_default_value(String p_name);
Array get_parameter_list();
String has_filter();
bool is_filter_enabled();
bool is_path_filtered(NodePath p_path);
void process(float p_time, bool p_seek);
void remove_input(int p_index);
void set_filter_enabled(bool p_enable);
void set_filter_path(NodePath p_path, bool p_enable);

AnimationNode(WasGoId p_wasgo_id);
~AnimationNode();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNode_wrapper_add_input(WasGoId wasgo_id, WasGoId p_name);
WasGoId _wasgo_AnimationNode_wrapper_get_caption(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNode_wrapper_get_child_by_name(WasGoId wasgo_id, WasGoId p_name);
WasGoId _wasgo_AnimationNode_wrapper_get_child_nodes(WasGoId wasgo_id);
int _wasgo_AnimationNode_wrapper_get_input_count(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNode_wrapper_get_input_name(WasGoId wasgo_id, int p_input);
WasGoId _wasgo_AnimationNode_wrapper_get_parameter_default_value(WasGoId wasgo_id, WasGoId p_name);
WasGoId _wasgo_AnimationNode_wrapper_get_parameter_list(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNode_wrapper_has_filter(WasGoId wasgo_id);
int _wasgo_AnimationNode_wrapper_is_filter_enabled(WasGoId wasgo_id);
int _wasgo_AnimationNode_wrapper_is_path_filtered(WasGoId wasgo_id, WasGoId p_path);
void _wasgo_AnimationNode_wrapper_process(WasGoId wasgo_id, float p_time, bool p_seek);
void _wasgo_AnimationNode_wrapper_remove_input(WasGoId wasgo_id, int p_index);
void _wasgo_AnimationNode_wrapper_set_filter_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_AnimationNode_wrapper_set_filter_path(WasGoId wasgo_id, WasGoId p_path, bool p_enable);
}
#endif