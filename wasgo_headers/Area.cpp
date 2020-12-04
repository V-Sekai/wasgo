/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Area.h"
float Area::get_angular_damp(){
	return (float) _wasgo_Area_wrapper_get_angular_damp(wasgo_id);
}
String Area::get_audio_bus(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Area_wrapper_get_audio_bus(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Area::get_collision_layer(){
	return (int) _wasgo_Area_wrapper_get_collision_layer(wasgo_id);
}
bool Area::get_collision_layer_bit(int p_bit){
	return (bool) _wasgo_Area_wrapper_get_collision_layer_bit(wasgo_id, p_bit);
}
int Area::get_collision_mask(){
	return (int) _wasgo_Area_wrapper_get_collision_mask(wasgo_id);
}
bool Area::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_Area_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
float Area::get_gravity(){
	return (float) _wasgo_Area_wrapper_get_gravity(wasgo_id);
}
float Area::get_gravity_distance_scale(){
	return (float) _wasgo_Area_wrapper_get_gravity_distance_scale(wasgo_id);
}
Vector3 Area::get_gravity_vector(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Area_wrapper_get_gravity_vector(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float Area::get_linear_damp(){
	return (float) _wasgo_Area_wrapper_get_linear_damp(wasgo_id);
}
Array Area::get_overlapping_areas(){
	return Array(_wasgo_Area_wrapper_get_overlapping_areas(wasgo_id));
}
Array Area::get_overlapping_bodies(){
	return Array(_wasgo_Area_wrapper_get_overlapping_bodies(wasgo_id));
}
float Area::get_priority(){
	return (float) _wasgo_Area_wrapper_get_priority(wasgo_id);
}
float Area::get_reverb_amount(){
	return (float) _wasgo_Area_wrapper_get_reverb_amount(wasgo_id);
}
String Area::get_reverb_bus(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Area_wrapper_get_reverb_bus(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float Area::get_reverb_uniformity(){
	return (float) _wasgo_Area_wrapper_get_reverb_uniformity(wasgo_id);
}
Area::SpaceOverride Area::get_space_override_mode(){
	return Area::SpaceOverride(_wasgo_Area_wrapper_get_space_override_mode(wasgo_id));
}
bool Area::is_gravity_a_point(){
	return (bool) _wasgo_Area_wrapper_is_gravity_a_point(wasgo_id);
}
bool Area::is_monitorable(){
	return (bool) _wasgo_Area_wrapper_is_monitorable(wasgo_id);
}
bool Area::is_monitoring(){
	return (bool) _wasgo_Area_wrapper_is_monitoring(wasgo_id);
}
bool Area::is_overriding_audio_bus(){
	return (bool) _wasgo_Area_wrapper_is_overriding_audio_bus(wasgo_id);
}
bool Area::is_using_reverb_bus(){
	return (bool) _wasgo_Area_wrapper_is_using_reverb_bus(wasgo_id);
}
bool Area::overlaps_area(Node p_area){
	return (bool) _wasgo_Area_wrapper_overlaps_area(wasgo_id, p_area._get_wasgo_id());
}
bool Area::overlaps_body(Node p_body){
	return (bool) _wasgo_Area_wrapper_overlaps_body(wasgo_id, p_body._get_wasgo_id());
}
void Area::set_angular_damp(float p_angular_damp){
	_wasgo_Area_wrapper_set_angular_damp(wasgo_id, p_angular_damp);
}
void Area::set_audio_bus(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Area_wrapper_set_audio_bus(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Area::set_audio_bus_override(bool p_enable){
	_wasgo_Area_wrapper_set_audio_bus_override(wasgo_id, p_enable);
}
void Area::set_collision_layer(int p_collision_layer){
	_wasgo_Area_wrapper_set_collision_layer(wasgo_id, p_collision_layer);
}
void Area::set_collision_layer_bit(int p_bit, bool p_value){
	_wasgo_Area_wrapper_set_collision_layer_bit(wasgo_id, p_bit, p_value);
}
void Area::set_collision_mask(int p_collision_mask){
	_wasgo_Area_wrapper_set_collision_mask(wasgo_id, p_collision_mask);
}
void Area::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_Area_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void Area::set_gravity(float p_gravity){
	_wasgo_Area_wrapper_set_gravity(wasgo_id, p_gravity);
}
void Area::set_gravity_distance_scale(float p_distance_scale){
	_wasgo_Area_wrapper_set_gravity_distance_scale(wasgo_id, p_distance_scale);
}
void Area::set_gravity_is_point(bool p_enable){
	_wasgo_Area_wrapper_set_gravity_is_point(wasgo_id, p_enable);
}
void Area::set_gravity_vector(Vector3 p_vector){

    Variant wasgo_var_vector = p_vector;
    uint8_t wasgo_buffer_vector[16];
    int wasgo_size_vector = 16;
    encode_variant(wasgo_var_vector, wasgo_buffer_vector, wasgo_size_vector);
    
	_wasgo_Area_wrapper_set_gravity_vector(wasgo_id, wasgo_buffer_vector, wasgo_size_vector);
}
void Area::set_linear_damp(float p_linear_damp){
	_wasgo_Area_wrapper_set_linear_damp(wasgo_id, p_linear_damp);
}
void Area::set_monitorable(bool p_enable){
	_wasgo_Area_wrapper_set_monitorable(wasgo_id, p_enable);
}
void Area::set_monitoring(bool p_enable){
	_wasgo_Area_wrapper_set_monitoring(wasgo_id, p_enable);
}
void Area::set_priority(float p_priority){
	_wasgo_Area_wrapper_set_priority(wasgo_id, p_priority);
}
void Area::set_reverb_amount(float p_amount){
	_wasgo_Area_wrapper_set_reverb_amount(wasgo_id, p_amount);
}
void Area::set_reverb_bus(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Area_wrapper_set_reverb_bus(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Area::set_reverb_uniformity(float p_amount){
	_wasgo_Area_wrapper_set_reverb_uniformity(wasgo_id, p_amount);
}
void Area::set_space_override_mode(Area::SpaceOverride p_enable){
	_wasgo_Area_wrapper_set_space_override_mode(wasgo_id, p_enable._get_wasgo_id());
}
void Area::set_use_reverb_bus(bool p_enable){
	_wasgo_Area_wrapper_set_use_reverb_bus(wasgo_id, p_enable);
}

Area::Area(WasGoID p_wasgo_id) : CollisionObject(p_wasgo_id){
}
Area::Area(CollisionObject other) : CollisionObject(other._get_wasgo_id()){
    wasgo_id = _wasgo_Area_constructor();
}
Area::new_instance(){
    return Area(_wasgo_Area_constructor());
}