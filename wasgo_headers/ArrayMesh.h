/* THIS FILE IS GENERATED */
#ifndef ARRAYMESH_H
#define ARRAYMESH_H

#include <stdint.h>

#include "String.h"
#include "Mesh.h"
#include "AABB.h"
#include "PoolByteArray.h"
#include "Transform.h"
#include "Erro.h"
#include "Variant.h"
class ArrayMesh : public Mesh{
public: ArrayMesh();
enum ArrayFormat{
ARRAY_FORMAT_VERTEX: 1,
ARRAY_FORMAT_NORMAL: 2,
ARRAY_FORMAT_TANGENT: 4,
ARRAY_FORMAT_COLOR: 8,
ARRAY_FORMAT_TEX_UV: 16,
ARRAY_FORMAT_TEX_UV2: 32,
ARRAY_FORMAT_BONES: 64,
ARRAY_FORMAT_WEIGHTS: 128,
};
enum ArrayType{
ARRAY_VERTEX: 0,
ARRAY_NORMAL: 1,
ARRAY_TANGENT: 2,
ARRAY_COLOR: 3,
ARRAY_TEX_UV: 4,
ARRAY_TEX_UV2: 5,
ARRAY_BONES: 6,
ARRAY_WEIGHTS: 7,
ARRAY_INDEX: 8,
};
void  add_blend_shape(String name);
void  add_surface_from_arrays(int primitive, Array arrays, Array blend_shapes = [], int compress_flags = 97280);
void  clear_blend_shapes();
void  clear_blend_shapes();
int  get_blend_shape_count();
int  get_blend_shape_count();
enum.Mesh::BlendShapeMode  get_blend_shape_mode();
enum.Mesh::BlendShapeMode  get_blend_shape_mode();
String  get_blend_shape_name(int index);
AABB  get_custom_aabb();
AABB  get_custom_aabb();
enum.Error  lightmap_unwrap(Transform transform, float texel_size);
void  regen_normalmaps();
void  regen_normalmaps();
void  set_blend_shape_mode(int mode);
void  set_custom_aabb(AABB aabb);
int  surface_find_by_name(String name);
int  surface_get_array_index_len(int surf_idx);
int  surface_get_array_len(int surf_idx);
int  surface_get_format(int surf_idx);
String  surface_get_name(int surf_idx);
enum.Mesh::PrimitiveType  surface_get_primitive_type(int surf_idx);
void  surface_remove(int surf_idx);
void  surface_set_name(int surf_idx, String name);
void  surface_update_region(int surf_idx, int offset, PoolByteArray data);
};
#endif