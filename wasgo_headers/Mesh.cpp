/* THIS FILE IS GENERATED */
#include "Mesh.h"
Shape Mesh::create_convex_shape(){
	return Shape::from_wasgo_id(_wasgo_Mesh_wrapper_create_convex_shape(wasgo_id));
}
Mesh Mesh::create_outline(float p_margin){
	return Mesh::from_wasgo_id(_wasgo_Mesh_wrapper_create_outline(wasgo_id, p_margin));
}
Shape Mesh::create_trimesh_shape(){
	return Shape::from_wasgo_id(_wasgo_Mesh_wrapper_create_trimesh_shape(wasgo_id));
}
TriangleMesh Mesh::generate_triangle_mesh(){
	return TriangleMesh::from_wasgo_id(_wasgo_Mesh_wrapper_generate_triangle_mesh(wasgo_id));
}
::AABB Mesh::get_aabb(){
	return ::AABB::from_wasgo_id(_wasgo_Mesh_wrapper_get_aabb(wasgo_id));
}
PoolVector3Array Mesh::get_faces(){
	return PoolVector3Array::from_wasgo_id(_wasgo_Mesh_wrapper_get_faces(wasgo_id));
}
Vector2 Mesh::get_lightmap_size_hint(){
	return Vector2::from_wasgo_id(_wasgo_Mesh_wrapper_get_lightmap_size_hint(wasgo_id));
}
int Mesh::get_surface_count(){
	return (int) _wasgo_Mesh_wrapper_get_surface_count(wasgo_id);
}
void Mesh::set_lightmap_size_hint(Vector2 p_size){
	_wasgo_Mesh_wrapper_set_lightmap_size_hint(wasgo_id, ((Variant) p_size).get_wasgo_id());
}
Array Mesh::surface_get_arrays(int p_surf_idx){
	return Array::from_wasgo_id(_wasgo_Mesh_wrapper_surface_get_arrays(wasgo_id, p_surf_idx));
}
Array Mesh::surface_get_blend_shape_arrays(int p_surf_idx){
	return Array::from_wasgo_id(_wasgo_Mesh_wrapper_surface_get_blend_shape_arrays(wasgo_id, p_surf_idx));
}
Material Mesh::surface_get_material(int p_surf_idx){
	return Material::from_wasgo_id(_wasgo_Mesh_wrapper_surface_get_material(wasgo_id, p_surf_idx));
}
void Mesh::surface_set_material(int p_surf_idx, Material p_material){
	_wasgo_Mesh_wrapper_surface_set_material(wasgo_id, p_surf_idx, ((Variant) p_material).get_wasgo_id());
}