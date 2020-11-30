/* THIS FILE IS GENERATED */
#include "CircleShape2D.h"
float CircleShape2D::get_radius(){
	return (float) _wasgo_CircleShape2D_wrapper_get_radius(wasgo_id));
}
void CircleShape2D::set_radius(float p_radius){
	_wasgo_CircleShape2D_wrapper_set_radius(wasgo_id, radius);
}

CircleShape2D::CircleShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CircleShape2D::~CircleShape2D(){
}