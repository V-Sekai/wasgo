/* THIS FILE IS GENERATED */
#include "ReflectionProbe.h"
bool ReflectionProbe::are_shadows_enabled(){
	return (bool) _wasgo_ReflectionProbe_wrapper_are_shadows_enabled(wasgo_id);
}
int ReflectionProbe::get_cull_mask(){
	return (int) _wasgo_ReflectionProbe_wrapper_get_cull_mask(wasgo_id);
}
Vector3 ReflectionProbe::get_extents(){
	return Vector3::from_wasgo_id(_wasgo_ReflectionProbe_wrapper_get_extents(wasgo_id));
}
float ReflectionProbe::get_intensity(){
	return (float) _wasgo_ReflectionProbe_wrapper_get_intensity(wasgo_id);
}
Color ReflectionProbe::get_interior_ambient(){
	return Color::from_wasgo_id(_wasgo_ReflectionProbe_wrapper_get_interior_ambient(wasgo_id));
}
float ReflectionProbe::get_interior_ambient_energy(){
	return (float) _wasgo_ReflectionProbe_wrapper_get_interior_ambient_energy(wasgo_id);
}
float ReflectionProbe::get_interior_ambient_probe_contribution(){
	return (float) _wasgo_ReflectionProbe_wrapper_get_interior_ambient_probe_contribution(wasgo_id);
}
float ReflectionProbe::get_max_distance(){
	return (float) _wasgo_ReflectionProbe_wrapper_get_max_distance(wasgo_id);
}
Vector3 ReflectionProbe::get_origin_offset(){
	return Vector3::from_wasgo_id(_wasgo_ReflectionProbe_wrapper_get_origin_offset(wasgo_id));
}
ReflectionProbe::UpdateMode ReflectionProbe::get_update_mode(){
	return ReflectionProbe::UpdateMode::from_wasgo_id(_wasgo_ReflectionProbe_wrapper_get_update_mode(wasgo_id));
}
bool ReflectionProbe::is_box_projection_enabled(){
	return (bool) _wasgo_ReflectionProbe_wrapper_is_box_projection_enabled(wasgo_id);
}
bool ReflectionProbe::is_set_as_interior(){
	return (bool) _wasgo_ReflectionProbe_wrapper_is_set_as_interior(wasgo_id);
}
void ReflectionProbe::set_as_interior(bool p_enable){
	_wasgo_ReflectionProbe_wrapper_set_as_interior(wasgo_id, p_enable);
}
void ReflectionProbe::set_cull_mask(int p_layers){
	_wasgo_ReflectionProbe_wrapper_set_cull_mask(wasgo_id, p_layers);
}
void ReflectionProbe::set_enable_box_projection(bool p_enable){
	_wasgo_ReflectionProbe_wrapper_set_enable_box_projection(wasgo_id, p_enable);
}
void ReflectionProbe::set_enable_shadows(bool p_enable){
	_wasgo_ReflectionProbe_wrapper_set_enable_shadows(wasgo_id, p_enable);
}
void ReflectionProbe::set_extents(Vector3 p_extents){
	_wasgo_ReflectionProbe_wrapper_set_extents(wasgo_id, ((Variant) p_extents).get_wasgo_id());
}
void ReflectionProbe::set_intensity(float p_intensity){
	_wasgo_ReflectionProbe_wrapper_set_intensity(wasgo_id, p_intensity);
}
void ReflectionProbe::set_interior_ambient(Color p_ambient){
	_wasgo_ReflectionProbe_wrapper_set_interior_ambient(wasgo_id, ((Variant) p_ambient).get_wasgo_id());
}
void ReflectionProbe::set_interior_ambient_energy(float p_ambient_energy){
	_wasgo_ReflectionProbe_wrapper_set_interior_ambient_energy(wasgo_id, p_ambient_energy);
}
void ReflectionProbe::set_interior_ambient_probe_contribution(float p_ambient_probe_contribution){
	_wasgo_ReflectionProbe_wrapper_set_interior_ambient_probe_contribution(wasgo_id, p_ambient_probe_contribution);
}
void ReflectionProbe::set_max_distance(float p_max_distance){
	_wasgo_ReflectionProbe_wrapper_set_max_distance(wasgo_id, p_max_distance);
}
void ReflectionProbe::set_origin_offset(Vector3 p_origin_offset){
	_wasgo_ReflectionProbe_wrapper_set_origin_offset(wasgo_id, ((Variant) p_origin_offset).get_wasgo_id());
}
void ReflectionProbe::set_update_mode(ReflectionProbe::UpdateMode p_mode){
	_wasgo_ReflectionProbe_wrapper_set_update_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}