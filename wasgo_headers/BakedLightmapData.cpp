/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BakedLightmapData.h"
void BakedLightmapData::add_user(NodePath p_path, Texture p_lightmap, int p_instance){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_BakedLightmapData_wrapper_add_user(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_lightmap._get_wasgo_id(), p_instance);
}
void BakedLightmapData::clear_users(){
	_wasgo_BakedLightmapData_wrapper_clear_users(wasgo_id);
}
::AABB BakedLightmapData::get_bounds(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_BakedLightmapData_wrapper_get_bounds(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
Transform BakedLightmapData::get_cell_space_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_BakedLightmapData_wrapper_get_cell_space_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
int BakedLightmapData::get_cell_subdiv(){
	return (int) _wasgo_BakedLightmapData_wrapper_get_cell_subdiv(wasgo_id);
}
float BakedLightmapData::get_energy(){
	return (float) _wasgo_BakedLightmapData_wrapper_get_energy(wasgo_id);
}
PoolByteArray BakedLightmapData::get_octree(){
	return PoolByteArray(_wasgo_BakedLightmapData_wrapper_get_octree(wasgo_id));
}
int BakedLightmapData::get_user_count(){
	return (int) _wasgo_BakedLightmapData_wrapper_get_user_count(wasgo_id);
}
Texture BakedLightmapData::get_user_lightmap(int p_user_idx){
	return Texture(_wasgo_BakedLightmapData_wrapper_get_user_lightmap(wasgo_id, p_user_idx));
}
NodePath BakedLightmapData::get_user_path(int p_user_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_BakedLightmapData_wrapper_get_user_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_user_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
void BakedLightmapData::set_bounds(::AABB p_bounds){

    Variant wasgo_var_bounds = p_bounds;
    uint8_t wasgo_buffer_bounds[28];
    int wasgo_size_bounds = 28;
    encode_variant(wasgo_var_bounds, wasgo_buffer_bounds, wasgo_size_bounds);
    
	_wasgo_BakedLightmapData_wrapper_set_bounds(wasgo_id, wasgo_buffer_bounds, wasgo_size_bounds);
}
void BakedLightmapData::set_cell_space_transform(Transform p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[52];
    int wasgo_size_xform = 52;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_BakedLightmapData_wrapper_set_cell_space_transform(wasgo_id, wasgo_buffer_xform, wasgo_size_xform);
}
void BakedLightmapData::set_cell_subdiv(int p_cell_subdiv){
	_wasgo_BakedLightmapData_wrapper_set_cell_subdiv(wasgo_id, p_cell_subdiv);
}
void BakedLightmapData::set_energy(float p_energy){
	_wasgo_BakedLightmapData_wrapper_set_energy(wasgo_id, p_energy);
}
void BakedLightmapData::set_octree(PoolByteArray p_octree){
	_wasgo_BakedLightmapData_wrapper_set_octree(wasgo_id, p_octree._get_wasgo_id());
}

BakedLightmapData::BakedLightmapData(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
BakedLightmapData::BakedLightmapData(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_BakedLightmapData_constructor();
}
BakedLightmapData::new_instance(){
    return BakedLightmapData(_wasgo_BakedLightmapData_constructor());
}