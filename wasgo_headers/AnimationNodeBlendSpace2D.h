/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDSPACE2D_H
#define ANIMATIONNODEBLENDSPACE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "ustring.h"
#include "AnimationRootNode.h"
class AnimationNodeBlendSpace2D : public AnimationRootNode{
public:
enum BlendMode{
BLEND_MODE_INTERPOLATED,
BLEND_MODE_DISCRETE,
BLEND_MODE_DISCRETE_CARRY
};
void add_blend_point(AnimationRootNode p_node, Vector2 p_pos, int p_at_index = (int) -1);
void add_triangle(int p_x, int p_y, int p_z, int p_at_index = (int) -1);
int get_blend_point_count();
AnimationRootNode get_blend_point_node(int p_point);
Vector2 get_blend_point_position(int p_point);
Vector2 get_max_space();
Vector2 get_min_space();
Vector2 get_snap();
int get_triangle_count();
int get_triangle_point(int p_triangle, int p_point);
String get_x_label();
String get_y_label();
void remove_blend_point(int p_point);
void remove_triangle(int p_triangle);
void set_blend_point_node(int p_point, AnimationRootNode p_node);
void set_blend_point_position(int p_point, Vector2 p_pos);
void set_max_space(Vector2 p_max_space);
void set_min_space(Vector2 p_min_space);
void set_snap(Vector2 p_snap);
void set_x_label(String p_text);
void set_y_label(String p_text);

AnimationNodeBlendSpace2D(WasGoId p_wasgo_id);
~AnimationNodeBlendSpace2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeBlendSpace2D_wrapper_add_blend_point(WasGoId wasgo_id, WasGoId p_node, WasGoId p_pos, int p_at_index);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_add_triangle(WasGoId wasgo_id, int p_x, int p_y, int p_z, int p_at_index);
int _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_count(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_node(WasGoId wasgo_id, int p_point);
WasGoId _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_position(WasGoId wasgo_id, int p_point);
WasGoId _wasgo_AnimationNodeBlendSpace2D_wrapper_get_max_space(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNodeBlendSpace2D_wrapper_get_min_space(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNodeBlendSpace2D_wrapper_get_snap(WasGoId wasgo_id);
int _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_count(WasGoId wasgo_id);
int _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_point(WasGoId wasgo_id, int p_triangle, int p_point);
WasGoId _wasgo_AnimationNodeBlendSpace2D_wrapper_get_x_label(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNodeBlendSpace2D_wrapper_get_y_label(WasGoId wasgo_id);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_remove_blend_point(WasGoId wasgo_id, int p_point);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_remove_triangle(WasGoId wasgo_id, int p_triangle);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_node(WasGoId wasgo_id, int p_point, WasGoId p_node);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_position(WasGoId wasgo_id, int p_point, WasGoId p_pos);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_max_space(WasGoId wasgo_id, WasGoId p_max_space);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_min_space(WasGoId wasgo_id, WasGoId p_min_space);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_snap(WasGoId wasgo_id, WasGoId p_snap);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_x_label(WasGoId wasgo_id, WasGoId p_text);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_y_label(WasGoId wasgo_id, WasGoId p_text);
}
#endif