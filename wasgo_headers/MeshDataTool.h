/* THIS FILE IS GENERATED */
#ifndef MESHDATATOOL_H
#define MESHDATATOOL_H

#include <stdint.h>

#include "Material.h"
#include "ArrayMesh.h"
#include "Reference.h"
#include "Vector2.h"
#include "PoolIntArray.h"
#include "Erro.h"
#include "Variant.h"
#include "PoolRealArray.h"
#include "Vector3.h"
#include "Plane.h"
class MeshDataTool : public Reference{
public: MeshDataTool();
void  clear();
void  clear();
enum.Error  commit_to_surface(ArrayMesh mesh);
enum.Error  create_from_surface(ArrayMesh mesh, int surface);
int  get_edge_count();
int  get_edge_count();
PoolIntArray  get_edge_faces(int idx);
Variant  get_edge_meta(int idx);
int  get_edge_vertex(int idx, int vertex);
int  get_face_count();
int  get_face_count();
int  get_face_edge(int idx, int edge);
Variant  get_face_meta(int idx);
Vector3  get_face_normal(int idx);
int  get_face_vertex(int idx, int vertex);
int  get_format();
int  get_format();
Material  get_material();
Material  get_material();
Vector3  get_vertex(int idx);
PoolIntArray  get_vertex_bones(int idx);
Color  get_vertex_color(int idx);
int  get_vertex_count();
int  get_vertex_count();
PoolIntArray  get_vertex_edges(int idx);
PoolIntArray  get_vertex_faces(int idx);
Variant  get_vertex_meta(int idx);
Vector3  get_vertex_normal(int idx);
Plane  get_vertex_tangent(int idx);
Vector2  get_vertex_uv(int idx);
Vector2  get_vertex_uv2(int idx);
PoolRealArray  get_vertex_weights(int idx);
void  set_edge_meta(int idx, Variant meta);
void  set_face_meta(int idx, Variant meta);
void  set_material(Material material);
void  set_vertex(int idx, Vector3 vertex);
void  set_vertex_bones(int idx, PoolIntArray bones);
void  set_vertex_color(int idx, Color color);
void  set_vertex_meta(int idx, Variant meta);
void  set_vertex_normal(int idx, Vector3 normal);
void  set_vertex_tangent(int idx, Plane tangent);
void  set_vertex_uv(int idx, Vector2 uv);
void  set_vertex_uv2(int idx, Vector2 uv2);
void  set_vertex_weights(int idx, PoolRealArray weights);
};
#endif