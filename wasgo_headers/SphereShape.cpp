/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SphereShape.h"
float SphereShape::get_radius(){
	return (float) _wasgo_SphereShape_wrapper_get_radius(wasgo_id);
}
void SphereShape::set_radius(float p_radius){
	_wasgo_SphereShape_wrapper_set_radius(wasgo_id, p_radius);
}

SphereShape::SphereShape(WasGoId p_wasgo_id) : Shape(p_wasgo_id){
}
SphereShape::SphereShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_SphereShape_constructor();
}
SphereShape::new_instance(){
    return SphereShape(_wasgo_SphereShape_constructor());
}