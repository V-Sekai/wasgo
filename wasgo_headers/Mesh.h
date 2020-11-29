/* THIS FILE IS GENERATED */
#ifndef MESH_H
#define MESH_H

#include "stdint.h"

#include "Material.h"
#include "Resource.h"
#include "Shape.h"
#include "Variant.h"
#include "TriangleMesh.h"
class Mesh : public Resource{
public: Mesh();
enum ArrayFormat{
ARRAY_FORMAT_VERTEX,
ARRAY_FORMAT_NORMAL,
ARRAY_FORMAT_TANGENT,
ARRAY_FORMAT_COLOR,
ARRAY_FORMAT_TEX_UV,
ARRAY_FORMAT_TEX_UV2,
ARRAY_FORMAT_BONES,
ARRAY_FORMAT_WEIGHTS,
ARRAY_FORMAT_INDEX,
ARRAY_COMPRESS_BASE,
ARRAY_COMPRESS_VERTEX,
ARRAY_COMPRESS_NORMAL,
ARRAY_COMPRESS_TANGENT,
ARRAY_COMPRESS_COLOR,
ARRAY_COMPRESS_TEX_UV,
ARRAY_COMPRESS_TEX_UV2,
ARRAY_COMPRESS_BONES,
ARRAY_COMPRESS_WEIGHTS,
ARRAY_COMPRESS_INDEX,
ARRAY_FLAG_USE_2D_VERTICES,
ARRAY_FLAG_USE_16_BIT_BONES,
ARRAY_COMPRESS_DEFAULT
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
enum BlendShapeMode{
BLEND_SHAPE_MODE_NORMALIZED,
BLEND_SHAPE_MODE_RELATIVE
};
enum PrimitiveType{
PRIMITIVE_POINTS,
PRIMITIVE_LINES,
PRIMITIVE_LINE_STRIP,
PRIMITIVE_LINE_LOOP,
PRIMITIVE_TRIANGLES,
PRIMITIVE_TRIANGLE_STRIP,
PRIMITIVE_TRIANGLE_FAN
};
Shape create_convex_shape();
Mesh create_outline(float p_margin);
Shape create_trimesh_shape();
TriangleMesh generate_triangle_mesh();
AABB get_aabb();
PoolVector3Array get_faces();
Vector2 get_lightmap_size_hint();
int get_surface_count();
void set_lightmap_size_hint(Vector2 p_size);
Array surface_get_arrays(int p_surf_idx);
Array surface_get_blend_shape_arrays(int p_surf_idx);
Material surface_get_material(int p_surf_idx);
void surface_set_material(int p_surf_idx, Material p_material);
};
#endif