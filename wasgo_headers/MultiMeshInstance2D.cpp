/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MultiMeshInstance2D.h"
MultiMesh MultiMeshInstance2D::get_multimesh(){
	return MultiMesh(_wasgo_MultiMeshInstance2D_wrapper_get_multimesh(wasgo_id));
}
Texture MultiMeshInstance2D::get_normal_map(){
	return Texture(_wasgo_MultiMeshInstance2D_wrapper_get_normal_map(wasgo_id));
}
Texture MultiMeshInstance2D::get_texture(){
	return Texture(_wasgo_MultiMeshInstance2D_wrapper_get_texture(wasgo_id));
}
void MultiMeshInstance2D::set_multimesh(MultiMesh p_multimesh){
	_wasgo_MultiMeshInstance2D_wrapper_set_multimesh(wasgo_id, p_multimesh._get_wasgo_id());
}
void MultiMeshInstance2D::set_normal_map(Texture p_normal_map){
	_wasgo_MultiMeshInstance2D_wrapper_set_normal_map(wasgo_id, p_normal_map._get_wasgo_id());
}
void MultiMeshInstance2D::set_texture(Texture p_texture){
	_wasgo_MultiMeshInstance2D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}

MultiMeshInstance2D::MultiMeshInstance2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
MultiMeshInstance2D::MultiMeshInstance2D(Node2D other) : Node2D(other._get_wasgo_id()){
}
MultiMeshInstance2D::MultiMeshInstance2D():Node2D(){
}
MultiMeshInstance2D MultiMeshInstance2D::new_instance(){
    return MultiMeshInstance2D(_wasgo_MultiMeshInstance2D_constructor());
}
WasGoID MultiMeshInstance2D::_get_wasgo_id(){
    return wasgo_id;
}
MultiMeshInstance2D::operator bool(){
    return (bool) wasgo_id;
}
