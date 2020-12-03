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
SphereShape::SphereShape(){
    wasgo_id = _wasgo_SphereShape_constructor();
}
SphereShape::~SphereShape(){
    _wasgo_SphereShape_destructor(wasgo_id);
}