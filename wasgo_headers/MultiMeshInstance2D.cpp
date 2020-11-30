/* THIS FILE IS GENERATED */
#include "MultiMeshInstance2D.h"
MultiMesh MultiMeshInstance2D::get_multimesh(){
	return MultiMesh::from_wasgo_id(_wasgo_MultiMeshInstance2D_wrapper_get_multimesh(wasgo_id));
}
Texture MultiMeshInstance2D::get_normal_map(){
	return Texture::from_wasgo_id(_wasgo_MultiMeshInstance2D_wrapper_get_normal_map(wasgo_id));
}
Texture MultiMeshInstance2D::get_texture(){
	return Texture::from_wasgo_id(_wasgo_MultiMeshInstance2D_wrapper_get_texture(wasgo_id));
}
void MultiMeshInstance2D::set_multimesh(MultiMesh p_multimesh){
	_wasgo_MultiMeshInstance2D_wrapper_set_multimesh(wasgo_id, ((Variant) multimesh).get_wasgo_id());
}
void MultiMeshInstance2D::set_normal_map(Texture p_normal_map){
	_wasgo_MultiMeshInstance2D_wrapper_set_normal_map(wasgo_id, ((Variant) normal_map).get_wasgo_id());
}
void MultiMeshInstance2D::set_texture(Texture p_texture){
	_wasgo_MultiMeshInstance2D_wrapper_set_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}

MultiMeshInstance2D::MultiMeshInstance2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
MultiMeshInstance2D::~MultiMeshInstance2D(){
}