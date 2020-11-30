/* THIS FILE IS GENERATED */
#include "LineShape2D.h"
float LineShape2D::get_d(){
	return (float) _wasgo_LineShape2D_wrapper_get_d(wasgo_id));
}
Vector2 LineShape2D::get_normal(){
	return Vector2::from_wasgo_id(_wasgo_LineShape2D_wrapper_get_normal(wasgo_id));
}
void LineShape2D::set_d(float p_d){
	_wasgo_LineShape2D_wrapper_set_d(wasgo_id, d);
}
void LineShape2D::set_normal(Vector2 p_normal){
	_wasgo_LineShape2D_wrapper_set_normal(wasgo_id, ((Variant) normal).get_wasgo_id());
}

LineShape2D::LineShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
LineShape2D::~LineShape2D(){
}