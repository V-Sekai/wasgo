/* THIS FILE IS GENERATED */
#include "Line2D.h"
void Line2D::add_point(Vector2 p_position, int p_at_position = (int) -1){
	_wasgo_Line2D_wrapper_add_point(wasgo_id, ((Variant) position).get_wasgo_id(), at_position);
}
void Line2D::clear_points(){
	_wasgo_Line2D_wrapper_clear_points(wasgo_id);
}
bool Line2D::get_antialiased(){
	return (bool) _wasgo_Line2D_wrapper_get_antialiased(wasgo_id));
}
Line2D::LineCapMode Line2D::get_begin_cap_mode(){
	return Line2D::LineCapMode::from_wasgo_id(_wasgo_Line2D_wrapper_get_begin_cap_mode(wasgo_id));
}
Curve Line2D::get_curve(){
	return Curve::from_wasgo_id(_wasgo_Line2D_wrapper_get_curve(wasgo_id));
}
Color Line2D::get_default_color(){
	return Color::from_wasgo_id(_wasgo_Line2D_wrapper_get_default_color(wasgo_id));
}
Line2D::LineCapMode Line2D::get_end_cap_mode(){
	return Line2D::LineCapMode::from_wasgo_id(_wasgo_Line2D_wrapper_get_end_cap_mode(wasgo_id));
}
Gradient Line2D::get_gradient(){
	return Gradient::from_wasgo_id(_wasgo_Line2D_wrapper_get_gradient(wasgo_id));
}
Line2D::LineJointMode Line2D::get_joint_mode(){
	return Line2D::LineJointMode::from_wasgo_id(_wasgo_Line2D_wrapper_get_joint_mode(wasgo_id));
}
int Line2D::get_point_count(){
	return (int) _wasgo_Line2D_wrapper_get_point_count(wasgo_id));
}
Vector2 Line2D::get_point_position(int p_i){
	return Vector2::from_wasgo_id(_wasgo_Line2D_wrapper_get_point_position(wasgo_id, i));
}
PoolVector2Array Line2D::get_points(){
	return PoolVector2Array::from_wasgo_id(_wasgo_Line2D_wrapper_get_points(wasgo_id));
}
int Line2D::get_round_precision(){
	return (int) _wasgo_Line2D_wrapper_get_round_precision(wasgo_id));
}
float Line2D::get_sharp_limit(){
	return (float) _wasgo_Line2D_wrapper_get_sharp_limit(wasgo_id));
}
Texture Line2D::get_texture(){
	return Texture::from_wasgo_id(_wasgo_Line2D_wrapper_get_texture(wasgo_id));
}
Line2D::LineTextureMode Line2D::get_texture_mode(){
	return Line2D::LineTextureMode::from_wasgo_id(_wasgo_Line2D_wrapper_get_texture_mode(wasgo_id));
}
float Line2D::get_width(){
	return (float) _wasgo_Line2D_wrapper_get_width(wasgo_id));
}
void Line2D::remove_point(int p_i){
	_wasgo_Line2D_wrapper_remove_point(wasgo_id, i);
}
void Line2D::set_antialiased(bool p_antialiased){
	_wasgo_Line2D_wrapper_set_antialiased(wasgo_id, antialiased);
}
void Line2D::set_begin_cap_mode(Line2D::LineCapMode p_mode){
	_wasgo_Line2D_wrapper_set_begin_cap_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void Line2D::set_curve(Curve p_curve){
	_wasgo_Line2D_wrapper_set_curve(wasgo_id, ((Variant) curve).get_wasgo_id());
}
void Line2D::set_default_color(Color p_color){
	_wasgo_Line2D_wrapper_set_default_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void Line2D::set_end_cap_mode(Line2D::LineCapMode p_mode){
	_wasgo_Line2D_wrapper_set_end_cap_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void Line2D::set_gradient(Gradient p_color){
	_wasgo_Line2D_wrapper_set_gradient(wasgo_id, ((Variant) color).get_wasgo_id());
}
void Line2D::set_joint_mode(Line2D::LineJointMode p_mode){
	_wasgo_Line2D_wrapper_set_joint_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void Line2D::set_point_position(int p_i, Vector2 p_position){
	_wasgo_Line2D_wrapper_set_point_position(wasgo_id, i, ((Variant) position).get_wasgo_id());
}
void Line2D::set_points(PoolVector2Array p_points){
	_wasgo_Line2D_wrapper_set_points(wasgo_id, ((Variant) points).get_wasgo_id());
}
void Line2D::set_round_precision(int p_precision){
	_wasgo_Line2D_wrapper_set_round_precision(wasgo_id, precision);
}
void Line2D::set_sharp_limit(float p_limit){
	_wasgo_Line2D_wrapper_set_sharp_limit(wasgo_id, limit);
}
void Line2D::set_texture(Texture p_texture){
	_wasgo_Line2D_wrapper_set_texture(wasgo_id, ((Variant) texture).get_wasgo_id());
}
void Line2D::set_texture_mode(Line2D::LineTextureMode p_mode){
	_wasgo_Line2D_wrapper_set_texture_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void Line2D::set_width(float p_width){
	_wasgo_Line2D_wrapper_set_width(wasgo_id, width);
}

Line2D::Line2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Line2D::~Line2D(){
}