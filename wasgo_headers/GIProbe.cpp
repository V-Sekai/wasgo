/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GIProbe.h"
void GIProbe::bake(Node p_from_node = (Node) "", bool p_create_visual_debug = (bool) false){
	_wasgo_GIProbe_wrapper_bake(wasgo_id, p_from_node._get_wasgo_id(), p_create_visual_debug);
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

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_GIProbe_wrapper_get_extents(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float GIProbe::get_normal_bias(){
	return (float) _wasgo_GIProbe_wrapper_get_normal_bias(wasgo_id);
}
GIProbeData GIProbe::get_probe_data(){
	return GIProbeData(_wasgo_GIProbe_wrapper_get_probe_data(wasgo_id));
}
float GIProbe::get_propagation(){
	return (float) _wasgo_GIProbe_wrapper_get_propagation(wasgo_id);
}
GIProbe::Subdiv GIProbe::get_subdiv(){
	return GIProbe::Subdiv(_wasgo_GIProbe_wrapper_get_subdiv(wasgo_id));
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

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[16];
    int wasgo_size_extents = 16;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_GIProbe_wrapper_set_extents(wasgo_id, wasgo_buffer_extents, wasgo_size_extents);
}
void GIProbe::set_interior(bool p_enable){
	_wasgo_GIProbe_wrapper_set_interior(wasgo_id, p_enable);
}
void GIProbe::set_normal_bias(float p_max){
	_wasgo_GIProbe_wrapper_set_normal_bias(wasgo_id, p_max);
}
void GIProbe::set_probe_data(GIProbeData p_data){
	_wasgo_GIProbe_wrapper_set_probe_data(wasgo_id, p_data._get_wasgo_id());
}
void GIProbe::set_propagation(float p_max){
	_wasgo_GIProbe_wrapper_set_propagation(wasgo_id, p_max);
}
void GIProbe::set_subdiv(GIProbe::Subdiv p_subdiv){
	_wasgo_GIProbe_wrapper_set_subdiv(wasgo_id, p_subdiv._get_wasgo_id());
}

GIProbe::GIProbe(WasGoID p_wasgo_id) : VisualInstance(p_wasgo_id){
}
GIProbe::GIProbe(VisualInstance other) : VisualInstance(other._get_wasgo_id()){
    wasgo_id = _wasgo_GIProbe_constructor();
}
GIProbe::new_instance(){
    return GIProbe(_wasgo_GIProbe_constructor());
}