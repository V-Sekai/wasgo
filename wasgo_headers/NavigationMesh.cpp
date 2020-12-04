/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "NavigationMesh.h"
void NavigationMesh::add_polygon(PoolIntArray p_polygon){
	_wasgo_NavigationMesh_wrapper_add_polygon(wasgo_id, p_polygon._get_wasgo_id());
}
void NavigationMesh::clear_polygons(){
	_wasgo_NavigationMesh_wrapper_clear_polygons(wasgo_id);
}
void NavigationMesh::create_from_mesh(Mesh p_mesh){
	_wasgo_NavigationMesh_wrapper_create_from_mesh(wasgo_id, p_mesh._get_wasgo_id());
}
float NavigationMesh::get_agent_height(){
	return (float) _wasgo_NavigationMesh_wrapper_get_agent_height(wasgo_id);
}
float NavigationMesh::get_agent_max_climb(){
	return (float) _wasgo_NavigationMesh_wrapper_get_agent_max_climb(wasgo_id);
}
float NavigationMesh::get_agent_max_slope(){
	return (float) _wasgo_NavigationMesh_wrapper_get_agent_max_slope(wasgo_id);
}
float NavigationMesh::get_agent_radius(){
	return (float) _wasgo_NavigationMesh_wrapper_get_agent_radius(wasgo_id);
}
float NavigationMesh::get_cell_height(){
	return (float) _wasgo_NavigationMesh_wrapper_get_cell_height(wasgo_id);
}
float NavigationMesh::get_cell_size(){
	return (float) _wasgo_NavigationMesh_wrapper_get_cell_size(wasgo_id);
}
int NavigationMesh::get_collision_mask(){
	return (int) _wasgo_NavigationMesh_wrapper_get_collision_mask(wasgo_id);
}
bool NavigationMesh::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_NavigationMesh_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
float NavigationMesh::get_detail_sample_distance(){
	return (float) _wasgo_NavigationMesh_wrapper_get_detail_sample_distance(wasgo_id);
}
float NavigationMesh::get_detail_sample_max_error(){
	return (float) _wasgo_NavigationMesh_wrapper_get_detail_sample_max_error(wasgo_id);
}
float NavigationMesh::get_edge_max_error(){
	return (float) _wasgo_NavigationMesh_wrapper_get_edge_max_error(wasgo_id);
}
float NavigationMesh::get_edge_max_length(){
	return (float) _wasgo_NavigationMesh_wrapper_get_edge_max_length(wasgo_id);
}
bool NavigationMesh::get_filter_ledge_spans(){
	return (bool) _wasgo_NavigationMesh_wrapper_get_filter_ledge_spans(wasgo_id);
}
bool NavigationMesh::get_filter_low_hanging_obstacles(){
	return (bool) _wasgo_NavigationMesh_wrapper_get_filter_low_hanging_obstacles(wasgo_id);
}
bool NavigationMesh::get_filter_walkable_low_height_spans(){
	return (bool) _wasgo_NavigationMesh_wrapper_get_filter_walkable_low_height_spans(wasgo_id);
}
int NavigationMesh::get_parsed_geometry_type(){
	return (int) _wasgo_NavigationMesh_wrapper_get_parsed_geometry_type(wasgo_id);
}
PoolIntArray NavigationMesh::get_polygon(int p_idx){
	return PoolIntArray(_wasgo_NavigationMesh_wrapper_get_polygon(wasgo_id, p_idx));
}
int NavigationMesh::get_polygon_count(){
	return (int) _wasgo_NavigationMesh_wrapper_get_polygon_count(wasgo_id);
}
float NavigationMesh::get_region_merge_size(){
	return (float) _wasgo_NavigationMesh_wrapper_get_region_merge_size(wasgo_id);
}
float NavigationMesh::get_region_min_size(){
	return (float) _wasgo_NavigationMesh_wrapper_get_region_min_size(wasgo_id);
}
int NavigationMesh::get_sample_partition_type(){
	return (int) _wasgo_NavigationMesh_wrapper_get_sample_partition_type(wasgo_id);
}
int NavigationMesh::get_source_geometry_mode(){
	return (int) _wasgo_NavigationMesh_wrapper_get_source_geometry_mode(wasgo_id);
}
String NavigationMesh::get_source_group_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_NavigationMesh_wrapper_get_source_group_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
PoolVector3Array NavigationMesh::get_vertices(){
	return PoolVector3Array(_wasgo_NavigationMesh_wrapper_get_vertices(wasgo_id));
}
float NavigationMesh::get_verts_per_poly(){
	return (float) _wasgo_NavigationMesh_wrapper_get_verts_per_poly(wasgo_id);
}
void NavigationMesh::set_agent_height(float p_agent_height){
	_wasgo_NavigationMesh_wrapper_set_agent_height(wasgo_id, p_agent_height);
}
void NavigationMesh::set_agent_max_climb(float p_agent_max_climb){
	_wasgo_NavigationMesh_wrapper_set_agent_max_climb(wasgo_id, p_agent_max_climb);
}
void NavigationMesh::set_agent_max_slope(float p_agent_max_slope){
	_wasgo_NavigationMesh_wrapper_set_agent_max_slope(wasgo_id, p_agent_max_slope);
}
void NavigationMesh::set_agent_radius(float p_agent_radius){
	_wasgo_NavigationMesh_wrapper_set_agent_radius(wasgo_id, p_agent_radius);
}
void NavigationMesh::set_cell_height(float p_cell_height){
	_wasgo_NavigationMesh_wrapper_set_cell_height(wasgo_id, p_cell_height);
}
void NavigationMesh::set_cell_size(float p_cell_size){
	_wasgo_NavigationMesh_wrapper_set_cell_size(wasgo_id, p_cell_size);
}
void NavigationMesh::set_collision_mask(int p_mask){
	_wasgo_NavigationMesh_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void NavigationMesh::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_NavigationMesh_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}
void NavigationMesh::set_detail_sample_distance(float p_detail_sample_dist){
	_wasgo_NavigationMesh_wrapper_set_detail_sample_distance(wasgo_id, p_detail_sample_dist);
}
void NavigationMesh::set_detail_sample_max_error(float p_detail_sample_max_error){
	_wasgo_NavigationMesh_wrapper_set_detail_sample_max_error(wasgo_id, p_detail_sample_max_error);
}
void NavigationMesh::set_edge_max_error(float p_edge_max_error){
	_wasgo_NavigationMesh_wrapper_set_edge_max_error(wasgo_id, p_edge_max_error);
}
void NavigationMesh::set_edge_max_length(float p_edge_max_length){
	_wasgo_NavigationMesh_wrapper_set_edge_max_length(wasgo_id, p_edge_max_length);
}
void NavigationMesh::set_filter_ledge_spans(bool p_filter_ledge_spans){
	_wasgo_NavigationMesh_wrapper_set_filter_ledge_spans(wasgo_id, p_filter_ledge_spans);
}
void NavigationMesh::set_filter_low_hanging_obstacles(bool p_filter_low_hanging_obstacles){
	_wasgo_NavigationMesh_wrapper_set_filter_low_hanging_obstacles(wasgo_id, p_filter_low_hanging_obstacles);
}
void NavigationMesh::set_filter_walkable_low_height_spans(bool p_filter_walkable_low_height_spans){
	_wasgo_NavigationMesh_wrapper_set_filter_walkable_low_height_spans(wasgo_id, p_filter_walkable_low_height_spans);
}
void NavigationMesh::set_parsed_geometry_type(int p_geometry_type){
	_wasgo_NavigationMesh_wrapper_set_parsed_geometry_type(wasgo_id, p_geometry_type);
}
void NavigationMesh::set_region_merge_size(float p_region_merge_size){
	_wasgo_NavigationMesh_wrapper_set_region_merge_size(wasgo_id, p_region_merge_size);
}
void NavigationMesh::set_region_min_size(float p_region_min_size){
	_wasgo_NavigationMesh_wrapper_set_region_min_size(wasgo_id, p_region_min_size);
}
void NavigationMesh::set_sample_partition_type(int p_sample_partition_type){
	_wasgo_NavigationMesh_wrapper_set_sample_partition_type(wasgo_id, p_sample_partition_type);
}
void NavigationMesh::set_source_geometry_mode(int p_mask){
	_wasgo_NavigationMesh_wrapper_set_source_geometry_mode(wasgo_id, p_mask);
}
void NavigationMesh::set_source_group_name(String p_mask){

    Variant wasgo_var_mask = p_mask;
    int wasgo_size_mask = String(p_mask).size();
    uint8_t wasgo_buffer_mask[wasgo_size_mask];
    encode_variant(wasgo_var_mask, wasgo_buffer_mask, wasgo_size_mask);
    
	_wasgo_NavigationMesh_wrapper_set_source_group_name(wasgo_id, wasgo_buffer_mask, wasgo_size_mask);
}
void NavigationMesh::set_vertices(PoolVector3Array p_vertices){
	_wasgo_NavigationMesh_wrapper_set_vertices(wasgo_id, p_vertices._get_wasgo_id());
}
void NavigationMesh::set_verts_per_poly(float p_verts_per_poly){
	_wasgo_NavigationMesh_wrapper_set_verts_per_poly(wasgo_id, p_verts_per_poly);
}

NavigationMesh::NavigationMesh(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
NavigationMesh::NavigationMesh(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_NavigationMesh_constructor();
}
NavigationMesh::new_instance(){
    return NavigationMesh(_wasgo_NavigationMesh_constructor());
}