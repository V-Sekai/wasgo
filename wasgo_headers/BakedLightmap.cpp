/* THIS FILE IS GENERATED */
#include "BakedLightmap.h"
BakedLightmap::BakeError BakedLightmap::bake(Node p_from_node = (Node) "", bool p_create_visual_debug = (bool) False){
	return BakedLightmap::BakeError::from_wasgo_id(_wasgo_BakedLightmap_wrapper_bake(wasgo_id, ((Variant) from_node).get_wasgo_id(), create_visual_debug));
}
void BakedLightmap::debug_bake(){
	_wasgo_BakedLightmap_wrapper_debug_bake(wasgo_id);
}
float BakedLightmap::get_bake_cell_size(){
	return (float) _wasgo_BakedLightmap_wrapper_get_bake_cell_size(wasgo_id));
}
float BakedLightmap::get_bake_default_texels_per_unit(){
	return (float) _wasgo_BakedLightmap_wrapper_get_bake_default_texels_per_unit(wasgo_id));
}
BakedLightmap::BakeMode BakedLightmap::get_bake_mode(){
	return BakedLightmap::BakeMode::from_wasgo_id(_wasgo_BakedLightmap_wrapper_get_bake_mode(wasgo_id));
}
BakedLightmap::BakeQuality BakedLightmap::get_bake_quality(){
	return BakedLightmap::BakeQuality::from_wasgo_id(_wasgo_BakedLightmap_wrapper_get_bake_quality(wasgo_id));
}
float BakedLightmap::get_capture_cell_size(){
	return (float) _wasgo_BakedLightmap_wrapper_get_capture_cell_size(wasgo_id));
}
float BakedLightmap::get_energy(){
	return (float) _wasgo_BakedLightmap_wrapper_get_energy(wasgo_id));
}
Vector3 BakedLightmap::get_extents(){
	return Vector3::from_wasgo_id(_wasgo_BakedLightmap_wrapper_get_extents(wasgo_id));
}
String BakedLightmap::get_image_path(){
	return String::from_wasgo_id(_wasgo_BakedLightmap_wrapper_get_image_path(wasgo_id));
}
BakedLightmapData BakedLightmap::get_light_data(){
	return BakedLightmapData::from_wasgo_id(_wasgo_BakedLightmap_wrapper_get_light_data(wasgo_id));
}
float BakedLightmap::get_propagation(){
	return (float) _wasgo_BakedLightmap_wrapper_get_propagation(wasgo_id));
}
bool BakedLightmap::is_hdr(){
	return (bool) _wasgo_BakedLightmap_wrapper_is_hdr(wasgo_id));
}
void BakedLightmap::set_bake_cell_size(float p_bake_cell_size){
	_wasgo_BakedLightmap_wrapper_set_bake_cell_size(wasgo_id, bake_cell_size);
}
void BakedLightmap::set_bake_default_texels_per_unit(float p_texels){
	_wasgo_BakedLightmap_wrapper_set_bake_default_texels_per_unit(wasgo_id, texels);
}
void BakedLightmap::set_bake_mode(BakedLightmap::BakeMode p_bake_mode){
	_wasgo_BakedLightmap_wrapper_set_bake_mode(wasgo_id, ((Variant) bake_mode).get_wasgo_id());
}
void BakedLightmap::set_bake_quality(BakedLightmap::BakeQuality p_bake_quality){
	_wasgo_BakedLightmap_wrapper_set_bake_quality(wasgo_id, ((Variant) bake_quality).get_wasgo_id());
}
void BakedLightmap::set_capture_cell_size(float p_capture_cell_size){
	_wasgo_BakedLightmap_wrapper_set_capture_cell_size(wasgo_id, capture_cell_size);
}
void BakedLightmap::set_energy(float p_energy){
	_wasgo_BakedLightmap_wrapper_set_energy(wasgo_id, energy);
}
void BakedLightmap::set_extents(Vector3 p_extents){
	_wasgo_BakedLightmap_wrapper_set_extents(wasgo_id, ((Variant) extents).get_wasgo_id());
}
void BakedLightmap::set_hdr(bool p_hdr){
	_wasgo_BakedLightmap_wrapper_set_hdr(wasgo_id, hdr);
}
void BakedLightmap::set_image_path(String p_image_path){
	_wasgo_BakedLightmap_wrapper_set_image_path(wasgo_id, ((Variant) image_path).get_wasgo_id());
}
void BakedLightmap::set_light_data(BakedLightmapData p_data){
	_wasgo_BakedLightmap_wrapper_set_light_data(wasgo_id, ((Variant) data).get_wasgo_id());
}
void BakedLightmap::set_propagation(float p_propagation){
	_wasgo_BakedLightmap_wrapper_set_propagation(wasgo_id, propagation);
}

BakedLightmap::BakedLightmap(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
BakedLightmap::~BakedLightmap(){
}