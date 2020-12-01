/* THIS FILE IS GENERATED */
#include "GIProbe.h"
void GIProbe::bake(Node p_from_node = (Node) "", bool p_create_visual_debug = (bool) false){
	_wasgo_GIProbe_wrapper_bake(wasgo_id, ((Variant) p_from_node).get_wasgo_id(), p_create_visual_debug);
}
void GIProbe::debug_bake(){
	_wasgo_GIProbe_wrapper_debug_bake(wasgo_id);
}
float GIProbe::get_bias(){
	return (float) _wasgo_GIProbe_wrapper_get_bias(wasgo_id);
}
int GIProbe::get_dynamic_range(){
	return (int) _wasgo_GIProbe_wrapper_get_dynamic_range(wasgo_id);
}
float GIProbe::get_energy(){
	return (float) _wasgo_GIProbe_wrapper_get_energy(wasgo_id);
}
Vector3 GIProbe::get_extents(){
	return Vector3::from_wasgo_id(_wasgo_GIProbe_wrapper_get_extents(wasgo_id));
}
float GIProbe::get_normal_bias(){
	return (float) _wasgo_GIProbe_wrapper_get_normal_bias(wasgo_id);
}
GIProbeData GIProbe::get_probe_data(){
	return GIProbeData::from_wasgo_id(_wasgo_GIProbe_wrapper_get_probe_data(wasgo_id));
}
float GIProbe::get_propagation(){
	return (float) _wasgo_GIProbe_wrapper_get_propagation(wasgo_id);
}
GIProbe::Subdiv GIProbe::get_subdiv(){
	return GIProbe::Subdiv::from_wasgo_id(_wasgo_GIProbe_wrapper_get_subdiv(wasgo_id));
}
bool GIProbe::is_compressed(){
	return (bool) _wasgo_GIProbe_wrapper_is_compressed(wasgo_id);
}
bool GIProbe::is_interior(){
	return (bool) _wasgo_GIProbe_wrapper_is_interior(wasgo_id);
}
void GIProbe::set_bias(float p_max){
	_wasgo_GIProbe_wrapper_set_bias(wasgo_id, p_max);
}
void GIProbe::set_compress(bool p_enable){
	_wasgo_GIProbe_wrapper_set_compress(wasgo_id, p_enable);
}
void GIProbe::set_dynamic_range(int p_max){
	_wasgo_GIProbe_wrapper_set_dynamic_range(wasgo_id, p_max);
}
void GIProbe::set_energy(float p_max){
	_wasgo_GIProbe_wrapper_set_energy(wasgo_id, p_max);
}
void GIProbe::set_extents(Vector3 p_extents){
	_wasgo_GIProbe_wrapper_set_extents(wasgo_id, ((Variant) p_extents).get_wasgo_id());
}
void GIProbe::set_interior(bool p_enable){
	_wasgo_GIProbe_wrapper_set_interior(wasgo_id, p_enable);
}
void GIProbe::set_normal_bias(float p_max){
	_wasgo_GIProbe_wrapper_set_normal_bias(wasgo_id, p_max);
}
void GIProbe::set_probe_data(GIProbeData p_data){
	_wasgo_GIProbe_wrapper_set_probe_data(wasgo_id, ((Variant) p_data).get_wasgo_id());
}
void GIProbe::set_propagation(float p_max){
	_wasgo_GIProbe_wrapper_set_propagation(wasgo_id, p_max);
}
void GIProbe::set_subdiv(GIProbe::Subdiv p_subdiv){
	_wasgo_GIProbe_wrapper_set_subdiv(wasgo_id, ((Variant) p_subdiv).get_wasgo_id());
}