/* THIS FILE IS GENERATED */
#include "CapsuleShape.h"
float CapsuleShape::get_height(){
	return (float) _wasgo_CapsuleShape_wrapper_get_height(wasgo_id));
}
float CapsuleShape::get_radius(){
	return (float) _wasgo_CapsuleShape_wrapper_get_radius(wasgo_id));
}
void CapsuleShape::set_height(float p_height){
	_wasgo_CapsuleShape_wrapper_set_height(wasgo_id, height);
}
void CapsuleShape::set_radius(float p_radius){
	_wasgo_CapsuleShape_wrapper_set_radius(wasgo_id, radius);
}

CapsuleShape::CapsuleShape(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CapsuleShape::~CapsuleShape(){
}