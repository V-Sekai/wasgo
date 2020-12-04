/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PlaneMesh.h"
Vector2 PlaneMesh::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_PlaneMesh_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int PlaneMesh::get_subdivide_depth(){
	return (int) _wasgo_PlaneMesh_wrapper_get_subdivide_depth(wasgo_id);
}
int PlaneMesh::get_subdivide_width(){
	return (int) _wasgo_PlaneMesh_wrapper_get_subdivide_width(wasgo_id);
}
void PlaneMesh::set_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_PlaneMesh_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void PlaneMesh::set_subdivide_depth(int p_subdivide){
	_wasgo_PlaneMesh_wrapper_set_subdivide_depth(wasgo_id, p_subdivide);
}
void PlaneMesh::set_subdivide_width(int p_subdivide){
	_wasgo_PlaneMesh_wrapper_set_subdivide_width(wasgo_id, p_subdivide);
}

PlaneMesh::PlaneMesh(WasGoID p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
PlaneMesh::PlaneMesh(PrimitiveMesh other) : PrimitiveMesh(other._get_wasgo_id()){
    wasgo_id = _wasgo_PlaneMesh_constructor();
}
PlaneMesh::new_instance(){
    return PlaneMesh(_wasgo_PlaneMesh_constructor());
}