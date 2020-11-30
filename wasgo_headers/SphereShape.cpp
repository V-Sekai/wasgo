/* THIS FILE IS GENERATED */
#include "SphereShape.h"
float SphereShape::get_radius(){
	return (float) _wasgo_SphereShape_wrapper_get_radius(wasgo_id));
}
void SphereShape::set_radius(float p_radius){
	_wasgo_SphereShape_wrapper_set_radius(wasgo_id, radius);
}

SphereShape::SphereShape(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
SphereShape::~SphereShape(){
}