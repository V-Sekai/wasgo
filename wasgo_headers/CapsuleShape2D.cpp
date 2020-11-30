/* THIS FILE IS GENERATED */
#include "CapsuleShape2D.h"
float CapsuleShape2D::get_height(){
	return (float) _wasgo_CapsuleShape2D_wrapper_get_height(wasgo_id));
}
float CapsuleShape2D::get_radius(){
	return (float) _wasgo_CapsuleShape2D_wrapper_get_radius(wasgo_id));
}
void CapsuleShape2D::set_height(float p_height){
	_wasgo_CapsuleShape2D_wrapper_set_height(wasgo_id, height);
}
void CapsuleShape2D::set_radius(float p_radius){
	_wasgo_CapsuleShape2D_wrapper_set_radius(wasgo_id, radius);
}

CapsuleShape2D::CapsuleShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CapsuleShape2D::~CapsuleShape2D(){
}