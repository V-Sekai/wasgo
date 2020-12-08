/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PrimitiveMesh.h"
::AABB PrimitiveMesh::get_custom_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_PrimitiveMesh_wrapper_get_custom_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
bool PrimitiveMesh::get_flip_faces(){
	return (bool) _wasgo_PrimitiveMesh_wrapper_get_flip_faces(wasgo_id);
}
Material PrimitiveMesh::get_material(){
	return Material(_wasgo_PrimitiveMesh_wrapper_get_material(wasgo_id));
}
Array PrimitiveMesh::get_mesh_arrays(){
	return Array(_wasgo_PrimitiveMesh_wrapper_get_mesh_arrays(wasgo_id));
}
void PrimitiveMesh::set_custom_aabb(::AABB p_aabb){

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    
	_wasgo_PrimitiveMesh_wrapper_set_custom_aabb(wasgo_id, wasgo_buffer_aabb, wasgo_size_aabb);
}
void PrimitiveMesh::set_flip_faces(bool p_flip_faces){
	_wasgo_PrimitiveMesh_wrapper_set_flip_faces(wasgo_id, p_flip_faces);
}
void PrimitiveMesh::set_material(Material p_material){
	_wasgo_PrimitiveMesh_wrapper_set_material(wasgo_id, p_material._get_wasgo_id());
}

PrimitiveMesh::PrimitiveMesh(WasGoID p_wasgo_id) : Mesh(p_wasgo_id){
}
PrimitiveMesh::PrimitiveMesh(Mesh other) : Mesh(other._get_wasgo_id()){
}
PrimitiveMesh::PrimitiveMesh():Mesh(){
}
PrimitiveMesh PrimitiveMesh::new_instance(){
    return PrimitiveMesh(_wasgo_PrimitiveMesh_constructor());
}
WasGoID PrimitiveMesh::_get_wasgo_id(){
    return wasgo_id;
}
PrimitiveMesh::operator bool(){
    return (bool) wasgo_id;
}
