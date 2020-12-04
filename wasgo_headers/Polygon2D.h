/* THIS FILE IS GENERATED */
#ifndef POLYGON2D_H
#define POLYGON2D_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "Variant.h"
#include "NodePath.h"
#include "Node2D.h"
#include "Texture.h"
class Polygon2D : public Node2D{
public:
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

protected:
public:
explicit Polygon2D(WasGoID p_wasgo_id);
explicit Polygon2D(Node2D other);
Polygon2D new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Polygon2D_wrapper_add_bone(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoID p_weights);
void _wasgo_Polygon2D_wrapper_clear_bones(WasGoID wasgo_id);
void _wasgo_Polygon2D_wrapper_erase_bone(WasGoID wasgo_id, int p_index);
int _wasgo_Polygon2D_wrapper_get_antialiased(WasGoID wasgo_id);
int _wasgo_Polygon2D_wrapper_get_bone_count(WasGoID wasgo_id);
void _wasgo_Polygon2D_wrapper_get_bone_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_index);
WasGoID _wasgo_Polygon2D_wrapper_get_bone_weights(WasGoID wasgo_id, int p_index);
void _wasgo_Polygon2D_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Polygon2D_wrapper_get_internal_vertex_count(WasGoID wasgo_id);
int _wasgo_Polygon2D_wrapper_get_invert(WasGoID wasgo_id);
float _wasgo_Polygon2D_wrapper_get_invert_border(WasGoID wasgo_id);
void _wasgo_Polygon2D_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Polygon2D_wrapper_get_polygon(WasGoID wasgo_id);
WasGoID _wasgo_Polygon2D_wrapper_get_polygons(WasGoID wasgo_id);
void _wasgo_Polygon2D_wrapper_get_skeleton(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Polygon2D_wrapper_get_texture(WasGoID wasgo_id);
void _wasgo_Polygon2D_wrapper_get_texture_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Polygon2D_wrapper_get_texture_rotation(WasGoID wasgo_id);
float _wasgo_Polygon2D_wrapper_get_texture_rotation_degrees(WasGoID wasgo_id);
void _wasgo_Polygon2D_wrapper_get_texture_scale(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Polygon2D_wrapper_get_uv(WasGoID wasgo_id);
WasGoID _wasgo_Polygon2D_wrapper_get_vertex_colors(WasGoID wasgo_id);
void _wasgo_Polygon2D_wrapper_set_antialiased(WasGoID wasgo_id, bool p_antialiased);
void _wasgo_Polygon2D_wrapper_set_bone_path(WasGoID wasgo_id, int p_index, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_Polygon2D_wrapper_set_bone_weights(WasGoID wasgo_id, int p_index, WasGoID p_weights);
void _wasgo_Polygon2D_wrapper_set_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Polygon2D_wrapper_set_internal_vertex_count(WasGoID wasgo_id, int p_internal_vertex_count);
void _wasgo_Polygon2D_wrapper_set_invert(WasGoID wasgo_id, bool p_invert);
void _wasgo_Polygon2D_wrapper_set_invert_border(WasGoID wasgo_id, float p_invert_border);
void _wasgo_Polygon2D_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_Polygon2D_wrapper_set_polygon(WasGoID wasgo_id, WasGoID p_polygon);
void _wasgo_Polygon2D_wrapper_set_polygons(WasGoID wasgo_id, WasGoID p_polygons);
void _wasgo_Polygon2D_wrapper_set_skeleton(WasGoID wasgo_id, const uint8_t * p_skeleton, int p_skeleton_wasgo_buffer_size);
void _wasgo_Polygon2D_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_Polygon2D_wrapper_set_texture_offset(WasGoID wasgo_id, const uint8_t * p_texture_offset, int p_texture_offset_wasgo_buffer_size);
void _wasgo_Polygon2D_wrapper_set_texture_rotation(WasGoID wasgo_id, float p_texture_rotation);
void _wasgo_Polygon2D_wrapper_set_texture_rotation_degrees(WasGoID wasgo_id, float p_texture_rotation);
void _wasgo_Polygon2D_wrapper_set_texture_scale(WasGoID wasgo_id, const uint8_t * p_texture_scale, int p_texture_scale_wasgo_buffer_size);
void _wasgo_Polygon2D_wrapper_set_uv(WasGoID wasgo_id, WasGoID p_uv);
void _wasgo_Polygon2D_wrapper_set_vertex_colors(WasGoID wasgo_id, WasGoID p_vertex_colors);

    //constructor wrappers
    WasGoID _wasgo_Polygon2D_constructor();
            
}
#endif