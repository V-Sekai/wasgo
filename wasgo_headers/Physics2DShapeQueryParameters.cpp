/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Physics2DShapeQueryParameters.h"
int Physics2DShapeQueryParameters::get_collision_layer(){
	return (int) _wasgo_Physics2DShapeQueryParameters_wrapper_get_collision_layer(wasgo_id);
}
Array Physics2DShapeQueryParameters::get_exclude(){
	return Array(_wasgo_Physics2DShapeQueryParameters_wrapper_get_exclude(wasgo_id));
}
float Physics2DShapeQueryParameters::get_margin(){
	return (float) _wasgo_Physics2DShapeQueryParameters_wrapper_get_margin(wasgo_id);
}
Vector2 Physics2DShapeQueryParameters::get_motion(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Physics2DShapeQueryParameters_wrapper_get_motion(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
RID Physics2DShapeQueryParameters::get_shape_rid(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Physics2DShapeQueryParameters_wrapper_get_shape_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Transform2D Physics2DShapeQueryParameters::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Physics2DShapeQueryParameters_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
bool Physics2DShapeQueryParameters::is_collide_with_areas_enabled(){
	return (bool) _wasgo_Physics2DShapeQueryParameters_wrapper_is_collide_with_areas_enabled(wasgo_id);
}
bool Physics2DShapeQueryParameters::is_collide_with_bodies_enabled(){
	return (bool) _wasgo_Physics2DShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(wasgo_id);
}
void Physics2DShapeQueryParameters::set_collide_with_areas(bool p_enable){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_collide_with_areas(wasgo_id, p_enable);
}
void Physics2DShapeQueryParameters::set_collide_with_bodies(bool p_enable){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_collide_with_bodies(wasgo_id, p_enable);
}
void Physics2DShapeQueryParameters::set_collision_layer(int p_collision_layer){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_collision_layer(wasgo_id, p_collision_layer);
}
void Physics2DShapeQueryParameters::set_exclude(Array p_exclude){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_exclude(wasgo_id, p_exclude._get_wasgo_id());
}
void Physics2DShapeQueryParameters::set_margin(float p_margin){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_margin(wasgo_id, p_margin);
}
void Physics2DShapeQueryParameters::set_motion(Vector2 p_motion){

    Variant wasgo_var_motion = p_motion;
    uint8_t wasgo_buffer_motion[12];
    int wasgo_size_motion = 12;
    encode_variant(wasgo_var_motion, wasgo_buffer_motion, wasgo_size_motion);
    
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_motion(wasgo_id, wasgo_buffer_motion, wasgo_size_motion);
}
void Physics2DShapeQueryParameters::set_shape(Resource p_shape){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_shape(wasgo_id, p_shape._get_wasgo_id());
}
void Physics2DShapeQueryParameters::set_shape_rid(RID p_shape){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_shape_rid(wasgo_id, wasgo_buffer_shape, wasgo_size_shape);
}
void Physics2DShapeQueryParameters::set_transform(Transform2D p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_transform(wasgo_id, wasgo_buffer_transform, wasgo_size_transform);
}

Physics2DShapeQueryParameters::Physics2DShapeQueryParameters(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
Physics2DShapeQueryParameters::Physics2DShapeQueryParameters(Reference other) : Reference(other._get_wasgo_id()){
}
Physics2DShapeQueryParameters::Physics2DShapeQueryParameters():Reference(){
}
Physics2DShapeQueryParameters Physics2DShapeQueryParameters::new_instance(){
    return Physics2DShapeQueryParameters(_wasgo_Physics2DShapeQueryParameters_constructor());
}
WasGoID Physics2DShapeQueryParameters::_get_wasgo_id(){
    return wasgo_id;
}
Physics2DShapeQueryParameters::operator bool(){
    return (bool) wasgo_id;
}
