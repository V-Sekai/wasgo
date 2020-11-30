/* THIS FILE IS GENERATED */
#include "Bone2D.h"
void Bone2D::apply_rest(){
	_wasgo_Bone2D_wrapper_apply_rest(wasgo_id);
}
float Bone2D::get_default_length(){
	return (float) _wasgo_Bone2D_wrapper_get_default_length(wasgo_id));
}
int Bone2D::get_index_in_skeleton(){
	return (int) _wasgo_Bone2D_wrapper_get_index_in_skeleton(wasgo_id));
}
Transform2D Bone2D::get_rest(){
	return Transform2D::from_wasgo_id(_wasgo_Bone2D_wrapper_get_rest(wasgo_id));
}
Transform2D Bone2D::get_skeleton_rest(){
	return Transform2D::from_wasgo_id(_wasgo_Bone2D_wrapper_get_skeleton_rest(wasgo_id));
}
void Bone2D::set_default_length(float p_default_length){
	_wasgo_Bone2D_wrapper_set_default_length(wasgo_id, default_length);
}
void Bone2D::set_rest(Transform2D p_rest){
	_wasgo_Bone2D_wrapper_set_rest(wasgo_id, ((Variant) rest).get_wasgo_id());
}

Bone2D::Bone2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Bone2D::~Bone2D(){
}