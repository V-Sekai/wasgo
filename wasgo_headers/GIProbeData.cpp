/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GIProbeData.h"
float GIProbeData::get_bias(){
	return (float) _wasgo_GIProbeData_wrapper_get_bias(wasgo_id);
}
::AABB GIProbeData::get_bounds(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_GIProbeData_wrapper_get_bounds(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
float GIProbeData::get_cell_size(){
	return (float) _wasgo_GIProbeData_wrapper_get_cell_size(wasgo_id);
}
PoolIntArray GIProbeData::get_dynamic_data(){
	return PoolIntArray(_wasgo_GIProbeData_wrapper_get_dynamic_data(wasgo_id));
}
int GIProbeData::get_dynamic_range(){
	return (int) _wasgo_GIProbeData_wrapper_get_dynamic_range(wasgo_id);
}
float GIProbeData::get_energy(){
	return (float) _wasgo_GIProbeData_wrapper_get_energy(wasgo_id);
}
float GIProbeData::get_normal_bias(){
	return (float) _wasgo_GIProbeData_wrapper_get_normal_bias(wasgo_id);
}
float GIProbeData::get_propagation(){
	return (float) _wasgo_GIProbeData_wrapper_get_propagation(wasgo_id);
}
Transform GIProbeData::get_to_cell_xform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_GIProbeData_wrapper_get_to_cell_xform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
bool GIProbeData::is_compressed(){
	return (bool) _wasgo_GIProbeData_wrapper_is_compressed(wasgo_id);
}
bool GIProbeData::is_interior(){
	return (bool) _wasgo_GIProbeData_wrapper_is_interior(wasgo_id);
}
void GIProbeData::set_bias(float p_bias){
	_wasgo_GIProbeData_wrapper_set_bias(wasgo_id, p_bias);
}
void GIProbeData::set_bounds(::AABB p_bounds){

    Variant wasgo_var_bounds = p_bounds;
    uint8_t wasgo_buffer_bounds[28];
    int wasgo_size_bounds = 28;
    encode_variant(wasgo_var_bounds, wasgo_buffer_bounds, wasgo_size_bounds);
    
	_wasgo_GIProbeData_wrapper_set_bounds(wasgo_id, wasgo_buffer_bounds, wasgo_size_bounds);
}
void GIProbeData::set_cell_size(float p_cell_size){
	_wasgo_GIProbeData_wrapper_set_cell_size(wasgo_id, p_cell_size);
}
void GIProbeData::set_compress(bool p_compress){
	_wasgo_GIProbeData_wrapper_set_compress(wasgo_id, p_compress);
}
void GIProbeData::set_dynamic_data(PoolIntArray p_dynamic_data){
	_wasgo_GIProbeData_wrapper_set_dynamic_data(wasgo_id, p_dynamic_data._get_wasgo_id());
}
void GIProbeData::set_dynamic_range(int p_dynamic_range){
	_wasgo_GIProbeData_wrapper_set_dynamic_range(wasgo_id, p_dynamic_range);
}
void GIProbeData::set_energy(float p_energy){
	_wasgo_GIProbeData_wrapper_set_energy(wasgo_id, p_energy);
}
void GIProbeData::set_interior(bool p_interior){
	_wasgo_GIProbeData_wrapper_set_interior(wasgo_id, p_interior);
}
void GIProbeData::set_normal_bias(float p_bias){
	_wasgo_GIProbeData_wrapper_set_normal_bias(wasgo_id, p_bias);
}
void GIProbeData::set_propagation(float p_propagation){
	_wasgo_GIProbeData_wrapper_set_propagation(wasgo_id, p_propagation);
}
void GIProbeData::set_to_cell_xform(Transform p_to_cell_xform){

    Variant wasgo_var_to_cell_xform = p_to_cell_xform;
    uint8_t wasgo_buffer_to_cell_xform[52];
    int wasgo_size_to_cell_xform = 52;
    encode_variant(wasgo_var_to_cell_xform, wasgo_buffer_to_cell_xform, wasgo_size_to_cell_xform);
    
	_wasgo_GIProbeData_wrapper_set_to_cell_xform(wasgo_id, wasgo_buffer_to_cell_xform, wasgo_size_to_cell_xform);
}

GIProbeData::GIProbeData(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
GIProbeData::GIProbeData(Resource other) : Resource(other._get_wasgo_id()){
}
GIProbeData::GIProbeData():Resource(){
}
GIProbeData GIProbeData::new_instance(){
    return GIProbeData(_wasgo_GIProbeData_constructor());
}
WasGoID GIProbeData::_get_wasgo_id(){
    return wasgo_id;
}
GIProbeData::operator bool(){
    return (bool) wasgo_id;
}
