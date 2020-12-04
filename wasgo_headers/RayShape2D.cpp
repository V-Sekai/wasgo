/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RayShape2D.h"
float RayShape2D::get_length(){
	return (float) _wasgo_RayShape2D_wrapper_get_length(wasgo_id);
}
bool RayShape2D::get_slips_on_slope(){
	return (bool) _wasgo_RayShape2D_wrapper_get_slips_on_slope(wasgo_id);
}
void RayShape2D::set_length(float p_length){
	_wasgo_RayShape2D_wrapper_set_length(wasgo_id, p_length);
}
void RayShape2D::set_slips_on_slope(bool p_active){
	_wasgo_RayShape2D_wrapper_set_slips_on_slope(wasgo_id, p_active);
}

RayShape2D::RayShape2D(WasGoID p_wasgo_id) : Shape2D(p_wasgo_id){
}
RayShape2D::RayShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_RayShape2D_constructor();
}
RayShape2D::new_instance(){
    return RayShape2D(_wasgo_RayShape2D_constructor());
}