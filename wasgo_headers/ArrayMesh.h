/* THIS FILE IS GENERATED */
#ifndef ARRAYMESH_H
#define ARRAYMESH_H

#include "stdint.h"

#include "Variant.h"
#include "Mesh.h"
#include "Error.h"
class ArrayMesh : public Mesh{
public: ArrayMesh();
enum ArrayFormat{
ARRAY_FORMAT_VERTEX,
ARRAY_FORMAT_NORMAL,
ARRAY_FORMAT_TANGENT,
ARRAY_FORMAT_COLOR,
ARRAY_FORMAT_TEX_UV,
ARRAY_FORMAT_TEX_UV2,
ARRAY_FORMAT_BONES,
ARRAY_FORMAT_WEIGHTS,
ARRAY_FORMAT_INDEX
};
enum ArrayType{
ARRAY_VERTEX,
ARRAY_NORMAL,
ARRAY_TANGENT,
ARRAY_COLOR,
ARRAY_TEX_UV,
ARRAY_TEX_UV2,
ARRAY_BONES,
ARRAY_WEIGHTS,
ARRAY_INDEX,
ARRAY_MAX
};
void add_blend_shape(String p_name);
void add_surface_from_arrays(Mesh::PrimitiveType p_primitive, Array p_arrays, Array p_blend_shapes = (Array) [], int p_compress_flags = (int) 97280);
void clear_blend_shapes();
int get_blend_shape_count();
Mesh::BlendShapeMode get_blend_shape_mode();
String get_blend_shape_name(int p_index);
AABB get_custom_aabb();
Error lightmap_unwrap(Transform p_transform, float p_texel_size);
void regen_normalmaps();
void set_blend_shape_mode(Mesh::BlendShapeMode p_mode);
void set_custom_aabb(AABB p_aabb);
int surface_find_by_name(String p_name);
int surface_get_array_index_len(int p_surf_idx);
int surface_get_array_len(int p_surf_idx);
int surface_get_format(int p_surf_idx);
String surface_get_name(int p_surf_idx);
Mesh::PrimitiveType surface_get_primitive_type(int p_surf_idx);
void surface_remove(int p_surf_idx);
void surface_set_name(int p_surf_idx, String p_name);
void surface_update_region(int p_surf_idx, int p_offset, PoolByteArray p_data);
};
#endif