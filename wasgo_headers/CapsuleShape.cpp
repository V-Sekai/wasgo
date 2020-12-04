/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CapsuleShape.h"
float CapsuleShape::get_height(){
	return (float) _wasgo_CapsuleShape_wrapper_get_height(wasgo_id);
}
float CapsuleShape::get_radius(){
	return (float) _wasgo_CapsuleShape_wrapper_get_radius(wasgo_id);
}
void CapsuleShape::set_height(float p_height){
	_wasgo_CapsuleShape_wrapper_set_height(wasgo_id, p_height);
}
void CapsuleShape::set_radius(float p_radius){
	_wasgo_CapsuleShape_wrapper_set_radius(wasgo_id, p_radius);
}

CapsuleShape::CapsuleShape(WasGoId p_wasgo_id) : Shape(p_wasgo_id){
}
CapsuleShape::CapsuleShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_CapsuleShape_constructor();
}
CapsuleShape::new_instance(){
    return CapsuleShape(_wasgo_CapsuleShape_constructor());
}