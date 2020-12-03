/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Mesh.h"
Shape Mesh::create_convex_shape(){
	return Shape(_wasgo_Mesh_wrapper_create_convex_shape(wasgo_id));
}
Mesh Mesh::create_outline(float p_margin){
	return Mesh(_wasgo_Mesh_wrapper_create_outline(wasgo_id, p_margin));
}
Shape Mesh::create_trimesh_shape(){
	return Shape(_wasgo_Mesh_wrapper_create_trimesh_shape(wasgo_id));
}
TriangleMesh Mesh::generate_triangle_mesh(){
	return TriangleMesh(_wasgo_Mesh_wrapper_generate_triangle_mesh(wasgo_id));
}
::AABB Mesh::get_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Mesh_wrapper_get_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
PoolVector3Array Mesh::get_faces(){
	return PoolVector3Array(_wasgo_Mesh_wrapper_get_faces(wasgo_id));
}
Vector2 Mesh::get_lightmap_size_hint(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Mesh_wrapper_get_lightmap_size_hint(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Mesh::get_surface_count(){
	return (int) _wasgo_Mesh_wrapper_get_surface_count(wasgo_id);
}
void Mesh::set_lightmap_size_hint(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_Mesh_wrapper_set_lightmap_size_hint(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
Array Mesh::surface_get_arrays(int p_surf_idx){
	return Array(_wasgo_Mesh_wrapper_surface_get_arrays(wasgo_id, p_surf_idx));
}
Array Mesh::surface_get_blend_shape_arrays(int p_surf_idx){
	return Array(_wasgo_Mesh_wrapper_surface_get_blend_shape_arrays(wasgo_id, p_surf_idx));
}
Material Mesh::surface_get_material(int p_surf_idx){
	return Material(_wasgo_Mesh_wrapper_surface_get_material(wasgo_id, p_surf_idx));
}
void Mesh::surface_set_material(int p_surf_idx, Material p_material){
	_wasgo_Mesh_wrapper_surface_set_material(wasgo_id, p_surf_idx, p_material._get_wasgo_id());
}