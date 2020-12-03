/* THIS FILE IS GENERATED */
#ifndef MESHDATATOOL_H
#define MESHDATATOOL_H

#include "wasgo\wasgo.h"

#include "ArrayMesh.h"
#include "Vector2.h"
#include "Material.h"
#include "Color.h"
#include "Reference.h"
#include "Plane.h"
#include "Vector3.h"
#include "error_list.h"
#include "Variant.h"
class MeshDataTool : public Reference{
public:
void clear();
Error commit_to_surface(ArrayMesh p_mesh);
Error create_from_surface(ArrayMesh p_mesh, int p_surface);
int get_edge_count();
PoolIntArray get_edge_faces(int p_idx);
Variant get_edge_meta(int p_idx);
int get_edge_vertex(int p_idx, int p_vertex);
int get_face_count();
int get_face_edge(int p_idx, int p_edge);
Variant get_face_meta(int p_idx);
Vector3 get_face_normal(int p_idx);
int get_face_vertex(int p_idx, int p_vertex);
int get_format();
Material get_material();
Vector3 get_vertex(int p_idx);
PoolIntArray get_vertex_bones(int p_idx);
Color get_vertex_color(int p_idx);
int get_vertex_count();
PoolIntArray get_vertex_edges(int p_idx);
PoolIntArray get_vertex_faces(int p_idx);
Variant get_vertex_meta(int p_idx);
Vector3 get_vertex_normal(int p_idx);
Plane get_vertex_tangent(int p_idx);
Vector2 get_vertex_uv(int p_idx);
Vector2 get_vertex_uv2(int p_idx);
PoolRealArray get_vertex_weights(int p_idx);
void set_edge_meta(int p_idx, Variant p_meta);
void set_face_meta(int p_idx, Variant p_meta);
void set_material(Material p_material);
void set_vertex(int p_idx, Vector3 p_vertex);
void set_vertex_bones(int p_idx, PoolIntArray p_bones);
void set_vertex_color(int p_idx, Color p_color);
void set_vertex_meta(int p_idx, Variant p_meta);
void set_vertex_normal(int p_idx, Vector3 p_normal);
void set_vertex_tangent(int p_idx, Plane p_tangent);
void set_vertex_uv(int p_idx, Vector2 p_uv);
void set_vertex_uv2(int p_idx, Vector2 p_uv2);
void set_vertex_weights(int p_idx, PoolRealArray p_weights);

protected:
MeshDataTool(WasGoId p_wasgo_id);
public:
MeshDataTool();
~MeshDataTool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MeshDataTool_wrapper_clear(WasGoId wasgo_id);
WasGoId _wasgo_MeshDataTool_wrapper_commit_to_surface(WasGoId wasgo_id, WasGoId p_mesh);
WasGoId _wasgo_MeshDataTool_wrapper_create_from_surface(WasGoId wasgo_id, WasGoId p_mesh, int p_surface);
int _wasgo_MeshDataTool_wrapper_get_edge_count(WasGoId wasgo_id);
WasGoId _wasgo_MeshDataTool_wrapper_get_edge_faces(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_MeshDataTool_wrapper_get_edge_meta(WasGoId wasgo_id, int p_idx);
int _wasgo_MeshDataTool_wrapper_get_edge_vertex(WasGoId wasgo_id, int p_idx, int p_vertex);
int _wasgo_MeshDataTool_wrapper_get_face_count(WasGoId wasgo_id);
int _wasgo_MeshDataTool_wrapper_get_face_edge(WasGoId wasgo_id, int p_idx, int p_edge);
WasGoId _wasgo_MeshDataTool_wrapper_get_face_meta(WasGoId wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_face_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_MeshDataTool_wrapper_get_face_vertex(WasGoId wasgo_id, int p_idx, int p_vertex);
int _wasgo_MeshDataTool_wrapper_get_format(WasGoId wasgo_id);
WasGoId _wasgo_MeshDataTool_wrapper_get_material(WasGoId wasgo_id);
void _wasgo_MeshDataTool_wrapper_get_vertex(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoId _wasgo_MeshDataTool_wrapper_get_vertex_bones(WasGoId wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_MeshDataTool_wrapper_get_vertex_count(WasGoId wasgo_id);
WasGoId _wasgo_MeshDataTool_wrapper_get_vertex_edges(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_MeshDataTool_wrapper_get_vertex_faces(WasGoId wasgo_id, int p_idx);
WasGoId _wasgo_MeshDataTool_wrapper_get_vertex_meta(WasGoId wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_tangent(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_uv(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_uv2(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoId _wasgo_MeshDataTool_wrapper_get_vertex_weights(WasGoId wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_set_edge_meta(WasGoId wasgo_id, int p_idx, WasGoId p_meta);
void _wasgo_MeshDataTool_wrapper_set_face_meta(WasGoId wasgo_id, int p_idx, WasGoId p_meta);
void _wasgo_MeshDataTool_wrapper_set_material(WasGoId wasgo_id, WasGoId p_material);
void _wasgo_MeshDataTool_wrapper_set_vertex(WasGoId wasgo_id, int p_idx, const uint8_t * p_vertex, int p_vertex_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_bones(WasGoId wasgo_id, int p_idx, WasGoId p_bones);
void _wasgo_MeshDataTool_wrapper_set_vertex_color(WasGoId wasgo_id, int p_idx, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_meta(WasGoId wasgo_id, int p_idx, WasGoId p_meta);
void _wasgo_MeshDataTool_wrapper_set_vertex_normal(WasGoId wasgo_id, int p_idx, const uint8_t * p_normal, int p_normal_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_tangent(WasGoId wasgo_id, int p_idx, const uint8_t * p_tangent, int p_tangent_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_uv(WasGoId wasgo_id, int p_idx, const uint8_t * p_uv, int p_uv_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_uv2(WasGoId wasgo_id, int p_idx, const uint8_t * p_uv2, int p_uv2_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_weights(WasGoId wasgo_id, int p_idx, WasGoId p_weights);

    //constructor and destructor wrappers
    WasGoId _wasgo_MeshDataTool_constructor();
    void _wasgo_MeshDataTool_destructor(WasGoId p_wasgo_id);
            
}
#endif