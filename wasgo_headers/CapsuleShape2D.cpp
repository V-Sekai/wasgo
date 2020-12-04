/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CapsuleShape2D.h"
float CapsuleShape2D::get_height(){
	return (float) _wasgo_CapsuleShape2D_wrapper_get_height(wasgo_id);
}
float CapsuleShape2D::get_radius(){
	return (float) _wasgo_CapsuleShape2D_wrapper_get_radius(wasgo_id);
}
void CapsuleShape2D::set_height(float p_height){
	_wasgo_CapsuleShape2D_wrapper_set_height(wasgo_id, p_height);
}
void CapsuleShape2D::set_radius(float p_radius){
	_wasgo_CapsuleShape2D_wrapper_set_radius(wasgo_id, p_radius);
}

CapsuleShape2D::CapsuleShape2D(WasGoId p_wasgo_id) : Shape2D(p_wasgo_id){
}
CapsuleShape2D::CapsuleShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_CapsuleShape2D_constructor();
}
CapsuleShape2D::new_instance(){
    return CapsuleShape2D(_wasgo_CapsuleShape2D_constructor());
}