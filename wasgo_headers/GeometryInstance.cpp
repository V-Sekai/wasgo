/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GeometryInstance.h"
GeometryInstance::ShadowCastingSetting GeometryInstance::get_cast_shadows_setting(){
	return GeometryInstance::ShadowCastingSetting(_wasgo_GeometryInstance_wrapper_get_cast_shadows_setting(wasgo_id));
}
float GeometryInstance::get_extra_cull_margin(){
	return (float) _wasgo_GeometryInstance_wrapper_get_extra_cull_margin(wasgo_id);
}
bool GeometryInstance::get_flag(GeometryInstance::Flags p_flag){
	return (bool) _wasgo_GeometryInstance_wrapper_get_flag(wasgo_id, p_flag._get_wasgo_id());
}
float GeometryInstance::get_lod_max_distance(){
	return (float) _wasgo_GeometryInstance_wrapper_get_lod_max_distance(wasgo_id);
}
float GeometryInstance::get_lod_max_hysteresis(){
	return (float) _wasgo_GeometryInstance_wrapper_get_lod_max_hysteresis(wasgo_id);
}
float GeometryInstance::get_lod_min_distance(){
	return (float) _wasgo_GeometryInstance_wrapper_get_lod_min_distance(wasgo_id);
}
float GeometryInstance::get_lod_min_hysteresis(){
	return (float) _wasgo_GeometryInstance_wrapper_get_lod_min_hysteresis(wasgo_id);
}
Material GeometryInstance::get_material_override(){
	return Material(_wasgo_GeometryInstance_wrapper_get_material_override(wasgo_id));
}
void GeometryInstance::set_cast_shadows_setting(GeometryInstance::ShadowCastingSetting p_shadow_casting_setting){
	_wasgo_GeometryInstance_wrapper_set_cast_shadows_setting(wasgo_id, p_shadow_casting_setting._get_wasgo_id());
}
void GeometryInstance::set_custom_aabb(::AABB p_aabb){

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    
	_wasgo_GeometryInstance_wrapper_set_custom_aabb(wasgo_id, wasgo_buffer_aabb, wasgo_size_aabb);
}
void GeometryInstance::set_extra_cull_margin(float p_margin){
	_wasgo_GeometryInstance_wrapper_set_extra_cull_margin(wasgo_id, p_margin);
}
void GeometryInstance::set_flag(GeometryInstance::Flags p_flag, bool p_value){
	_wasgo_GeometryInstance_wrapper_set_flag(wasgo_id, p_flag._get_wasgo_id(), p_value);
}
void GeometryInstance::set_lod_max_distance(float p_mode){
	_wasgo_GeometryInstance_wrapper_set_lod_max_distance(wasgo_id, p_mode);
}
void GeometryInstance::set_lod_max_hysteresis(float p_mode){
	_wasgo_GeometryInstance_wrapper_set_lod_max_hysteresis(wasgo_id, p_mode);
}
void GeometryInstance::set_lod_min_distance(float p_mode){
	_wasgo_GeometryInstance_wrapper_set_lod_min_distance(wasgo_id, p_mode);
}
void GeometryInstance::set_lod_min_hysteresis(float p_mode){
	_wasgo_GeometryInstance_wrapper_set_lod_min_hysteresis(wasgo_id, p_mode);
}
void GeometryInstance::set_material_override(Material p_material){
	_wasgo_GeometryInstance_wrapper_set_material_override(wasgo_id, p_material._get_wasgo_id());
}