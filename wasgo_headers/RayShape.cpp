/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RayShape.h"
float RayShape::get_length(){
	return (float) _wasgo_RayShape_wrapper_get_length(wasgo_id);
}
bool RayShape::get_slips_on_slope(){
	return (bool) _wasgo_RayShape_wrapper_get_slips_on_slope(wasgo_id);
}
void RayShape::set_length(float p_length){
	_wasgo_RayShape_wrapper_set_length(wasgo_id, p_length);
}
void RayShape::set_slips_on_slope(bool p_active){
	_wasgo_RayShape_wrapper_set_slips_on_slope(wasgo_id, p_active);
}

RayShape::RayShape(WasGoId p_wasgo_id) : Shape(p_wasgo_id){
}
RayShape::RayShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_RayShape_constructor();
}
RayShape::new_instance(){
    return RayShape(_wasgo_RayShape_constructor());
}