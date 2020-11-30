/* THIS FILE IS GENERATED */
#include "SurfaceTool.h"
void SurfaceTool::add_bones(PoolIntArray p_bones){
	_wasgo_SurfaceTool_wrapper_add_bones(wasgo_id, ((Variant) bones).get_wasgo_id());
}
void SurfaceTool::add_color(Color p_color){
	_wasgo_SurfaceTool_wrapper_add_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void SurfaceTool::add_index(int p_index){
	_wasgo_SurfaceTool_wrapper_add_index(wasgo_id, index);
}
void SurfaceTool::add_normal(Vector3 p_normal){
	_wasgo_SurfaceTool_wrapper_add_normal(wasgo_id, ((Variant) normal).get_wasgo_id());
}
void SurfaceTool::add_smooth_group(bool p_smooth){
	_wasgo_SurfaceTool_wrapper_add_smooth_group(wasgo_id, smooth);
}
void SurfaceTool::add_tangent(Plane p_tangent){
	_wasgo_SurfaceTool_wrapper_add_tangent(wasgo_id, ((Variant) tangent).get_wasgo_id());
}
void SurfaceTool::add_triangle_fan(PoolVector3Array p_vertices, PoolVector2Array p_uvs = (PoolVector2Array) [], PoolColorArray p_colors = (PoolColorArray) [PoolColorArray], PoolVector2Array p_uv2s = (PoolVector2Array) [], PoolVector3Array p_normals = (PoolVector3Array) [], Array p_tangents = (Array) []){
	_wasgo_SurfaceTool_wrapper_add_triangle_fan(wasgo_id, ((Variant) vertices).get_wasgo_id(), ((Variant) uvs).get_wasgo_id(), ((Variant) colors).get_wasgo_id(), ((Variant) uv2s).get_wasgo_id(), ((Variant) normals).get_wasgo_id(), ((Variant) tangents).get_wasgo_id());
}
void SurfaceTool::add_uv(Vector2 p_uv){
	_wasgo_SurfaceTool_wrapper_add_uv(wasgo_id, ((Variant) uv).get_wasgo_id());
}
void SurfaceTool::add_uv2(Vector2 p_uv2){
	_wasgo_SurfaceTool_wrapper_add_uv2(wasgo_id, ((Variant) uv2).get_wasgo_id());
}
void SurfaceTool::add_vertex(Vector3 p_vertex){
	_wasgo_SurfaceTool_wrapper_add_vertex(wasgo_id, ((Variant) vertex).get_wasgo_id());
}
void SurfaceTool::add_weights(PoolRealArray p_weights){
	_wasgo_SurfaceTool_wrapper_add_weights(wasgo_id, ((Variant) weights).get_wasgo_id());
}
void SurfaceTool::append_from(Mesh p_existing, int p_surface, Transform p_transform){
	_wasgo_SurfaceTool_wrapper_append_from(wasgo_id, ((Variant) existing).get_wasgo_id(), surface, ((Variant) transform).get_wasgo_id());
}
void SurfaceTool::begin(Mesh::PrimitiveType p_primitive){
	_wasgo_SurfaceTool_wrapper_begin(wasgo_id, ((Variant) primitive).get_wasgo_id());
}
void SurfaceTool::clear(){
	_wasgo_SurfaceTool_wrapper_clear(wasgo_id);
}
ArrayMesh SurfaceTool::commit(ArrayMesh p_existing = (ArrayMesh) "", int p_flags = (int) 97280){
	return ArrayMesh::from_wasgo_id(_wasgo_SurfaceTool_wrapper_commit(wasgo_id, ((Variant) existing).get_wasgo_id(), flags));
}
Array SurfaceTool::commit_to_arrays(){
	return Array::from_wasgo_id(_wasgo_SurfaceTool_wrapper_commit_to_arrays(wasgo_id));
}
void SurfaceTool::create_from(Mesh p_existing, int p_surface){
	_wasgo_SurfaceTool_wrapper_create_from(wasgo_id, ((Variant) existing).get_wasgo_id(), surface);
}
void SurfaceTool::create_from_blend_shape(Mesh p_existing, int p_surface, String p_blend_shape){
	_wasgo_SurfaceTool_wrapper_create_from_blend_shape(wasgo_id, ((Variant) existing).get_wasgo_id(), surface, ((Variant) blend_shape).get_wasgo_id());
}
void SurfaceTool::deindex(){
	_wasgo_SurfaceTool_wrapper_deindex(wasgo_id);
}
void SurfaceTool::generate_normals(bool p_flip = (bool) False){
	_wasgo_SurfaceTool_wrapper_generate_normals(wasgo_id, flip);
}
void SurfaceTool::generate_tangents(){
	_wasgo_SurfaceTool_wrapper_generate_tangents(wasgo_id);
}
void SurfaceTool::index(){
	_wasgo_SurfaceTool_wrapper_index(wasgo_id);
}
void SurfaceTool::set_material(Material p_material){
	_wasgo_SurfaceTool_wrapper_set_material(wasgo_id, ((Variant) material).get_wasgo_id());
}

SurfaceTool::SurfaceTool(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
SurfaceTool::~SurfaceTool(){
}