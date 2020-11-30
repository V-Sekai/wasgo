/* THIS FILE IS GENERATED */
#include "MeshInstance2D.h"
Mesh MeshInstance2D::get_mesh(){
	return Mesh::from_wasgo_id(_wasgo_MeshInstance2D_wrapper_get_mesh(wasgo_id));
}
Texture MeshInstance2D::get_normal_map(){
	return Texture::from_wasgo_id(_wasgo_MeshInstance2D_wrapper_get_normal_map(wasgo_id));
}
Texture MeshInstance2D::get_texture(){
	return Texture::from_wasgo_id(_wasgo_MeshInstance2D_wrapper_get_texture(wasgo_id));
}
void MeshInstance2D::set_mesh(Mesh p_mesh){
	_wasgo_MeshInstance2D_wrapper_set_mesh(wasgo_id, ((Variant) mesh).get_wasgo_id());
}
void MeshInstance2D::set_normal_map(Texture p_normal_map){
	_wasgo_MeshInstance2D_wrapper_set_normal_map(wasgo_id, ((Variant) normal_map).get_wasgo_id());
}
void MeshInstance2D::set_texture(Texture p_texture){
	_wasgo_MeshInstance2D_wrapper_set_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}

MeshInstance2D::MeshInstance2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
MeshInstance2D::~MeshInstance2D(){
}