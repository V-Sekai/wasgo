/* THIS FILE IS GENERATED */
#ifndef POLYGON2D_H
#define POLYGON2D_H

#include <stdint.h>

#include "Vector2.h"
#include "PoolRealArray.h"
#include "NodePath.h"
#include "PoolVector2Array.h"
#include "Node2D.h"
#include "Texture.h"
#include "Variant.h"
class Polygon2D : public Node2D{
public: Polygon2D();
Array  _get_bones();
Array  _get_bones();
void  _set_bones(Array bones);
void  _skeleton_bone_setup_changed();
void  _skeleton_bone_setup_changed();
void  add_bone(NodePath path, PoolRealArray weights);
void  clear_bones();
void  clear_bones();
void  erase_bone(int index);
bool  get_antialiased();
bool  get_antialiased();
int  get_bone_count();
int  get_bone_count();
NodePath  get_bone_path(int index);
PoolRealArray  get_bone_weights(int index);
Color  get_color();
Color  get_color();
int  get_internal_vertex_count();
int  get_internal_vertex_count();
bool  get_invert();
bool  get_invert();
float  get_invert_border();
float  get_invert_border();
Vector2  get_offset();
Vector2  get_offset();
PoolVector2Array  get_polygon();
PoolVector2Array  get_polygon();
Array  get_polygons();
Array  get_polygons();
NodePath  get_skeleton();
NodePath  get_skeleton();
Texture  get_texture();
Texture  get_texture();
Vector2  get_texture_offset();
Vector2  get_texture_offset();
float  get_texture_rotation();
float  get_texture_rotation();
float  get_texture_rotation_degrees();
float  get_texture_rotation_degrees();
Vector2  get_texture_scale();
Vector2  get_texture_scale();
PoolVector2Array  get_uv();
PoolVector2Array  get_uv();
PoolColorArray  get_vertex_colors();
PoolColorArray  get_vertex_colors();
void  set_antialiased(bool antialiased);
void  set_bone_path(int index, NodePath path);
void  set_bone_weights(int index, PoolRealArray weights);
void  set_color(Color color);
void  set_internal_vertex_count(int internal_vertex_count);
void  set_invert(bool invert);
void  set_invert_border(float invert_border);
void  set_offset(Vector2 offset);
void  set_polygon(PoolVector2Array polygon);
void  set_polygons(Array polygons);
void  set_skeleton(NodePath skeleton);
void  set_texture(Texture texture);
void  set_texture_offset(Vector2 texture_offset);
void  set_texture_rotation(float texture_rotation);
void  set_texture_rotation_degrees(float texture_rotation);
void  set_texture_scale(Vector2 texture_scale);
void  set_uv(PoolVector2Array uv);
void  set_vertex_colors(PoolColorArray vertex_colors);
};
#endif