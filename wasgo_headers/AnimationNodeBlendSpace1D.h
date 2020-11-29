/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDSPACE1D_H
#define ANIMATIONNODEBLENDSPACE1D_H

#include "stdint.h"

#include "Variant.h"
#include "AnimationRootNode.h"
class AnimationNodeBlendSpace1D : public AnimationRootNode{
public: AnimationNodeBlendSpace1D();
void add_blend_point(AnimationRootNode p_node, float p_pos, int p_at_index = (int) -1);
int get_blend_point_count();
AnimationRootNode get_blend_point_node(int p_point);
float get_blend_point_position(int p_point);
float get_max_space();
float get_min_space();
float get_snap();
String get_value_label();
void remove_blend_point(int p_point);
void set_blend_point_node(int p_point, AnimationRootNode p_node);
void set_blend_point_position(int p_point, float p_pos);
void set_max_space(float p_max_space);
void set_min_space(float p_min_space);
void set_snap(float p_snap);
void set_value_label(String p_text);
};
#endif