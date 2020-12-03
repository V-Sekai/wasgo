/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "LightOccluder2D.h"
int LightOccluder2D::get_occluder_light_mask(){
	return (int) _wasgo_LightOccluder2D_wrapper_get_occluder_light_mask(wasgo_id);
}
OccluderPolygon2D LightOccluder2D::get_occluder_polygon(){
	return OccluderPolygon2D(_wasgo_LightOccluder2D_wrapper_get_occluder_polygon(wasgo_id));
}
void LightOccluder2D::set_occluder_light_mask(int p_mask){
	_wasgo_LightOccluder2D_wrapper_set_occluder_light_mask(wasgo_id, p_mask);
}
void LightOccluder2D::set_occluder_polygon(OccluderPolygon2D p_polygon){
	_wasgo_LightOccluder2D_wrapper_set_occluder_polygon(wasgo_id, p_polygon._get_wasgo_id());
}

LightOccluder2D::LightOccluder2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
LightOccluder2D::LightOccluder2D(){
    wasgo_id = _wasgo_LightOccluder2D_constructor();
}
LightOccluder2D::~LightOccluder2D(){
    _wasgo_LightOccluder2D_destructor(wasgo_id);
}