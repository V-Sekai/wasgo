/* THIS FILE IS GENERATED */
#include "MeshDataTool.h"
void MeshDataTool::clear(){
	_wasgo_MeshDataTool_wrapper_clear(wasgo_id);
}
Error MeshDataTool::commit_to_surface(ArrayMesh p_mesh){
	return Error::from_wasgo_id(_wasgo_MeshDataTool_wrapper_commit_to_surface(wasgo_id, ((Variant) mesh).get_wasgo_id()));
}
Error MeshDataTool::create_from_surface(ArrayMesh p_mesh, int p_surface){
	return Error::from_wasgo_id(_wasgo_MeshDataTool_wrapper_create_from_surface(wasgo_id, ((Variant) mesh).get_wasgo_id(), surface));
}
int MeshDataTool::get_edge_count(){
	return (int) _wasgo_MeshDataTool_wrapper_get_edge_count(wasgo_id));
}
PoolIntArray MeshDataTool::get_edge_faces(int p_idx){
	return PoolIntArray::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_edge_faces(wasgo_id, idx));
}
Variant MeshDataTool::get_edge_meta(int p_idx){
	return Variant::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_edge_meta(wasgo_id, idx));
}
int MeshDataTool::get_edge_vertex(int p_idx, int p_vertex){
	return (int) _wasgo_MeshDataTool_wrapper_get_edge_vertex(wasgo_id, idx, vertex));
}
int MeshDataTool::get_face_count(){
	return (int) _wasgo_MeshDataTool_wrapper_get_face_count(wasgo_id));
}
int MeshDataTool::get_face_edge(int p_idx, int p_edge){
	return (int) _wasgo_MeshDataTool_wrapper_get_face_edge(wasgo_id, idx, edge));
}
Variant MeshDataTool::get_face_meta(int p_idx){
	return Variant::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_face_meta(wasgo_id, idx));
}
Vector3 MeshDataTool::get_face_normal(int p_idx){
	return Vector3::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_face_normal(wasgo_id, idx));
}
int MeshDataTool::get_face_vertex(int p_idx, int p_vertex){
	return (int) _wasgo_MeshDataTool_wrapper_get_face_vertex(wasgo_id, idx, vertex));
}
int MeshDataTool::get_format(){
	return (int) _wasgo_MeshDataTool_wrapper_get_format(wasgo_id));
}
Material MeshDataTool::get_material(){
	return Material::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_material(wasgo_id));
}
Vector3 MeshDataTool::get_vertex(int p_idx){
	return Vector3::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex(wasgo_id, idx));
}
PoolIntArray MeshDataTool::get_vertex_bones(int p_idx){
	return PoolIntArray::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_bones(wasgo_id, idx));
}
Color MeshDataTool::get_vertex_color(int p_idx){
	return Color::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_color(wasgo_id, idx));
}
int MeshDataTool::get_vertex_count(){
	return (int) _wasgo_MeshDataTool_wrapper_get_vertex_count(wasgo_id));
}
PoolIntArray MeshDataTool::get_vertex_edges(int p_idx){
	return PoolIntArray::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_edges(wasgo_id, idx));
}
PoolIntArray MeshDataTool::get_vertex_faces(int p_idx){
	return PoolIntArray::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_faces(wasgo_id, idx));
}
Variant MeshDataTool::get_vertex_meta(int p_idx){
	return Variant::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_meta(wasgo_id, idx));
}
Vector3 MeshDataTool::get_vertex_normal(int p_idx){
	return Vector3::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_normal(wasgo_id, idx));
}
Plane MeshDataTool::get_vertex_tangent(int p_idx){
	return Plane::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_tangent(wasgo_id, idx));
}
Vector2 MeshDataTool::get_vertex_uv(int p_idx){
	return Vector2::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_uv(wasgo_id, idx));
}
Vector2 MeshDataTool::get_vertex_uv2(int p_idx){
	return Vector2::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_uv2(wasgo_id, idx));
}
PoolRealArray MeshDataTool::get_vertex_weights(int p_idx){
	return PoolRealArray::from_wasgo_id(_wasgo_MeshDataTool_wrapper_get_vertex_weights(wasgo_id, idx));
}
void MeshDataTool::set_edge_meta(int p_idx, Variant p_meta){
	_wasgo_MeshDataTool_wrapper_set_edge_meta(wasgo_id, idx, ((Variant) meta).get_wasgo_id());
}
void MeshDataTool::set_face_meta(int p_idx, Variant p_meta){
	_wasgo_MeshDataTool_wrapper_set_face_meta(wasgo_id, idx, ((Variant) meta).get_wasgo_id());
}
void MeshDataTool::set_material(Material p_material){
	_wasgo_MeshDataTool_wrapper_set_material(wasgo_id, ((Variant) material).get_wasgo_id());
}
void MeshDataTool::set_vertex(int p_idx, Vector3 p_vertex){
	_wasgo_MeshDataTool_wrapper_set_vertex(wasgo_id, idx, ((Variant) vertex).get_wasgo_id());
}
void MeshDataTool::set_vertex_bones(int p_idx, PoolIntArray p_bones){
	_wasgo_MeshDataTool_wrapper_set_vertex_bones(wasgo_id, idx, ((Variant) bones).get_wasgo_id());
}
void MeshDataTool::set_vertex_color(int p_idx, Color p_color){
	_wasgo_MeshDataTool_wrapper_set_vertex_color(wasgo_id, idx, ((Variant) color).get_wasgo_id());
}
void MeshDataTool::set_vertex_meta(int p_idx, Variant p_meta){
	_wasgo_MeshDataTool_wrapper_set_vertex_meta(wasgo_id, idx, ((Variant) meta).get_wasgo_id());
}
void MeshDataTool::set_vertex_normal(int p_idx, Vector3 p_normal){
	_wasgo_MeshDataTool_wrapper_set_vertex_normal(wasgo_id, idx, ((Variant) normal).get_wasgo_id());
}
void MeshDataTool::set_vertex_tangent(int p_idx, Plane p_tangent){
	_wasgo_MeshDataTool_wrapper_set_vertex_tangent(wasgo_id, idx, ((Variant) tangent).get_wasgo_id());
}
void MeshDataTool::set_vertex_uv(int p_idx, Vector2 p_uv){
	_wasgo_MeshDataTool_wrapper_set_vertex_uv(wasgo_id, idx, ((Variant) uv).get_wasgo_id());
}
void MeshDataTool::set_vertex_uv2(int p_idx, Vector2 p_uv2){
	_wasgo_MeshDataTool_wrapper_set_vertex_uv2(wasgo_id, idx, ((Variant) uv2).get_wasgo_id());
}
void MeshDataTool::set_vertex_weights(int p_idx, PoolRealArray p_weights){
	_wasgo_MeshDataTool_wrapper_set_vertex_weights(wasgo_id, idx, ((Variant) weights).get_wasgo_id());
}

MeshDataTool::MeshDataTool(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
MeshDataTool::~MeshDataTool(){
}