/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Area2D.h"
float Area2D::get_angular_damp(){
	return (float) _wasgo_Area2D_wrapper_get_angular_damp(wasgo_id);
}
String Area2D::get_audio_bus_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Area2D_wrapper_get_audio_bus_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Area2D::get_collision_layer(){
	return (int) _wasgo_Area2D_wrapper_get_collision_layer(wasgo_id);
}
bool Area2D::get_collision_layer_bit(int p_bit){
	return (bool) _wasgo_Area2D_wrapper_get_collision_layer_bit(wasgo_id, p_bit);
}
int Area2D::get_collision_mask(){
	return (int) _wasgo_Area2D_wrapper_get_collision_mask(wasgo_id);
}
bool Area2D::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_Area2D_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
float Area2D::get_gravity(){
	return (float) _wasgo_Area2D_wrapper_get_gravity(wasgo_id);
}
float Area2D::get_gravity_distance_scale(){
	return (float) _wasgo_Area2D_wrapper_get_gravity_distance_scale(wasgo_id);
}
Vector2 Area2D::get_gravity_vector(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Area2D_wrapper_get_gravity_vector(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float Area2D::get_linear_damp(){
	return (float) _wasgo_Area2D_wrapper_get_linear_damp(wasgo_id);
}
Array Area2D::get_overlapping_areas(){
	return Array(_wasgo_Area2D_wrapper_get_overlapping_areas(wasgo_id));
}
Array Area2D::get_overlapping_bodies(){
	return Array(_wasgo_Area2D_wrapper_get_overlapping_bodies(wasgo_id));
}
float Area2D::get_priority(){
	return (float) _wasgo_Area2D_wrapper_get_priority(wasgo_id);
}
Area2D::SpaceOverride Area2D::get_space_override_mode(){
	return Area2D::SpaceOverride(_wasgo_Area2D_wrapper_get_space_override_mode(wasgo_id));
}
bool Area2D::is_gravity_a_point(){
	return (bool) _wasgo_Area2D_wrapper_is_gravity_a_point(wasgo_id);
}
bool Area2D::is_monitorable(){
	return (bool) _wasgo_Area2D_wrapper_is_monitorable(wasgo_id);
}
bool Area2D::is_monitoring(){
	return (bool) _wasgo_Area2D_wrapper_is_monitoring(wasgo_id);
}
bool Area2D::is_overriding_audio_bus(){
	return (bool) _wasgo_Area2D_wrapper_is_overriding_audio_bus(wasgo_id);
}
bool Area2D::overlaps_area(Node p_area){
	return (bool) _wasgo_Area2D_wrapper_overlaps_area(wasgo_id, p_area._get_wasgo_id());
}
bool Area2D::overlaps_body(Node p_body){
	return (bool) _wasgo_Area2D_wrapper_overlaps_body(wasgo_id, p_body._get_wasgo_id());
}
void Area2D::set_angular_damp(float p_angular_damp){
	_wasgo_Area2D_wrapper_set_angular_damp(wasgo_id, p_angular_damp);
}
void Area2D::set_audio_bus_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Area2D_wrapper_set_audio_bus_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Area2D::set_audio_bus_override(bool p_enable){
	_wasgo_Area2D_wrapper_set_audio_bus_override(wasgo_id, p_enable);
}
void Area2D::set_collision_layer(int p_collision_layer){
	_wasgo_Area2D_wrapper_set_collision_layer(wasgo_id, p_collision_layer);
}
void Area2D::set_collision_layer_bit(int p_bit, bool p_value){
	_wasgo_Area2D_wrapper_set_collision_layer_bit(wasgo_id, p_bit, p_value);
}
void Area2D::set_collision_mask(int p_collision_mask){
	_wasgo_Area2D_wrapper_set_collision_mask(wasgo_id, p_collision_mask);
}
void Area2D::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_Area2D_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void Area2D::set_gravity(float p_gravity){
	_wasgo_Area2D_wrapper_set_gravity(wasgo_id, p_gravity);
}
void Area2D::set_gravity_distance_scale(float p_distance_scale){
	_wasgo_Area2D_wrapper_set_gravity_distance_scale(wasgo_id, p_distance_scale);
}
void Area2D::set_gravity_is_point(bool p_enable){
	_wasgo_Area2D_wrapper_set_gravity_is_point(wasgo_id, p_enable);
}
void Area2D::set_gravity_vector(Vector2 p_vector){

    Variant wasgo_var_vector = p_vector;
    uint8_t wasgo_buffer_vector[12];
    int wasgo_size_vector = 12;
    encode_variant(wasgo_var_vector, wasgo_buffer_vector, wasgo_size_vector);
    
	_wasgo_Area2D_wrapper_set_gravity_vector(wasgo_id, wasgo_buffer_vector, wasgo_size_vector);
}
void Area2D::set_linear_damp(float p_linear_damp){
	_wasgo_Area2D_wrapper_set_linear_damp(wasgo_id, p_linear_damp);
}
void Area2D::set_monitorable(bool p_enable){
	_wasgo_Area2D_wrapper_set_monitorable(wasgo_id, p_enable);
}
void Area2D::set_monitoring(bool p_enable){
	_wasgo_Area2D_wrapper_set_monitoring(wasgo_id, p_enable);
}
void Area2D::set_priority(float p_priority){
	_wasgo_Area2D_wrapper_set_priority(wasgo_id, p_priority);
}
void Area2D::set_space_override_mode(Area2D::SpaceOverride p_space_override_mode){
	_wasgo_Area2D_wrapper_set_space_override_mode(wasgo_id, p_space_override_mode._get_wasgo_id());
}

Area2D::Area2D(WasGoID p_wasgo_id) : CollisionObject2D(p_wasgo_id){
}
Area2D::Area2D(CollisionObject2D other) : CollisionObject2D(other._get_wasgo_id()){
}
Area2D::Area2D():CollisionObject2D(){
}
Area2D Area2D::new_instance(){
    return Area2D(_wasgo_Area2D_constructor());
}
WasGoID Area2D::_get_wasgo_id(){
    return wasgo_id;
}
Area2D::operator bool(){
    return (bool) wasgo_id;
}
