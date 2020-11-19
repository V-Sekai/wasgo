/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODE_H
#define ANIMATIONNODE_H

#include <stdint.h>

#include "String.h"
#include "NodePath.h"
#include "Resource.h"
#include "Object.h"
#include "Dictionary.h"
#include "Variant.h"
class AnimationNode : public Resource{
public: AnimationNode();
enum FilterAction{
FILTER_IGNORE: 0,
FILTER_PASS: 1,
FILTER_STOP: 2,
};
Array  _get_filters();
Array  _get_filters();
void  _set_filters(Array filters);
void  add_input(String name);
void  blend_animation(String animation, float time, float delta, bool seeked, float blend);
float  blend_input(int input_index, float time, bool seek, float blend, int filter = 0, bool optimize = true);
float  blend_node(String name, AnimationNode node, float time, bool seek, float blend, int filter = 0, bool optimize = true);
String  get_caption();
String  get_caption();
Object  get_child_by_name(String name);
Dictionary  get_child_nodes();
Dictionary  get_child_nodes();
int  get_input_count();
int  get_input_count();
String  get_input_name(int input);
Variant  get_parameter(String name);
Variant  get_parameter_default_value(String name);
Array  get_parameter_list();
Array  get_parameter_list();
String  has_filter();
String  has_filter();
bool  is_filter_enabled();
bool  is_filter_enabled();
bool  is_path_filtered(NodePath path);
void  process(float time, bool seek);
void  remove_input(int index);
void  set_filter_enabled(bool enable);
void  set_filter_path(NodePath path, bool enable);
void  set_parameter(String name, Variant value);
};
#endif