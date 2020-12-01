/* THIS FILE IS GENERATED */
#include "MeshTexture.h"
Texture MeshTexture::get_base_texture(){
	return Texture::from_wasgo_id(_wasgo_MeshTexture_wrapper_get_base_texture(wasgo_id));
}
Vector2 MeshTexture::get_image_size(){
	return Vector2::from_wasgo_id(_wasgo_MeshTexture_wrapper_get_image_size(wasgo_id));
}
Mesh MeshTexture::get_mesh(){
	return Mesh::from_wasgo_id(_wasgo_MeshTexture_wrapper_get_mesh(wasgo_id));
}
void MeshTexture::set_base_texture(Texture p_texture){
	_wasgo_MeshTexture_wrapper_set_base_texture(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void MeshTexture::set_image_size(Vector2 p_size){
	_wasgo_MeshTexture_wrapper_set_image_size(wasgo_id, ((Variant) p_size).get_wasgo_id());
}
void MeshTexture::set_mesh(Mesh p_mesh){
	_wasgo_MeshTexture_wrapper_set_mesh(wasgo_id, ((Variant) p_mesh).get_wasgo_id());
}