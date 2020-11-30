/* THIS FILE IS GENERATED */
#ifndef SURFACETOOL_H
#define SURFACETOOL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ArrayMesh.h"
#include "Mesh.h"
#include "Reference.h"
#include "Variant.h"
#include "Material.h"
class SurfaceTool : public Reference{
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

SurfaceTool(WasGoId p_wasgo_id);
~SurfaceTool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SurfaceTool_wrapper_add_bones(WasGoId wasgo_id, WasGo::WasGoId p_bones);
void _wasgo_SurfaceTool_wrapper_add_color(WasGoId wasgo_id, WasGo::WasGoId p_color);
void _wasgo_SurfaceTool_wrapper_add_index(WasGoId wasgo_id, int p_index);
void _wasgo_SurfaceTool_wrapper_add_normal(WasGoId wasgo_id, WasGo::WasGoId p_normal);
void _wasgo_SurfaceTool_wrapper_add_smooth_group(WasGoId wasgo_id, bool p_smooth);
void _wasgo_SurfaceTool_wrapper_add_tangent(WasGoId wasgo_id, WasGo::WasGoId p_tangent);
void _wasgo_SurfaceTool_wrapper_add_triangle_fan(WasGoId wasgo_id, WasGo::WasGoId p_vertices, WasGo::WasGoId p_uvs, WasGo::WasGoId p_colors, WasGo::WasGoId p_uv2s, WasGo::WasGoId p_normals, WasGo::WasGoId p_tangents);
void _wasgo_SurfaceTool_wrapper_add_uv(WasGoId wasgo_id, WasGo::WasGoId p_uv);
void _wasgo_SurfaceTool_wrapper_add_uv2(WasGoId wasgo_id, WasGo::WasGoId p_uv2);
void _wasgo_SurfaceTool_wrapper_add_vertex(WasGoId wasgo_id, WasGo::WasGoId p_vertex);
void _wasgo_SurfaceTool_wrapper_add_weights(WasGoId wasgo_id, WasGo::WasGoId p_weights);
void _wasgo_SurfaceTool_wrapper_append_from(WasGoId wasgo_id, WasGo::WasGoId p_existing, int p_surface, WasGo::WasGoId p_transform);
void _wasgo_SurfaceTool_wrapper_begin(WasGoId wasgo_id, WasGo::WasGoId p_primitive);
void _wasgo_SurfaceTool_wrapper_clear(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_SurfaceTool_wrapper_commit(WasGoId wasgo_id, WasGo::WasGoId p_existing, int p_flags);
WasGo::WasGoId _wasgo_SurfaceTool_wrapper_commit_to_arrays(WasGoId wasgo_id);
void _wasgo_SurfaceTool_wrapper_create_from(WasGoId wasgo_id, WasGo::WasGoId p_existing, int p_surface);
void _wasgo_SurfaceTool_wrapper_create_from_blend_shape(WasGoId wasgo_id, WasGo::WasGoId p_existing, int p_surface, WasGo::WasGoId p_blend_shape);
void _wasgo_SurfaceTool_wrapper_deindex(WasGoId wasgo_id);
void _wasgo_SurfaceTool_wrapper_generate_normals(WasGoId wasgo_id, bool p_flip);
void _wasgo_SurfaceTool_wrapper_generate_tangents(WasGoId wasgo_id);
void _wasgo_SurfaceTool_wrapper_index(WasGoId wasgo_id);
void _wasgo_SurfaceTool_wrapper_set_material(WasGoId wasgo_id, WasGo::WasGoId p_material);
}
#endif