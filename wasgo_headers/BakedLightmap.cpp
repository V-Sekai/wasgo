/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BakedLightmap.h"
BakedLightmap::BakeError BakedLightmap::bake(Node p_from_node, bool p_create_visual_debug){
	return BakedLightmap::BakeError(_wasgo_BakedLightmap_wrapper_bake(wasgo_id, p_from_node._get_wasgo_id(), p_create_visual_debug));
}
void BakedLightmap::debug_bake(){
	_wasgo_BakedLightmap_wrapper_debug_bake(wasgo_id);
}
float BakedLightmap::get_bake_cell_size(){
	return (float) _wasgo_BakedLightmap_wrapper_get_bake_cell_size(wasgo_id);
}
float BakedLightmap::get_bake_default_texels_per_unit(){
	return (float) _wasgo_BakedLightmap_wrapper_get_bake_default_texels_per_unit(wasgo_id);
}
BakedLightmap::BakeMode BakedLightmap::get_bake_mode(){
	return BakedLightmap::BakeMode(_wasgo_BakedLightmap_wrapper_get_bake_mode(wasgo_id));
}
BakedLightmap::BakeQuality BakedLightmap::get_bake_quality(){
	return BakedLightmap::BakeQuality(_wasgo_BakedLightmap_wrapper_get_bake_quality(wasgo_id));
}
float BakedLightmap::get_capture_cell_size(){
	return (float) _wasgo_BakedLightmap_wrapper_get_capture_cell_size(wasgo_id);
}
float BakedLightmap::get_energy(){
	return (float) _wasgo_BakedLightmap_wrapper_get_energy(wasgo_id);
}
Vector3 BakedLightmap::get_extents(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_BakedLightmap_wrapper_get_extents(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
String BakedLightmap::get_image_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_BakedLightmap_wrapper_get_image_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
BakedLightmapData BakedLightmap::get_light_data(){
	return BakedLightmapData(_wasgo_BakedLightmap_wrapper_get_light_data(wasgo_id));
}
float BakedLightmap::get_propagation(){
	return (float) _wasgo_BakedLightmap_wrapper_get_propagation(wasgo_id);
}
bool BakedLightmap::is_hdr(){
	return (bool) _wasgo_BakedLightmap_wrapper_is_hdr(wasgo_id);
}
void BakedLightmap::set_bake_cell_size(float p_bake_cell_size){
	_wasgo_BakedLightmap_wrapper_set_bake_cell_size(wasgo_id, p_bake_cell_size);
}
void BakedLightmap::set_bake_default_texels_per_unit(float p_texels){
	_wasgo_BakedLightmap_wrapper_set_bake_default_texels_per_unit(wasgo_id, p_texels);
}
void BakedLightmap::set_bake_mode(BakedLightmap::BakeMode p_bake_mode){
	_wasgo_BakedLightmap_wrapper_set_bake_mode(wasgo_id, p_bake_mode._get_wasgo_id());
}
void BakedLightmap::set_bake_quality(BakedLightmap::BakeQuality p_bake_quality){
	_wasgo_BakedLightmap_wrapper_set_bake_quality(wasgo_id, p_bake_quality._get_wasgo_id());
}
void BakedLightmap::set_capture_cell_size(float p_capture_cell_size){
	_wasgo_BakedLightmap_wrapper_set_capture_cell_size(wasgo_id, p_capture_cell_size);
}
void BakedLightmap::set_energy(float p_energy){
	_wasgo_BakedLightmap_wrapper_set_energy(wasgo_id, p_energy);
}
void BakedLightmap::set_extents(Vector3 p_extents){

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[16];
    int wasgo_size_extents = 16;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_BakedLightmap_wrapper_set_extents(wasgo_id, wasgo_buffer_extents, wasgo_size_extents);
}
void BakedLightmap::set_hdr(bool p_hdr){
	_wasgo_BakedLightmap_wrapper_set_hdr(wasgo_id, p_hdr);
}
void BakedLightmap::set_image_path(String p_image_path){

    Variant wasgo_var_image_path = p_image_path;
    int wasgo_size_image_path = String(p_image_path).size();
    uint8_t wasgo_buffer_image_path[wasgo_size_image_path];
    encode_variant(wasgo_var_image_path, wasgo_buffer_image_path, wasgo_size_image_path);
    
	_wasgo_BakedLightmap_wrapper_set_image_path(wasgo_id, wasgo_buffer_image_path, wasgo_size_image_path);
}
void BakedLightmap::set_light_data(BakedLightmapData p_data){
	_wasgo_BakedLightmap_wrapper_set_light_data(wasgo_id, p_data._get_wasgo_id());
}
void BakedLightmap::set_propagation(float p_propagation){
	_wasgo_BakedLightmap_wrapper_set_propagation(wasgo_id, p_propagation);
}

BakedLightmap::BakedLightmap(WasGoID p_wasgo_id) : VisualInstance(p_wasgo_id){
}
BakedLightmap::BakedLightmap(VisualInstance other) : VisualInstance(other._get_wasgo_id()){
}
BakedLightmap::BakedLightmap():VisualInstance(){
}
BakedLightmap BakedLightmap::new_instance(){
    return BakedLightmap(_wasgo_BakedLightmap_constructor());
}
WasGoID BakedLightmap::_get_wasgo_id(){
    return wasgo_id;
}
BakedLightmap::operator bool(){
    return (bool) wasgo_id;
}
