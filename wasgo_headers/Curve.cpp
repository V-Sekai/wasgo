/* THIS FILE IS GENERATED */
#include "Curve.h"
int Curve::add_point(Vector2 p_position, float p_left_tangent = (float) 0, float p_right_tangent = (float) 0, Curve::TangentMode p_left_mode = (Curve::TangentMode) 0, Curve::TangentMode p_right_mode = (Curve::TangentMode) 0){
	return (int) _wasgo_Curve_wrapper_add_point(wasgo_id, ((Variant) p_position).get_wasgo_id(), p_left_tangent, p_right_tangent, ((Variant) p_left_mode).get_wasgo_id(), ((Variant) p_right_mode).get_wasgo_id());
}
void Curve::bake(){
	_wasgo_Curve_wrapper_bake(wasgo_id);
}
void Curve::clean_dupes(){
	_wasgo_Curve_wrapper_clean_dupes(wasgo_id);
}
void Curve::clear_points(){
	_wasgo_Curve_wrapper_clear_points(wasgo_id);
}
int Curve::get_bake_resolution(){
	return (int) _wasgo_Curve_wrapper_get_bake_resolution(wasgo_id);
}
float Curve::get_max_value(){
	return (float) _wasgo_Curve_wrapper_get_max_value(wasgo_id);
}
float Curve::get_min_value(){
	return (float) _wasgo_Curve_wrapper_get_min_value(wasgo_id);
}
int Curve::get_point_count(){
	return (int) _wasgo_Curve_wrapper_get_point_count(wasgo_id);
}
Curve::TangentMode Curve::get_point_left_mode(int p_index){
	return Curve::TangentMode::from_wasgo_id(_wasgo_Curve_wrapper_get_point_left_mode(wasgo_id, p_index));
}
float Curve::get_point_left_tangent(int p_index){
	return (float) _wasgo_Curve_wrapper_get_point_left_tangent(wasgo_id, p_index);
}
Vector2 Curve::get_point_position(int p_index){
	return Vector2::from_wasgo_id(_wasgo_Curve_wrapper_get_point_position(wasgo_id, p_index));
}
Curve::TangentMode Curve::get_point_right_mode(int p_index){
	return Curve::TangentMode::from_wasgo_id(_wasgo_Curve_wrapper_get_point_right_mode(wasgo_id, p_index));
}
float Curve::get_point_right_tangent(int p_index){
	return (float) _wasgo_Curve_wrapper_get_point_right_tangent(wasgo_id, p_index);
}
float Curve::interpolate(float p_offset){
	return (float) _wasgo_Curve_wrapper_interpolate(wasgo_id, p_offset);
}
float Curve::interpolate_baked(float p_offset){
	return (float) _wasgo_Curve_wrapper_interpolate_baked(wasgo_id, p_offset);
}
void Curve::remove_point(int p_index){
	_wasgo_Curve_wrapper_remove_point(wasgo_id, p_index);
}
void Curve::set_bake_resolution(int p_resolution){
	_wasgo_Curve_wrapper_set_bake_resolution(wasgo_id, p_resolution);
}
void Curve::set_max_value(float p_max){
	_wasgo_Curve_wrapper_set_max_value(wasgo_id, p_max);
}
void Curve::set_min_value(float p_min){
	_wasgo_Curve_wrapper_set_min_value(wasgo_id, p_min);
}
void Curve::set_point_left_mode(int p_index, Curve::TangentMode p_mode){
	_wasgo_Curve_wrapper_set_point_left_mode(wasgo_id, p_index, ((Variant) p_mode).get_wasgo_id());
}
void Curve::set_point_left_tangent(int p_index, float p_tangent){
	_wasgo_Curve_wrapper_set_point_left_tangent(wasgo_id, p_index, p_tangent);
}
int Curve::set_point_offset(int p_index, float p_offset){
	return (int) _wasgo_Curve_wrapper_set_point_offset(wasgo_id, p_index, p_offset);
}
void Curve::set_point_right_mode(int p_index, Curve::TangentMode p_mode){
	_wasgo_Curve_wrapper_set_point_right_mode(wasgo_id, p_index, ((Variant) p_mode).get_wasgo_id());
}
void Curve::set_point_right_tangent(int p_index, float p_tangent){
	_wasgo_Curve_wrapper_set_point_right_tangent(wasgo_id, p_index, p_tangent);
}
void Curve::set_point_value(int p_index, float p_y){
	_wasgo_Curve_wrapper_set_point_value(wasgo_id, p_index, p_y);
}