/* THIS FILE IS GENERATED */
#include "GIProbeData.h"
float GIProbeData::get_bias(){
	return (float) _wasgo_GIProbeData_wrapper_get_bias(wasgo_id));
}
AABB GIProbeData::get_bounds(){
	return AABB::from_wasgo_id(_wasgo_GIProbeData_wrapper_get_bounds(wasgo_id));
}
float GIProbeData::get_cell_size(){
	return (float) _wasgo_GIProbeData_wrapper_get_cell_size(wasgo_id));
}
PoolIntArray GIProbeData::get_dynamic_data(){
	return PoolIntArray::from_wasgo_id(_wasgo_GIProbeData_wrapper_get_dynamic_data(wasgo_id));
}
int GIProbeData::get_dynamic_range(){
	return (int) _wasgo_GIProbeData_wrapper_get_dynamic_range(wasgo_id));
}
float GIProbeData::get_energy(){
	return (float) _wasgo_GIProbeData_wrapper_get_energy(wasgo_id));
}
float GIProbeData::get_normal_bias(){
	return (float) _wasgo_GIProbeData_wrapper_get_normal_bias(wasgo_id));
}
float GIProbeData::get_propagation(){
	return (float) _wasgo_GIProbeData_wrapper_get_propagation(wasgo_id));
}
Transform GIProbeData::get_to_cell_xform(){
	return Transform::from_wasgo_id(_wasgo_GIProbeData_wrapper_get_to_cell_xform(wasgo_id));
}
bool GIProbeData::is_compressed(){
	return (bool) _wasgo_GIProbeData_wrapper_is_compressed(wasgo_id));
}
bool GIProbeData::is_interior(){
	return (bool) _wasgo_GIProbeData_wrapper_is_interior(wasgo_id));
}
void GIProbeData::set_bias(float p_bias){
	_wasgo_GIProbeData_wrapper_set_bias(wasgo_id, bias);
}
void GIProbeData::set_bounds(AABB p_bounds){
	_wasgo_GIProbeData_wrapper_set_bounds(wasgo_id, ((Variant) bounds).get_wasgo_id());
}
void GIProbeData::set_cell_size(float p_cell_size){
	_wasgo_GIProbeData_wrapper_set_cell_size(wasgo_id, cell_size);
}
void GIProbeData::set_compress(bool p_compress){
	_wasgo_GIProbeData_wrapper_set_compress(wasgo_id, compress);
}
void GIProbeData::set_dynamic_data(PoolIntArray p_dynamic_data){
	_wasgo_GIProbeData_wrapper_set_dynamic_data(wasgo_id, ((Variant) dynamic_data).get_wasgo_id());
}
void GIProbeData::set_dynamic_range(int p_dynamic_range){
	_wasgo_GIProbeData_wrapper_set_dynamic_range(wasgo_id, dynamic_range);
}
void GIProbeData::set_energy(float p_energy){
	_wasgo_GIProbeData_wrapper_set_energy(wasgo_id, energy);
}
void GIProbeData::set_interior(bool p_interior){
	_wasgo_GIProbeData_wrapper_set_interior(wasgo_id, interior);
}
void GIProbeData::set_normal_bias(float p_bias){
	_wasgo_GIProbeData_wrapper_set_normal_bias(wasgo_id, bias);
}
void GIProbeData::set_propagation(float p_propagation){
	_wasgo_GIProbeData_wrapper_set_propagation(wasgo_id, propagation);
}
void GIProbeData::set_to_cell_xform(Transform p_to_cell_xform){
	_wasgo_GIProbeData_wrapper_set_to_cell_xform(wasgo_id, ((Variant) to_cell_xform).get_wasgo_id());
}

GIProbeData::GIProbeData(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
GIProbeData::~GIProbeData(){
}