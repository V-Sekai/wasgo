/* THIS FILE IS GENERATED */
#include "ArrayMesh.h"
void ArrayMesh::add_blend_shape(String p_name){
	_wasgo_ArrayMesh_wrapper_add_blend_shape(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
void ArrayMesh::add_surface_from_arrays(Mesh::PrimitiveType p_primitive, Array p_arrays, Array p_blend_shapes = (Array) [], int p_compress_flags = (int) 97280){
	_wasgo_ArrayMesh_wrapper_add_surface_from_arrays(wasgo_id, ((Variant) p_primitive).get_wasgo_id(), ((Variant) p_arrays).get_wasgo_id(), ((Variant) p_blend_shapes).get_wasgo_id(), p_compress_flags);
}
void ArrayMesh::clear_blend_shapes(){
	_wasgo_ArrayMesh_wrapper_clear_blend_shapes(wasgo_id);
}
int ArrayMesh::get_blend_shape_count(){
	return (int) _wasgo_ArrayMesh_wrapper_get_blend_shape_count(wasgo_id);
}
Mesh::BlendShapeMode ArrayMesh::get_blend_shape_mode(){
	return Mesh::BlendShapeMode::from_wasgo_id(_wasgo_ArrayMesh_wrapper_get_blend_shape_mode(wasgo_id));
}
String ArrayMesh::get_blend_shape_name(int p_index){
	return String::from_wasgo_id(_wasgo_ArrayMesh_wrapper_get_blend_shape_name(wasgo_id, p_index));
}
::AABB ArrayMesh::get_custom_aabb(){
	return ::AABB::from_wasgo_id(_wasgo_ArrayMesh_wrapper_get_custom_aabb(wasgo_id));
}
Error ArrayMesh::lightmap_unwrap(Transform p_transform, float p_texel_size){
	return Error::from_wasgo_id(_wasgo_ArrayMesh_wrapper_lightmap_unwrap(wasgo_id, ((Variant) p_transform).get_wasgo_id(), p_texel_size));
}
void ArrayMesh::regen_normalmaps(){
	_wasgo_ArrayMesh_wrapper_regen_normalmaps(wasgo_id);
}
void ArrayMesh::set_blend_shape_mode(Mesh::BlendShapeMode p_mode){
	_wasgo_ArrayMesh_wrapper_set_blend_shape_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void ArrayMesh::set_custom_aabb(::AABB p_aabb){
	_wasgo_ArrayMesh_wrapper_set_custom_aabb(wasgo_id, ((Variant) p_aabb).get_wasgo_id());
}
int ArrayMesh::surface_find_by_name(String p_name){
	return (int) _wasgo_ArrayMesh_wrapper_surface_find_by_name(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
int ArrayMesh::surface_get_array_index_len(int p_surf_idx){
	return (int) _wasgo_ArrayMesh_wrapper_surface_get_array_index_len(wasgo_id, p_surf_idx);
}
int ArrayMesh::surface_get_array_len(int p_surf_idx){
	return (int) _wasgo_ArrayMesh_wrapper_surface_get_array_len(wasgo_id, p_surf_idx);
}
int ArrayMesh::surface_get_format(int p_surf_idx){
	return (int) _wasgo_ArrayMesh_wrapper_surface_get_format(wasgo_id, p_surf_idx);
}
String ArrayMesh::surface_get_name(int p_surf_idx){
	return String::from_wasgo_id(_wasgo_ArrayMesh_wrapper_surface_get_name(wasgo_id, p_surf_idx));
}
Mesh::PrimitiveType ArrayMesh::surface_get_primitive_type(int p_surf_idx){
	return Mesh::PrimitiveType::from_wasgo_id(_wasgo_ArrayMesh_wrapper_surface_get_primitive_type(wasgo_id, p_surf_idx));
}
void ArrayMesh::surface_remove(int p_surf_idx){
	_wasgo_ArrayMesh_wrapper_surface_remove(wasgo_id, p_surf_idx);
}
void ArrayMesh::surface_set_name(int p_surf_idx, String p_name){
	_wasgo_ArrayMesh_wrapper_surface_set_name(wasgo_id, p_surf_idx, ((Variant) p_name).get_wasgo_id());
}
void ArrayMesh::surface_update_region(int p_surf_idx, int p_offset, PoolByteArray p_data){
	_wasgo_ArrayMesh_wrapper_surface_update_region(wasgo_id, p_surf_idx, p_offset, ((Variant) p_data).get_wasgo_id());
}