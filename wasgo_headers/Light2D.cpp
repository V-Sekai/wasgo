/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Light2D.h"
Color Light2D::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Light2D_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float Light2D::get_energy(){
	return (float) _wasgo_Light2D_wrapper_get_energy(wasgo_id);
}
float Light2D::get_height(){
	return (float) _wasgo_Light2D_wrapper_get_height(wasgo_id);
}
int Light2D::get_item_cull_mask(){
	return (int) _wasgo_Light2D_wrapper_get_item_cull_mask(wasgo_id);
}
int Light2D::get_item_shadow_cull_mask(){
	return (int) _wasgo_Light2D_wrapper_get_item_shadow_cull_mask(wasgo_id);
}
int Light2D::get_layer_range_max(){
	return (int) _wasgo_Light2D_wrapper_get_layer_range_max(wasgo_id);
}
int Light2D::get_layer_range_min(){
	return (int) _wasgo_Light2D_wrapper_get_layer_range_min(wasgo_id);
}
Light2D::Mode Light2D::get_mode(){
	return Light2D::Mode(_wasgo_Light2D_wrapper_get_mode(wasgo_id));
}
int Light2D::get_shadow_buffer_size(){
	return (int) _wasgo_Light2D_wrapper_get_shadow_buffer_size(wasgo_id);
}
Color Light2D::get_shadow_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Light2D_wrapper_get_shadow_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Light2D::ShadowFilter Light2D::get_shadow_filter(){
	return Light2D::ShadowFilter(_wasgo_Light2D_wrapper_get_shadow_filter(wasgo_id));
}
float Light2D::get_shadow_gradient_length(){
	return (float) _wasgo_Light2D_wrapper_get_shadow_gradient_length(wasgo_id);
}
float Light2D::get_shadow_smooth(){
	return (float) _wasgo_Light2D_wrapper_get_shadow_smooth(wasgo_id);
}
Texture Light2D::get_texture(){
	return Texture(_wasgo_Light2D_wrapper_get_texture(wasgo_id));
}
Vector2 Light2D::get_texture_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Light2D_wrapper_get_texture_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float Light2D::get_texture_scale(){
	return (float) _wasgo_Light2D_wrapper_get_texture_scale(wasgo_id);
}
int Light2D::get_z_range_max(){
	return (int) _wasgo_Light2D_wrapper_get_z_range_max(wasgo_id);
}
int Light2D::get_z_range_min(){
	return (int) _wasgo_Light2D_wrapper_get_z_range_min(wasgo_id);
}
bool Light2D::is_editor_only(){
	return (bool) _wasgo_Light2D_wrapper_is_editor_only(wasgo_id);
}
bool Light2D::is_enabled(){
	return (bool) _wasgo_Light2D_wrapper_is_enabled(wasgo_id);
}
bool Light2D::is_shadow_enabled(){
	return (bool) _wasgo_Light2D_wrapper_is_shadow_enabled(wasgo_id);
}
void Light2D::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Light2D_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Light2D::set_editor_only(bool p_editor_only){
	_wasgo_Light2D_wrapper_set_editor_only(wasgo_id, p_editor_only);
}
void Light2D::set_enabled(bool p_enabled){
	_wasgo_Light2D_wrapper_set_enabled(wasgo_id, p_enabled);
}
void Light2D::set_energy(float p_energy){
	_wasgo_Light2D_wrapper_set_energy(wasgo_id, p_energy);
}
void Light2D::set_height(float p_height){
	_wasgo_Light2D_wrapper_set_height(wasgo_id, p_height);
}
void Light2D::set_item_cull_mask(int p_item_cull_mask){
	_wasgo_Light2D_wrapper_set_item_cull_mask(wasgo_id, p_item_cull_mask);
}
void Light2D::set_item_shadow_cull_mask(int p_item_shadow_cull_mask){
	_wasgo_Light2D_wrapper_set_item_shadow_cull_mask(wasgo_id, p_item_shadow_cull_mask);
}
void Light2D::set_layer_range_max(int p_layer){
	_wasgo_Light2D_wrapper_set_layer_range_max(wasgo_id, p_layer);
}
void Light2D::set_layer_range_min(int p_layer){
	_wasgo_Light2D_wrapper_set_layer_range_min(wasgo_id, p_layer);
}
void Light2D::set_mode(Light2D::Mode p_mode){
	_wasgo_Light2D_wrapper_set_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Light2D::set_shadow_buffer_size(int p_size){
	_wasgo_Light2D_wrapper_set_shadow_buffer_size(wasgo_id, p_size);
}
void Light2D::set_shadow_color(Color p_shadow_color){

    Variant wasgo_var_shadow_color = p_shadow_color;
    uint8_t wasgo_buffer_shadow_color[20];
    int wasgo_size_shadow_color = 20;
    encode_variant(wasgo_var_shadow_color, wasgo_buffer_shadow_color, wasgo_size_shadow_color);
    
	_wasgo_Light2D_wrapper_set_shadow_color(wasgo_id, wasgo_buffer_shadow_color, wasgo_size_shadow_color);
}
void Light2D::set_shadow_enabled(bool p_enabled){
	_wasgo_Light2D_wrapper_set_shadow_enabled(wasgo_id, p_enabled);
}
void Light2D::set_shadow_filter(Light2D::ShadowFilter p_filter){
	_wasgo_Light2D_wrapper_set_shadow_filter(wasgo_id, p_filter._get_wasgo_id());
}
void Light2D::set_shadow_gradient_length(float p_multiplier){
	_wasgo_Light2D_wrapper_set_shadow_gradient_length(wasgo_id, p_multiplier);
}
void Light2D::set_shadow_smooth(float p_smooth){
	_wasgo_Light2D_wrapper_set_shadow_smooth(wasgo_id, p_smooth);
}
void Light2D::set_texture(Texture p_texture){
	_wasgo_Light2D_wrapper_set_texture(wasgo_id, p_texture._get_wasgo_id());
}
void Light2D::set_texture_offset(Vector2 p_texture_offset){

    Variant wasgo_var_texture_offset = p_texture_offset;
    uint8_t wasgo_buffer_texture_offset[12];
    int wasgo_size_texture_offset = 12;
    encode_variant(wasgo_var_texture_offset, wasgo_buffer_texture_offset, wasgo_size_texture_offset);
    
	_wasgo_Light2D_wrapper_set_texture_offset(wasgo_id, wasgo_buffer_texture_offset, wasgo_size_texture_offset);
}
void Light2D::set_texture_scale(float p_texture_scale){
	_wasgo_Light2D_wrapper_set_texture_scale(wasgo_id, p_texture_scale);
}
void Light2D::set_z_range_max(int p_z){
	_wasgo_Light2D_wrapper_set_z_range_max(wasgo_id, p_z);
}
void Light2D::set_z_range_min(int p_z){
	_wasgo_Light2D_wrapper_set_z_range_min(wasgo_id, p_z);
}

Light2D::Light2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Light2D::Light2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_Light2D_constructor();
}
Light2D::new_instance(){
    return Light2D(_wasgo_Light2D_constructor());
}