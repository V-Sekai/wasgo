/* THIS FILE IS GENERATED */
#ifndef SURFACETOOL_H
#define SURFACETOOL_H

#include "wasgo\wasgo.h"

#include "Plane.h"
#include "Color.h"
#include "Reference.h"
#include "Vector2.h"
#include "Material.h"
#include "Mesh.h"
#include "Vector3.h"
#include "Variant.h"
#include "ArrayMesh.h"
#include "Transform.h"
#include "ustring.h"
class SurfaceTool : public Reference{
public:
void add_bones(PoolIntArray p_bones);
void add_color(Color p_color);
void add_index(int p_index);
void add_normal(Vector3 p_normal);
void add_smooth_group(bool p_smooth);
void add_tangent(Plane p_tangent);
void add_triangle_fan(PoolVector3Array p_vertices, PoolVector2Array p_uvs = (PoolVector2Array) [], PoolColorArray p_colors = (PoolColorArray) [poolcolorarray], PoolVector2Array p_uv2s = (PoolVector2Array) [], PoolVector3Array p_normals = (PoolVector3Array) [], Array p_tangents = (Array) []);
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
void generate_normals(bool p_flip = (bool) false);
void generate_tangents();
void index();
void set_material(Material p_material);

protected:
public:
explicit SurfaceTool(WasGoID p_wasgo_id);
explicit SurfaceTool(Reference other);
SurfaceTool new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SurfaceTool_wrapper_add_bones(WasGoID wasgo_id, WasGoID p_bones);
void _wasgo_SurfaceTool_wrapper_add_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_add_index(WasGoID wasgo_id, int p_index);
void _wasgo_SurfaceTool_wrapper_add_normal(WasGoID wasgo_id, const uint8_t * p_normal, int p_normal_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_add_smooth_group(WasGoID wasgo_id, bool p_smooth);
void _wasgo_SurfaceTool_wrapper_add_tangent(WasGoID wasgo_id, const uint8_t * p_tangent, int p_tangent_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_add_triangle_fan(WasGoID wasgo_id, WasGoID p_vertices, WasGoID p_uvs, WasGoID p_colors, WasGoID p_uv2s, WasGoID p_normals, WasGoID p_tangents);
void _wasgo_SurfaceTool_wrapper_add_uv(WasGoID wasgo_id, const uint8_t * p_uv, int p_uv_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_add_uv2(WasGoID wasgo_id, const uint8_t * p_uv2, int p_uv2_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_add_vertex(WasGoID wasgo_id, const uint8_t * p_vertex, int p_vertex_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_add_weights(WasGoID wasgo_id, WasGoID p_weights);
void _wasgo_SurfaceTool_wrapper_append_from(WasGoID wasgo_id, WasGoID p_existing, int p_surface, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_begin(WasGoID wasgo_id, WasGoID p_primitive);
void _wasgo_SurfaceTool_wrapper_clear(WasGoID wasgo_id);
WasGoID _wasgo_SurfaceTool_wrapper_commit(WasGoID wasgo_id, WasGoID p_existing, int p_flags);
WasGoID _wasgo_SurfaceTool_wrapper_commit_to_arrays(WasGoID wasgo_id);
void _wasgo_SurfaceTool_wrapper_create_from(WasGoID wasgo_id, WasGoID p_existing, int p_surface);
void _wasgo_SurfaceTool_wrapper_create_from_blend_shape(WasGoID wasgo_id, WasGoID p_existing, int p_surface, const uint8_t * p_blend_shape, int p_blend_shape_wasgo_buffer_size);
void _wasgo_SurfaceTool_wrapper_deindex(WasGoID wasgo_id);
void _wasgo_SurfaceTool_wrapper_generate_normals(WasGoID wasgo_id, bool p_flip);
void _wasgo_SurfaceTool_wrapper_generate_tangents(WasGoID wasgo_id);
void _wasgo_SurfaceTool_wrapper_index(WasGoID wasgo_id);
void _wasgo_SurfaceTool_wrapper_set_material(WasGoID wasgo_id, WasGoID p_material);

    //constructor wrappers
    WasGoID _wasgo_SurfaceTool_constructor();
            
}
#endif