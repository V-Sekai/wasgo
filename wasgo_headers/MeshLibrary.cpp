/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MeshLibrary.h"
void MeshLibrary::clear(){
	_wasgo_MeshLibrary_wrapper_clear(wasgo_id);
}
void MeshLibrary::create_item(int p_id){
	_wasgo_MeshLibrary_wrapper_create_item(wasgo_id, p_id);
}
int MeshLibrary::find_item_by_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (int) _wasgo_MeshLibrary_wrapper_find_item_by_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
PoolIntArray MeshLibrary::get_item_list(){
	return PoolIntArray(_wasgo_MeshLibrary_wrapper_get_item_list(wasgo_id));
}
Mesh MeshLibrary::get_item_mesh(int p_id){
	return Mesh(_wasgo_MeshLibrary_wrapper_get_item_mesh(wasgo_id, p_id));
}
String MeshLibrary::get_item_name(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_MeshLibrary_wrapper_get_item_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
NavigationMesh MeshLibrary::get_item_navmesh(int p_id){
	return NavigationMesh(_wasgo_MeshLibrary_wrapper_get_item_navmesh(wasgo_id, p_id));
}
Transform MeshLibrary::get_item_navmesh_transform(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_MeshLibrary_wrapper_get_item_navmesh_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Texture MeshLibrary::get_item_preview(int p_id){
	return Texture(_wasgo_MeshLibrary_wrapper_get_item_preview(wasgo_id, p_id));
}
Array MeshLibrary::get_item_shapes(int p_id){
	return Array(_wasgo_MeshLibrary_wrapper_get_item_shapes(wasgo_id, p_id));
}
int MeshLibrary::get_last_unused_item_id(){
	return (int) _wasgo_MeshLibrary_wrapper_get_last_unused_item_id(wasgo_id);
}
void MeshLibrary::remove_item(int p_id){
	_wasgo_MeshLibrary_wrapper_remove_item(wasgo_id, p_id);
}
void MeshLibrary::set_item_mesh(int p_id, Mesh p_mesh){
	_wasgo_MeshLibrary_wrapper_set_item_mesh(wasgo_id, p_id, p_mesh._get_wasgo_id());
}
void MeshLibrary::set_item_name(int p_id, String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_MeshLibrary_wrapper_set_item_name(wasgo_id, p_id, wasgo_buffer_name, wasgo_size_name);
}
void MeshLibrary::set_item_navmesh(int p_id, NavigationMesh p_navmesh){
	_wasgo_MeshLibrary_wrapper_set_item_navmesh(wasgo_id, p_id, p_navmesh._get_wasgo_id());
}
void MeshLibrary::set_item_navmesh_transform(int p_id, Transform p_navmesh){

    Variant wasgo_var_navmesh = p_navmesh;
    uint8_t wasgo_buffer_navmesh[52];
    int wasgo_size_navmesh = 52;
    encode_variant(wasgo_var_navmesh, wasgo_buffer_navmesh, wasgo_size_navmesh);
    
	_wasgo_MeshLibrary_wrapper_set_item_navmesh_transform(wasgo_id, p_id, wasgo_buffer_navmesh, wasgo_size_navmesh);
}
void MeshLibrary::set_item_preview(int p_id, Texture p_texture){
	_wasgo_MeshLibrary_wrapper_set_item_preview(wasgo_id, p_id, p_texture._get_wasgo_id());
}
void MeshLibrary::set_item_shapes(int p_id, Array p_shapes){
	_wasgo_MeshLibrary_wrapper_set_item_shapes(wasgo_id, p_id, p_shapes._get_wasgo_id());
}

MeshLibrary::MeshLibrary(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
MeshLibrary::MeshLibrary(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_MeshLibrary_constructor();
}
MeshLibrary::new_instance(){
    return MeshLibrary(_wasgo_MeshLibrary_constructor());
}