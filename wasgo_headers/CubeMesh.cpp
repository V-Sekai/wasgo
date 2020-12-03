/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CubeMesh.h"
Vector3 CubeMesh::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_CubeMesh_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
int CubeMesh::get_subdivide_depth(){
	return (int) _wasgo_CubeMesh_wrapper_get_subdivide_depth(wasgo_id);
}
int CubeMesh::get_subdivide_height(){
	return (int) _wasgo_CubeMesh_wrapper_get_subdivide_height(wasgo_id);
}
int CubeMesh::get_subdivide_width(){
	return (int) _wasgo_CubeMesh_wrapper_get_subdivide_width(wasgo_id);
}
void CubeMesh::set_size(Vector3 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[16];
    int wasgo_size_size = 16;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_CubeMesh_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void CubeMesh::set_subdivide_depth(int p_divisions){
	_wasgo_CubeMesh_wrapper_set_subdivide_depth(wasgo_id, p_divisions);
}
void CubeMesh::set_subdivide_height(int p_divisions){
	_wasgo_CubeMesh_wrapper_set_subdivide_height(wasgo_id, p_divisions);
}
void CubeMesh::set_subdivide_width(int p_subdivide){
	_wasgo_CubeMesh_wrapper_set_subdivide_width(wasgo_id, p_subdivide);
}

CubeMesh::CubeMesh(WasGoId p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
CubeMesh::CubeMesh(){
    wasgo_id = _wasgo_CubeMesh_constructor();
}
CubeMesh::~CubeMesh(){
    _wasgo_CubeMesh_destructor(wasgo_id);
}