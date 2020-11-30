/* THIS FILE IS GENERATED */
#include "RayShape.h"
float RayShape::get_length(){
	return (float) _wasgo_RayShape_wrapper_get_length(wasgo_id));
}
bool RayShape::get_slips_on_slope(){
	return (bool) _wasgo_RayShape_wrapper_get_slips_on_slope(wasgo_id));
}
void RayShape::set_length(float p_length){
	_wasgo_RayShape_wrapper_set_length(wasgo_id, length);
}
void RayShape::set_slips_on_slope(bool p_active){
	_wasgo_RayShape_wrapper_set_slips_on_slope(wasgo_id, active);
}

RayShape::RayShape(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
RayShape::~RayShape(){
}