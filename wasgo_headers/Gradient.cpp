/* THIS FILE IS GENERATED */
#include "Gradient.h"
void Gradient::add_point(float p_offset, Color p_color){
	_wasgo_Gradient_wrapper_add_point(wasgo_id, offset, ((Variant) color).get_wasgo_id());
}
Color Gradient::get_color(int p_point){
	return Color::from_wasgo_id(_wasgo_Gradient_wrapper_get_color(wasgo_id, point));
}
PoolColorArray Gradient::get_colors(){
	return PoolColorArray::from_wasgo_id(_wasgo_Gradient_wrapper_get_colors(wasgo_id));
}
float Gradient::get_offset(int p_point){
	return (float) _wasgo_Gradient_wrapper_get_offset(wasgo_id, point));
}
PoolRealArray Gradient::get_offsets(){
	return PoolRealArray::from_wasgo_id(_wasgo_Gradient_wrapper_get_offsets(wasgo_id));
}
int Gradient::get_point_count(){
	return (int) _wasgo_Gradient_wrapper_get_point_count(wasgo_id));
}
Color Gradient::interpolate(float p_offset){
	return Color::from_wasgo_id(_wasgo_Gradient_wrapper_interpolate(wasgo_id, offset));
}
void Gradient::remove_point(int p_offset){
	_wasgo_Gradient_wrapper_remove_point(wasgo_id, offset);
}
void Gradient::set_color(int p_point, Color p_color){
	_wasgo_Gradient_wrapper_set_color(wasgo_id, point, ((Variant) color).get_wasgo_id());
}
void Gradient::set_colors(PoolColorArray p_colors){
	_wasgo_Gradient_wrapper_set_colors(wasgo_id, ((Variant) colors).get_wasgo_id());
}
void Gradient::set_offset(int p_point, float p_offset){
	_wasgo_Gradient_wrapper_set_offset(wasgo_id, point, offset);
}
void Gradient::set_offsets(PoolRealArray p_offsets){
	_wasgo_Gradient_wrapper_set_offsets(wasgo_id, ((Variant) offsets).get_wasgo_id());
}

Gradient::Gradient(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Gradient::~Gradient(){
}