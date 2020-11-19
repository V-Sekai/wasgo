/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDSPACE1D_H
#define ANIMATIONNODEBLENDSPACE1D_H

#include <stdint.h>

#include "String.h"
#include "AnimationRootNode.h"
class AnimationNodeBlendSpace1D : public AnimationRootNode{
public: AnimationNodeBlendSpace1D();
void  _add_blend_point(int index, AnimationRootNode node);
void  _tree_changed();
void  _tree_changed();
void  add_blend_point(AnimationRootNode node, float pos, int at_index = -1);
int  get_blend_point_count();
int  get_blend_point_count();
AnimationRootNode  get_blend_point_node(int point);
float  get_blend_point_position(int point);
float  get_max_space();
float  get_max_space();
float  get_min_space();
float  get_min_space();
float  get_snap();
float  get_snap();
String  get_value_label();
String  get_value_label();
void  remove_blend_point(int point);
void  set_blend_point_node(int point, AnimationRootNode node);
void  set_blend_point_position(int point, float pos);
void  set_max_space(float max_space);
void  set_min_space(float min_space);
void  set_snap(float snap);
void  set_value_label(String text);
};
#endif