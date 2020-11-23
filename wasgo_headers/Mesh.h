/* THIS FILE IS GENERATED */
#ifndef MESH_H
#define MESH_H

#include <stdint.h>

#include "Material.h"
#include "Resource.h"
#include "AABB.h"
#include "Vector2.h"
#include "PoolVector3Array.h"
#include "Variant.h"
#include "Shape.h"
#include "TriangleMesh.h"
class Mesh : public Resource{
public: Mesh();
enum BlendShapeMode{
BLEND_SHAPE_MODE_NORMALIZED: 0,
};
enum PrimitiveType{
PRIMITIVE_POINTS: 0,
PRIMITIVE_LINES: 1,
PRIMITIVE_LINE_STRIP: 2,
PRIMITIVE_LINE_LOOP: 3,
PRIMITIVE_TRIANGLES: 4,
PRIMITIVE_TRIANGLE_STRIP: 5,
};
enum ArrayFormat{
ARRAY_FORMAT_VERTEX: 1,
ARRAY_FORMAT_NORMAL: 2,
ARRAY_FORMAT_TANGENT: 4,
ARRAY_FORMAT_COLOR: 8,
ARRAY_COMPRESS_BASE: 9,
ARRAY_FORMAT_TEX_UV: 16,
ARRAY_FORMAT_TEX_UV2: 32,
ARRAY_FORMAT_BONES: 64,
ARRAY_FORMAT_WEIGHTS: 128,
ARRAY_FORMAT_INDEX: 256,
ARRAY_COMPRESS_VERTEX: 512,
ARRAY_COMPRESS_NORMAL: 1024,
ARRAY_COMPRESS_TANGENT: 2048,
ARRAY_COMPRESS_COLOR: 4096,
ARRAY_COMPRESS_TEX_UV: 8192,
ARRAY_COMPRESS_TEX_UV2: 16384,
ARRAY_COMPRESS_BONES: 32768,
ARRAY_COMPRESS_WEIGHTS: 65536,
ARRAY_COMPRESS_DEFAULT: 97280,
ARRAY_COMPRESS_INDEX: 131072,
ARRAY_FLAG_USE_2D_VERTICES: 262144,
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
Shape  create_convex_shape();
Shape  create_convex_shape();
Mesh  create_outline(float margin);
Shape  create_trimesh_shape();
Shape  create_trimesh_shape();
TriangleMesh  generate_triangle_mesh();
TriangleMesh  generate_triangle_mesh();
AABB  get_aabb();
AABB  get_aabb();
PoolVector3Array  get_faces();
PoolVector3Array  get_faces();
Vector2  get_lightmap_size_hint();
Vector2  get_lightmap_size_hint();
int  get_surface_count();
int  get_surface_count();
void  set_lightmap_size_hint(Vector2 size);
Array  surface_get_arrays(int surf_idx);
Array  surface_get_blend_shape_arrays(int surf_idx);
Material  surface_get_material(int surf_idx);
void  surface_set_material(int surf_idx, Material material);
};
#endif