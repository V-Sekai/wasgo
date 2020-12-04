/* THIS FILE IS GENERATED */
#ifndef MESHDATATOOL_H
#define MESHDATATOOL_H

#include "wasgo\wasgo.h"

#include "Plane.h"
#include "Color.h"
#include "Reference.h"
#include "Vector2.h"
#include "Material.h"
#include "Vector3.h"
#include "Variant.h"
#include "error_list.h"
#include "ArrayMesh.h"
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
public:
explicit MeshDataTool(WasGoID p_wasgo_id);
explicit MeshDataTool(Reference other);
MeshDataTool new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MeshDataTool_wrapper_clear(WasGoID wasgo_id);
WasGoID _wasgo_MeshDataTool_wrapper_commit_to_surface(WasGoID wasgo_id, WasGoID p_mesh);
WasGoID _wasgo_MeshDataTool_wrapper_create_from_surface(WasGoID wasgo_id, WasGoID p_mesh, int p_surface);
int _wasgo_MeshDataTool_wrapper_get_edge_count(WasGoID wasgo_id);
WasGoID _wasgo_MeshDataTool_wrapper_get_edge_faces(WasGoID wasgo_id, int p_idx);
WasGoID _wasgo_MeshDataTool_wrapper_get_edge_meta(WasGoID wasgo_id, int p_idx);
int _wasgo_MeshDataTool_wrapper_get_edge_vertex(WasGoID wasgo_id, int p_idx, int p_vertex);
int _wasgo_MeshDataTool_wrapper_get_face_count(WasGoID wasgo_id);
int _wasgo_MeshDataTool_wrapper_get_face_edge(WasGoID wasgo_id, int p_idx, int p_edge);
WasGoID _wasgo_MeshDataTool_wrapper_get_face_meta(WasGoID wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_face_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_MeshDataTool_wrapper_get_face_vertex(WasGoID wasgo_id, int p_idx, int p_vertex);
int _wasgo_MeshDataTool_wrapper_get_format(WasGoID wasgo_id);
WasGoID _wasgo_MeshDataTool_wrapper_get_material(WasGoID wasgo_id);
void _wasgo_MeshDataTool_wrapper_get_vertex(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoID _wasgo_MeshDataTool_wrapper_get_vertex_bones(WasGoID wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_MeshDataTool_wrapper_get_vertex_count(WasGoID wasgo_id);
WasGoID _wasgo_MeshDataTool_wrapper_get_vertex_edges(WasGoID wasgo_id, int p_idx);
WasGoID _wasgo_MeshDataTool_wrapper_get_vertex_faces(WasGoID wasgo_id, int p_idx);
WasGoID _wasgo_MeshDataTool_wrapper_get_vertex_meta(WasGoID wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_normal(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_tangent(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_uv(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_MeshDataTool_wrapper_get_vertex_uv2(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoID _wasgo_MeshDataTool_wrapper_get_vertex_weights(WasGoID wasgo_id, int p_idx);
void _wasgo_MeshDataTool_wrapper_set_edge_meta(WasGoID wasgo_id, int p_idx, WasGoID p_meta);
void _wasgo_MeshDataTool_wrapper_set_face_meta(WasGoID wasgo_id, int p_idx, WasGoID p_meta);
void _wasgo_MeshDataTool_wrapper_set_material(WasGoID wasgo_id, WasGoID p_material);
void _wasgo_MeshDataTool_wrapper_set_vertex(WasGoID wasgo_id, int p_idx, const uint8_t * p_vertex, int p_vertex_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_bones(WasGoID wasgo_id, int p_idx, WasGoID p_bones);
void _wasgo_MeshDataTool_wrapper_set_vertex_color(WasGoID wasgo_id, int p_idx, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_meta(WasGoID wasgo_id, int p_idx, WasGoID p_meta);
void _wasgo_MeshDataTool_wrapper_set_vertex_normal(WasGoID wasgo_id, int p_idx, const uint8_t * p_normal, int p_normal_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_tangent(WasGoID wasgo_id, int p_idx, const uint8_t * p_tangent, int p_tangent_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_uv(WasGoID wasgo_id, int p_idx, const uint8_t * p_uv, int p_uv_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_uv2(WasGoID wasgo_id, int p_idx, const uint8_t * p_uv2, int p_uv2_wasgo_buffer_size);
void _wasgo_MeshDataTool_wrapper_set_vertex_weights(WasGoID wasgo_id, int p_idx, WasGoID p_weights);

    //constructor wrappers
    WasGoID _wasgo_MeshDataTool_constructor();
            
}
#endif