/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Line2D.h"
void Line2D::add_point(Vector2 p_position, int p_at_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Line2D_wrapper_add_point(wasgo_id, wasgo_buffer_position, wasgo_size_position, -69, p_at_position);
}
void Line2D::clear_points(){
	_wasgo_Line2D_wrapper_clear_points(wasgo_id);
}
bool Line2D::get_antialiased(){
	return (bool) _wasgo_Line2D_wrapper_get_antialiased(wasgo_id);
}
Line2D::LineCapMode Line2D::get_begin_cap_mode(){
	return Line2D::LineCapMode(_wasgo_Line2D_wrapper_get_begin_cap_mode(wasgo_id));
}
Curve Line2D::get_curve(){
	return Curve(_wasgo_Line2D_wrapper_get_curve(wasgo_id));
}
Color Line2D::get_default_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Line2D_wrapper_get_default_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Line2D::LineCapMode Line2D::get_end_cap_mode(){
	return Line2D::LineCapMode(_wasgo_Line2D_wrapper_get_end_cap_mode(wasgo_id));
}
Gradient Line2D::get_gradient(){
	return Gradient(_wasgo_Line2D_wrapper_get_gradient(wasgo_id));
}
Line2D::LineJointMode Line2D::get_joint_mode(){
	return Line2D::LineJointMode(_wasgo_Line2D_wrapper_get_joint_mode(wasgo_id));
}
int Line2D::get_point_count(){
	return (int) _wasgo_Line2D_wrapper_get_point_count(wasgo_id);
}
Vector2 Line2D::get_point_position(int p_i){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Line2D_wrapper_get_point_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_i);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
PoolVector2Array Line2D::get_points(){
	return PoolVector2Array(_wasgo_Line2D_wrapper_get_points(wasgo_id));
}
int Line2D::get_round_precision(){
	return (int) _wasgo_Line2D_wrapper_get_round_precision(wasgo_id);
}
float Line2D::get_sharp_limit(){
	return (float) _wasgo_Line2D_wrapper_get_sharp_limit(wasgo_id);
}
Texture Line2D::get_texture(){
	return Texture(_wasgo_Line2D_wrapper_get_texture(wasgo_id));
}
Line2D::LineTextureMode Line2D::get_texture_mode(){
	return Line2D::LineTextureMode(_wasgo_Line2D_wrapper_get_texture_mode(wasgo_id));
}
float Line2D::get_width(){
	return (float) _wasgo_Line2D_wrapper_get_width(wasgo_id);
}
void Line2D::remove_point(int p_i){
	_wasgo_Line2D_wrapper_remove_point(wasgo_id, p_i);
}
void Line2D::set_antialiased(bool p_antialiased){
	_wasgo_Line2D_wrapper_set_antialiased(wasgo_id, p_antialiased);
}
void Line2D::set_begin_cap_mode(Line2D::LineCapMode p_mode){
	_wasgo_Line2D_wrapper_set_begin_cap_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Line2D::set_curve(Curve p_curve){
	_wasgo_Line2D_wrapper_set_curve(wasgo_id, p_curve._get_wasgo_id());
}
void Line2D::set_default_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Line2D_wrapper_set_default_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Line2D::set_end_cap_mode(Line2D::LineCapMode p_mode){
	_wasgo_Line2D_wrapper_set_end_cap_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Line2D::set_gradient(Gradient p_color){
	_wasgo_Line2D_wrapper_set_gradient(wasgo_id, p_color._get_wasgo_id());
}
void Line2D::set_joint_mode(Line2D::LineJointMode p_mode){
	_wasgo_Line2D_wrapper_set_joint_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Line2D::set_point_position(int p_i, Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Line2D_wrapper_set_point_position(wasgo_id, p_i, wasgo_buffer_position, wasgo_size_position, wasgo_size_position);
}
void Line2D::set_points(PoolVector2Array p_points){
	_wasgo_Line2D_wrapper_set_points(wasgo_id, p_points._get_wasgo_id());
}
void Line2D::set_round_precision(int p_precision){
	_wasgo_Line2D_wrapper_set_round_precision(wasgo_id, p_precision);
}
void Line2D::set_sharp_limit(float p_limit){
	_wasgo_Line2D_wrapper_set_sharp_limit(wasgo_id, p_limit);
}
void Line2D::set_texture(Texture p_texture){
	_wasgo_Line2D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void Line2D::set_texture_mode(Line2D::LineTextureMode p_mode){
	_wasgo_Line2D_wrapper_set_texture_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Line2D::set_width(float p_width){
	_wasgo_Line2D_wrapper_set_width(wasgo_id, p_width);
}

Line2D::Line2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Line2D::Line2D(Node2D other) : Node2D(other._get_wasgo_id()){
}
Line2D::Line2D():Node2D(){
}
Line2D Line2D::new_instance(){
    return Line2D(_wasgo_Line2D_constructor());
}
WasGoID Line2D::_get_wasgo_id(){
    return wasgo_id;
}
Line2D::operator bool(){
    return (bool) wasgo_id;
}
