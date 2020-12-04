/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CylinderShape.h"
float CylinderShape::get_height(){
	return (float) _wasgo_CylinderShape_wrapper_get_height(wasgo_id);
}
float CylinderShape::get_radius(){
	return (float) _wasgo_CylinderShape_wrapper_get_radius(wasgo_id);
}
void CylinderShape::set_height(float p_height){
	_wasgo_CylinderShape_wrapper_set_height(wasgo_id, p_height);
}
void CylinderShape::set_radius(float p_radius){
	_wasgo_CylinderShape_wrapper_set_radius(wasgo_id, p_radius);
}

CylinderShape::CylinderShape(WasGoId p_wasgo_id) : Shape(p_wasgo_id){
}
CylinderShape::CylinderShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_CylinderShape_constructor();
}
CylinderShape::new_instance(){
    return CylinderShape(_wasgo_CylinderShape_constructor());
}