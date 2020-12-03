/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PolygonPathFinder.h"
PoolVector2Array PolygonPathFinder::find_path(Vector2 p_from, Vector2 p_to){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[12];
    int wasgo_size_from = 12;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[12];
    int wasgo_size_to = 12;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return PoolVector2Array(_wasgo_PolygonPathFinder_wrapper_find_path(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to));
}
Rect2 PolygonPathFinder::get_bounds(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_PolygonPathFinder_wrapper_get_bounds(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Vector2 PolygonPathFinder::get_closest_point(Vector2 p_point){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_PolygonPathFinder_wrapper_get_closest_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_point, wasgo_size_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
PoolVector2Array PolygonPathFinder::get_intersections(Vector2 p_from, Vector2 p_to){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[12];
    int wasgo_size_from = 12;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[12];
    int wasgo_size_to = 12;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return PoolVector2Array(_wasgo_PolygonPathFinder_wrapper_get_intersections(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to));
}
float PolygonPathFinder::get_point_penalty(int p_idx){
	return (float) _wasgo_PolygonPathFinder_wrapper_get_point_penalty(wasgo_id, p_idx);
}
bool PolygonPathFinder::is_point_inside(Vector2 p_point){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    
	return (bool) _wasgo_PolygonPathFinder_wrapper_is_point_inside(wasgo_id, wasgo_buffer_point, wasgo_size_point);
}
void PolygonPathFinder::set_point_penalty(int p_idx, float p_penalty){
	_wasgo_PolygonPathFinder_wrapper_set_point_penalty(wasgo_id, p_idx, p_penalty);
}
void PolygonPathFinder::setup(PoolVector2Array p_points, PoolIntArray p_connections){
	_wasgo_PolygonPathFinder_wrapper_setup(wasgo_id, p_points._get_wasgo_id(), p_connections._get_wasgo_id());
}

PolygonPathFinder::PolygonPathFinder(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
PolygonPathFinder::PolygonPathFinder(){
    wasgo_id = _wasgo_PolygonPathFinder_constructor();
}
PolygonPathFinder::~PolygonPathFinder(){
    _wasgo_PolygonPathFinder_destructor(wasgo_id);
}