/* THIS FILE IS GENERATED */
#ifndef SURFACETOOL_H
#define SURFACETOOL_H

#include "stdint.h"

#include "Material.h"
#include "Reference.h"
#include "ArrayMesh.h"
#include "Variant.h"
#include "Mesh.h"
class SurfaceTool : public Reference{
public: SurfaceTool();
void add_bones(PoolIntArray p_bones);
void add_color(Color p_color);
void add_index(int p_index);
void add_normal(Vector3 p_normal);
void add_smooth_group(bool p_smooth);
void add_tangent(Plane p_tangent);
void add_triangle_fan(PoolVector3Array p_vertices, PoolVector2Array p_uvs = (PoolVector2Array) [], PoolColorArray p_colors = (PoolColorArray) [PoolColorArray], PoolVector2Array p_uv2s = (PoolVector2Array) [], PoolVector3Array p_normals = (PoolVector3Array) [], Array p_tangents = (Array) []);
void add_uv(Vector2 p_uv);
void add_uv2(Vector2 p_uv2);
void add_vertex(Vector3 p_vertex);
void add_weights(PoolRealArray p_weights);
void append_from(Mesh p_existing, int p_surface, Transform p_transform);
void begin(Mesh::PrimitiveType p_primitive);
void clear();
ArrayMesh commit(ArrayMesh p_existing = (ArrayMesh) "", int p_flags = (int) 97280);
Array commit_to_arrays();
void create_from(Mesh p_existing, int p_surface);
void create_from_blend_shape(Mesh p_existing, int p_surface, String p_blend_shape);
void deindex();
void generate_normals(bool p_flip = (bool) False);
void generate_tangents();
void index();
void set_material(Material p_material);
};
#endif