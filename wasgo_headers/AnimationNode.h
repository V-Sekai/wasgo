/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODE_H
#define ANIMATIONNODE_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Object.h"
class AnimationNode : public Resource{
public: AnimationNode();
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
};
#endif