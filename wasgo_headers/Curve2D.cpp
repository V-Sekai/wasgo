/* THIS FILE IS GENERATED */
#include "Curve2D.h"
void Curve2D::add_point(Vector2 p_position, Vector2 p_in = (Vector2) (0, 0), Vector2 p_out = (Vector2) (0, 0), int p_at_position = (int) -1){
	_wasgo_Curve2D_wrapper_add_point(wasgo_id, ((Variant) position).get_wasgo_id(), ((Variant) in).get_wasgo_id(), ((Variant) out).get_wasgo_id(), at_position);
}
void Curve2D::clear_points(){
	_wasgo_Curve2D_wrapper_clear_points(wasgo_id);
}
float Curve2D::get_bake_interval(){
	return (float) _wasgo_Curve2D_wrapper_get_bake_interval(wasgo_id));
}
float Curve2D::get_baked_length(){
	return (float) _wasgo_Curve2D_wrapper_get_baked_length(wasgo_id));
}
PoolVector2Array Curve2D::get_baked_points(){
	return PoolVector2Array::from_wasgo_id(_wasgo_Curve2D_wrapper_get_baked_points(wasgo_id));
}
float Curve2D::get_closest_offset(Vector2 p_to_point){
	return (float) _wasgo_Curve2D_wrapper_get_closest_offset(wasgo_id, ((Variant) to_point).get_wasgo_id()));
}
Vector2 Curve2D::get_closest_point(Vector2 p_to_point){
	return Vector2::from_wasgo_id(_wasgo_Curve2D_wrapper_get_closest_point(wasgo_id, ((Variant) to_point).get_wasgo_id()));
}
int Curve2D::get_point_count(){
	return (int) _wasgo_Curve2D_wrapper_get_point_count(wasgo_id));
}
Vector2 Curve2D::get_point_in(int p_idx){
	return Vector2::from_wasgo_id(_wasgo_Curve2D_wrapper_get_point_in(wasgo_id, idx));
}
Vector2 Curve2D::get_point_out(int p_idx){
	return Vector2::from_wasgo_id(_wasgo_Curve2D_wrapper_get_point_out(wasgo_id, idx));
}
Vector2 Curve2D::get_point_position(int p_idx){
	return Vector2::from_wasgo_id(_wasgo_Curve2D_wrapper_get_point_position(wasgo_id, idx));
}
Vector2 Curve2D::interpolate(int p_idx, float p_t){
	return Vector2::from_wasgo_id(_wasgo_Curve2D_wrapper_interpolate(wasgo_id, idx, t));
}
Vector2 Curve2D::interpolate_baked(float p_offset, bool p_cubic = (bool) False){
	return Vector2::from_wasgo_id(_wasgo_Curve2D_wrapper_interpolate_baked(wasgo_id, offset, cubic));
}
Vector2 Curve2D::interpolatef(float p_fofs){
	return Vector2::from_wasgo_id(_wasgo_Curve2D_wrapper_interpolatef(wasgo_id, fofs));
}
void Curve2D::remove_point(int p_idx){
	_wasgo_Curve2D_wrapper_remove_point(wasgo_id, idx);
}
void Curve2D::set_bake_interval(float p_distance){
	_wasgo_Curve2D_wrapper_set_bake_interval(wasgo_id, distance);
}
void Curve2D::set_point_in(int p_idx, Vector2 p_position){
	_wasgo_Curve2D_wrapper_set_point_in(wasgo_id, idx, ((Variant) position).get_wasgo_id());
}
void Curve2D::set_point_out(int p_idx, Vector2 p_position){
	_wasgo_Curve2D_wrapper_set_point_out(wasgo_id, idx, ((Variant) position).get_wasgo_id());
}
void Curve2D::set_point_position(int p_idx, Vector2 p_position){
	_wasgo_Curve2D_wrapper_set_point_position(wasgo_id, idx, ((Variant) position).get_wasgo_id());
}
PoolVector2Array Curve2D::tessellate(int p_max_stages = (int) 5, float p_tolerance_degrees = (float) 4){
	return PoolVector2Array::from_wasgo_id(_wasgo_Curve2D_wrapper_tessellate(wasgo_id, max_stages, tolerance_degrees));
}

Curve2D::Curve2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Curve2D::~Curve2D(){
}