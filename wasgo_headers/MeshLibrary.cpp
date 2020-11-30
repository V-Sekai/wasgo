/* THIS FILE IS GENERATED */
#include "MeshLibrary.h"
void MeshLibrary::clear(){
	_wasgo_MeshLibrary_wrapper_clear(wasgo_id);
}
void MeshLibrary::create_item(int p_id){
	_wasgo_MeshLibrary_wrapper_create_item(wasgo_id, id);
}
int MeshLibrary::find_item_by_name(String p_name){
	return (int) _wasgo_MeshLibrary_wrapper_find_item_by_name(wasgo_id, ((Variant) name).get_wasgo_id()));
}
PoolIntArray MeshLibrary::get_item_list(){
	return PoolIntArray::from_wasgo_id(_wasgo_MeshLibrary_wrapper_get_item_list(wasgo_id));
}
Mesh MeshLibrary::get_item_mesh(int p_id){
	return Mesh::from_wasgo_id(_wasgo_MeshLibrary_wrapper_get_item_mesh(wasgo_id, id));
}
String MeshLibrary::get_item_name(int p_id){
	return String::from_wasgo_id(_wasgo_MeshLibrary_wrapper_get_item_name(wasgo_id, id));
}
NavigationMesh MeshLibrary::get_item_navmesh(int p_id){
	return NavigationMesh::from_wasgo_id(_wasgo_MeshLibrary_wrapper_get_item_navmesh(wasgo_id, id));
}
Transform MeshLibrary::get_item_navmesh_transform(int p_id){
	return Transform::from_wasgo_id(_wasgo_MeshLibrary_wrapper_get_item_navmesh_transform(wasgo_id, id));
}
Texture MeshLibrary::get_item_preview(int p_id){
	return Texture::from_wasgo_id(_wasgo_MeshLibrary_wrapper_get_item_preview(wasgo_id, id));
}
Array MeshLibrary::get_item_shapes(int p_id){
	return Array::from_wasgo_id(_wasgo_MeshLibrary_wrapper_get_item_shapes(wasgo_id, id));
}
int MeshLibrary::get_last_unused_item_id(){
	return (int) _wasgo_MeshLibrary_wrapper_get_last_unused_item_id(wasgo_id));
}
void MeshLibrary::remove_item(int p_id){
	_wasgo_MeshLibrary_wrapper_remove_item(wasgo_id, id);
}
void MeshLibrary::set_item_mesh(int p_id, Mesh p_mesh){
	_wasgo_MeshLibrary_wrapper_set_item_mesh(wasgo_id, id, ((Variant) mesh).get_wasgo_id());
}
void MeshLibrary::set_item_name(int p_id, String p_name){
	_wasgo_MeshLibrary_wrapper_set_item_name(wasgo_id, id, ((Variant) name).get_wasgo_id());
}
void MeshLibrary::set_item_navmesh(int p_id, NavigationMesh p_navmesh){
	_wasgo_MeshLibrary_wrapper_set_item_navmesh(wasgo_id, id, ((Variant) navmesh).get_wasgo_id());
}
void MeshLibrary::set_item_navmesh_transform(int p_id, Transform p_navmesh){
	_wasgo_MeshLibrary_wrapper_set_item_navmesh_transform(wasgo_id, id, ((Variant) navmesh).get_wasgo_id());
}
void MeshLibrary::set_item_preview(int p_id, Texture p_texture){
	_wasgo_MeshLibrary_wrapper_set_item_preview(wasgo_id, id, ((Variant) texture).get_wasgo_id());
}
void MeshLibrary::set_item_shapes(int p_id, Array p_shapes){
	_wasgo_MeshLibrary_wrapper_set_item_shapes(wasgo_id, id, ((Variant) shapes).get_wasgo_id());
}

MeshLibrary::MeshLibrary(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
MeshLibrary::~MeshLibrary(){
}