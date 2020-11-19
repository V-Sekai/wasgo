/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDSPACE2D_H
#define ANIMATIONNODEBLENDSPACE2D_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "PoolIntArray.h"
#include "AnimationRootNode.h"
class AnimationNodeBlendSpace2D : public AnimationRootNode{
public: AnimationNodeBlendSpace2D();
enum BlendMode{
BLEND_MODE_INTERPOLATED: 0,
BLEND_MODE_DISCRETE: 1,
};
void  _add_blend_point(int index, AnimationRootNode node);
PoolIntArray  _get_triangles();
PoolIntArray  _get_triangles();
void  _set_triangles(PoolIntArray triangles);
void  _tree_changed();
void  _tree_changed();
void  _update_triangles();
void  _update_triangles();
void  add_blend_point(AnimationRootNode node, Vector2 pos, int at_index = -1);
void  add_triangle(int x, int y, int z, int at_index = -1);
bool  get_auto_triangles();
bool  get_auto_triangles();
enum.AnimationNodeBlendSpace2D::BlendMode  get_blend_mode();
enum.AnimationNodeBlendSpace2D::BlendMode  get_blend_mode();
int  get_blend_point_count();
int  get_blend_point_count();
AnimationRootNode  get_blend_point_node(int point);
Vector2  get_blend_point_position(int point);
Vector2  get_max_space();
Vector2  get_max_space();
Vector2  get_min_space();
Vector2  get_min_space();
Vector2  get_snap();
Vector2  get_snap();
int  get_triangle_count();
int  get_triangle_count();
int  get_triangle_point(int triangle, int point);
String  get_x_label();
String  get_x_label();
String  get_y_label();
String  get_y_label();
void  remove_blend_point(int point);
void  remove_triangle(int triangle);
void  set_auto_triangles(bool enable);
void  set_blend_mode(int mode);
void  set_blend_point_node(int point, AnimationRootNode node);
void  set_blend_point_position(int point, Vector2 pos);
void  set_max_space(Vector2 max_space);
void  set_min_space(Vector2 min_space);
void  set_snap(Vector2 snap);
void  set_x_label(String text);
void  set_y_label(String text);
};
#endif