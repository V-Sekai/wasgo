/* THIS FILE IS GENERATED */
#ifndef POLYGON2D_H
#define POLYGON2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
#include "Texture.h"
class Polygon2D : public Node2D{
public: Polygon2D();
void add_bone(NodePath p_path, PoolRealArray p_weights);
void clear_bones();
void erase_bone(int p_index);
bool get_antialiased();
int get_bone_count();
NodePath get_bone_path(int p_index);
PoolRealArray get_bone_weights(int p_index);
Color get_color();
int get_internal_vertex_count();
bool get_invert();
float get_invert_border();
Vector2 get_offset();
PoolVector2Array get_polygon();
Array get_polygons();
NodePath get_skeleton();
Texture get_texture();
Vector2 get_texture_offset();
float get_texture_rotation();
float get_texture_rotation_degrees();
Vector2 get_texture_scale();
PoolVector2Array get_uv();
PoolColorArray get_vertex_colors();
void set_antialiased(bool p_antialiased);
void set_bone_path(int p_index, NodePath p_path);
void set_bone_weights(int p_index, PoolRealArray p_weights);
void set_color(Color p_color);
void set_internal_vertex_count(int p_internal_vertex_count);
void set_invert(bool p_invert);
void set_invert_border(float p_invert_border);
void set_offset(Vector2 p_offset);
void set_polygon(PoolVector2Array p_polygon);
void set_polygons(Array p_polygons);
void set_skeleton(NodePath p_skeleton);
void set_texture(Texture p_texture);
void set_texture_offset(Vector2 p_texture_offset);
void set_texture_rotation(float p_texture_rotation);
void set_texture_rotation_degrees(float p_texture_rotation);
void set_texture_scale(Vector2 p_texture_scale);
void set_uv(PoolVector2Array p_uv);
void set_vertex_colors(PoolColorArray p_vertex_colors);
};
#endif