/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AStar2D.h"
void AStar2D::add_point(int p_id, Vector2 p_position, float p_weight_scale = (float) 1){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_AStar2D_wrapper_add_point(wasgo_id, p_id, wasgo_buffer_position, wasgo_size_position, p_weight_scale);
}
bool AStar2D::are_points_connected(int p_id, int p_to_id){
	return (bool) _wasgo_AStar2D_wrapper_are_points_connected(wasgo_id, p_id, p_to_id);
}
void AStar2D::clear(){
	_wasgo_AStar2D_wrapper_clear(wasgo_id);
}
void AStar2D::connect_points(int p_id, int p_to_id, bool p_bidirectional = (bool) true){
	_wasgo_AStar2D_wrapper_connect_points(wasgo_id, p_id, p_to_id, p_bidirectional);
}
void AStar2D::disconnect_points(int p_id, int p_to_id){
	_wasgo_AStar2D_wrapper_disconnect_points(wasgo_id, p_id, p_to_id);
}
int AStar2D::get_available_point_id(){
	return (int) _wasgo_AStar2D_wrapper_get_available_point_id(wasgo_id);
}
int AStar2D::get_closest_point(Vector2 p_to_position, bool p_include_disabled = (bool) false){

    Variant wasgo_var_to_position = p_to_position;
    uint8_t wasgo_buffer_to_position[12];
    int wasgo_size_to_position = 12;
    encode_variant(wasgo_var_to_position, wasgo_buffer_to_position, wasgo_size_to_position);
    
	return (int) _wasgo_AStar2D_wrapper_get_closest_point(wasgo_id, wasgo_buffer_to_position, wasgo_size_to_position, p_include_disabled);
}
Vector2 AStar2D::get_closest_position_in_segment(Vector2 p_to_position){

    Variant wasgo_var_to_position = p_to_position;
    uint8_t wasgo_buffer_to_position[12];
    int wasgo_size_to_position = 12;
    encode_variant(wasgo_var_to_position, wasgo_buffer_to_position, wasgo_size_to_position);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AStar2D_wrapper_get_closest_position_in_segment(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_to_position, wasgo_size_to_position);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
PoolIntArray AStar2D::get_id_path(int p_from_id, int p_to_id){
	return PoolIntArray(_wasgo_AStar2D_wrapper_get_id_path(wasgo_id, p_from_id, p_to_id));
}
int AStar2D::get_point_capacity(){
	return (int) _wasgo_AStar2D_wrapper_get_point_capacity(wasgo_id);
}
PoolIntArray AStar2D::get_point_connections(int p_id){
	return PoolIntArray(_wasgo_AStar2D_wrapper_get_point_connections(wasgo_id, p_id));
}
int AStar2D::get_point_count(){
	return (int) _wasgo_AStar2D_wrapper_get_point_count(wasgo_id);
}
PoolVector2Array AStar2D::get_point_path(int p_from_id, int p_to_id){
	return PoolVector2Array(_wasgo_AStar2D_wrapper_get_point_path(wasgo_id, p_from_id, p_to_id));
}
Vector2 AStar2D::get_point_position(int p_id){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AStar2D_wrapper_get_point_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_id);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float AStar2D::get_point_weight_scale(int p_id){
	return (float) _wasgo_AStar2D_wrapper_get_point_weight_scale(wasgo_id, p_id);
}
Array AStar2D::get_points(){
	return Array(_wasgo_AStar2D_wrapper_get_points(wasgo_id));
}
bool AStar2D::has_point(int p_id){
	return (bool) _wasgo_AStar2D_wrapper_has_point(wasgo_id, p_id);
}
bool AStar2D::is_point_disabled(int p_id){
	return (bool) _wasgo_AStar2D_wrapper_is_point_disabled(wasgo_id, p_id);
}
void AStar2D::remove_point(int p_id){
	_wasgo_AStar2D_wrapper_remove_point(wasgo_id, p_id);
}
void AStar2D::reserve_space(int p_num_nodes){
	_wasgo_AStar2D_wrapper_reserve_space(wasgo_id, p_num_nodes);
}
void AStar2D::set_point_disabled(int p_id, bool p_disabled = (bool) true){
	_wasgo_AStar2D_wrapper_set_point_disabled(wasgo_id, p_id, p_disabled);
}
void AStar2D::set_point_position(int p_id, Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_AStar2D_wrapper_set_point_position(wasgo_id, p_id, wasgo_buffer_position, wasgo_size_position);
}
void AStar2D::set_point_weight_scale(int p_id, float p_weight_scale){
	_wasgo_AStar2D_wrapper_set_point_weight_scale(wasgo_id, p_id, p_weight_scale);
}

AStar2D::AStar2D(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
AStar2D::AStar2D(){
    wasgo_id = _wasgo_AStar2D_constructor();
}
AStar2D::~AStar2D(){
    _wasgo_AStar2D_destructor(wasgo_id);
}