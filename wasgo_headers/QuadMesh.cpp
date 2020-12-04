/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "QuadMesh.h"
Vector2 QuadMesh::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_QuadMesh_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void QuadMesh::set_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_QuadMesh_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}

QuadMesh::QuadMesh(WasGoId p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
QuadMesh::QuadMesh(PrimitiveMesh other) : PrimitiveMesh(other._get_wasgo_id()){
    wasgo_id = _wasgo_QuadMesh_constructor();
}
QuadMesh::new_instance(){
    return QuadMesh(_wasgo_QuadMesh_constructor());
}