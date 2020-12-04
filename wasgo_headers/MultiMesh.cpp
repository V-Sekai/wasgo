/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MultiMesh.h"
::AABB MultiMesh::get_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_MultiMesh_wrapper_get_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
MultiMesh::ColorFormat MultiMesh::get_color_format(){
	return MultiMesh::ColorFormat(_wasgo_MultiMesh_wrapper_get_color_format(wasgo_id));
}
MultiMesh::CustomDataFormat MultiMesh::get_custom_data_format(){
	return MultiMesh::CustomDataFormat(_wasgo_MultiMesh_wrapper_get_custom_data_format(wasgo_id));
}
Color MultiMesh::get_instance_color(int p_instance){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_MultiMesh_wrapper_get_instance_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_instance);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int MultiMesh::get_instance_count(){
	return (int) _wasgo_MultiMesh_wrapper_get_instance_count(wasgo_id);
}
Color MultiMesh::get_instance_custom_data(int p_instance){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_MultiMesh_wrapper_get_instance_custom_data(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_instance);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Transform MultiMesh::get_instance_transform(int p_instance){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_MultiMesh_wrapper_get_instance_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_instance);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Transform2D MultiMesh::get_instance_transform_2d(int p_instance){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_MultiMesh_wrapper_get_instance_transform_2d(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_instance);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
Mesh MultiMesh::get_mesh(){
	return Mesh(_wasgo_MultiMesh_wrapper_get_mesh(wasgo_id));
}
MultiMesh::TransformFormat MultiMesh::get_transform_format(){
	return MultiMesh::TransformFormat(_wasgo_MultiMesh_wrapper_get_transform_format(wasgo_id));
}
int MultiMesh::get_visible_instance_count(){
	return (int) _wasgo_MultiMesh_wrapper_get_visible_instance_count(wasgo_id);
}
void MultiMesh::set_as_bulk_array(PoolRealArray p_array){
	_wasgo_MultiMesh_wrapper_set_as_bulk_array(wasgo_id, p_array._get_wasgo_id());
}
void MultiMesh::set_color_format(MultiMesh::ColorFormat p_format){
	_wasgo_MultiMesh_wrapper_set_color_format(wasgo_id, p_format._get_wasgo_id());
}
void MultiMesh::set_custom_data_format(MultiMesh::CustomDataFormat p_format){
	_wasgo_MultiMesh_wrapper_set_custom_data_format(wasgo_id, p_format._get_wasgo_id());
}
void MultiMesh::set_instance_color(int p_instance, Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_MultiMesh_wrapper_set_instance_color(wasgo_id, p_instance, wasgo_buffer_color, wasgo_size_color);
}
void MultiMesh::set_instance_count(int p_count){
	_wasgo_MultiMesh_wrapper_set_instance_count(wasgo_id, p_count);
}
void MultiMesh::set_instance_custom_data(int p_instance, Color p_custom_data){

    Variant wasgo_var_custom_data = p_custom_data;
    uint8_t wasgo_buffer_custom_data[20];
    int wasgo_size_custom_data = 20;
    encode_variant(wasgo_var_custom_data, wasgo_buffer_custom_data, wasgo_size_custom_data);
    
	_wasgo_MultiMesh_wrapper_set_instance_custom_data(wasgo_id, p_instance, wasgo_buffer_custom_data, wasgo_size_custom_data);
}
void MultiMesh::set_instance_transform(int p_instance, Transform p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_MultiMesh_wrapper_set_instance_transform(wasgo_id, p_instance, wasgo_buffer_transform, wasgo_size_transform);
}
void MultiMesh::set_instance_transform_2d(int p_instance, Transform2D p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_MultiMesh_wrapper_set_instance_transform_2d(wasgo_id, p_instance, wasgo_buffer_transform, wasgo_size_transform);
}
void MultiMesh::set_mesh(Mesh p_mesh){
	_wasgo_MultiMesh_wrapper_set_mesh(wasgo_id, p_mesh._get_wasgo_id());
}
void MultiMesh::set_transform_format(MultiMesh::TransformFormat p_format){
	_wasgo_MultiMesh_wrapper_set_transform_format(wasgo_id, p_format._get_wasgo_id());
}
void MultiMesh::set_visible_instance_count(int p_count){
	_wasgo_MultiMesh_wrapper_set_visible_instance_count(wasgo_id, p_count);
}

MultiMesh::MultiMesh(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
MultiMesh::MultiMesh(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_MultiMesh_constructor();
}
MultiMesh::new_instance(){
    return MultiMesh(_wasgo_MultiMesh_constructor());
}