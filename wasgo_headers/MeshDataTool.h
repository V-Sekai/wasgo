/* THIS FILE IS GENERATED */
#ifndef MESHDATATOOL_H
#define MESHDATATOOL_H

#include "stdint.h"

#include "Material.h"
#include "Error.h"
#include "Reference.h"
#include "ArrayMesh.h"
#include "Variant.h"
class MeshDataTool : public Reference{
public: MeshDataTool();
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
};
#endif