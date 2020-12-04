/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MeshInstance2D.h"
Mesh MeshInstance2D::get_mesh(){
	return Mesh(_wasgo_MeshInstance2D_wrapper_get_mesh(wasgo_id));
}
Texture MeshInstance2D::get_normal_map(){
	return Texture(_wasgo_MeshInstance2D_wrapper_get_normal_map(wasgo_id));
}
Texture MeshInstance2D::get_texture(){
	return Texture(_wasgo_MeshInstance2D_wrapper_get_texture(wasgo_id));
}
void MeshInstance2D::set_mesh(Mesh p_mesh){
	_wasgo_MeshInstance2D_wrapper_set_mesh(wasgo_id, p_mesh._get_wasgo_id());
}
void MeshInstance2D::set_normal_map(Texture p_normal_map){
	_wasgo_MeshInstance2D_wrapper_set_normal_map(wasgo_id, p_normal_map._get_wasgo_id());
}
void MeshInstance2D::set_texture(Texture p_texture){
	_wasgo_MeshInstance2D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}

MeshInstance2D::MeshInstance2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
MeshInstance2D::MeshInstance2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_MeshInstance2D_constructor();
}
MeshInstance2D::new_instance(){
    return MeshInstance2D(_wasgo_MeshInstance2D_constructor());
}