/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PrismMesh.h"
float PrismMesh::get_left_to_right(){
	return (float) _wasgo_PrismMesh_wrapper_get_left_to_right(wasgo_id);
}
Vector3 PrismMesh::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_PrismMesh_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
int PrismMesh::get_subdivide_depth(){
	return (int) _wasgo_PrismMesh_wrapper_get_subdivide_depth(wasgo_id);
}
int PrismMesh::get_subdivide_height(){
	return (int) _wasgo_PrismMesh_wrapper_get_subdivide_height(wasgo_id);
}
int PrismMesh::get_subdivide_width(){
	return (int) _wasgo_PrismMesh_wrapper_get_subdivide_width(wasgo_id);
}
void PrismMesh::set_left_to_right(float p_left_to_right){
	_wasgo_PrismMesh_wrapper_set_left_to_right(wasgo_id, p_left_to_right);
}
void PrismMesh::set_size(Vector3 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[16];
    int wasgo_size_size = 16;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_PrismMesh_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void PrismMesh::set_subdivide_depth(int p_segments){
	_wasgo_PrismMesh_wrapper_set_subdivide_depth(wasgo_id, p_segments);
}
void PrismMesh::set_subdivide_height(int p_segments){
	_wasgo_PrismMesh_wrapper_set_subdivide_height(wasgo_id, p_segments);
}
void PrismMesh::set_subdivide_width(int p_segments){
	_wasgo_PrismMesh_wrapper_set_subdivide_width(wasgo_id, p_segments);
}

PrismMesh::PrismMesh(WasGoID p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
PrismMesh::PrismMesh(PrimitiveMesh other) : PrimitiveMesh(other._get_wasgo_id()){
    wasgo_id = _wasgo_PrismMesh_constructor();
}
PrismMesh::new_instance(){
    return PrismMesh(_wasgo_PrismMesh_constructor());
}