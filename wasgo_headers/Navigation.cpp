/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Navigation.h"
Vector3 Navigation::get_closest_point(Vector3 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[16];
    int wasgo_size_to_point = 16;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Navigation_wrapper_get_closest_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_to_point, wasgo_size_to_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Navigation::get_closest_point_normal(Vector3 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[16];
    int wasgo_size_to_point = 16;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Navigation_wrapper_get_closest_point_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_to_point, wasgo_size_to_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Object Navigation::get_closest_point_owner(Vector3 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[16];
    int wasgo_size_to_point = 16;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    
	return Object(_wasgo_Navigation_wrapper_get_closest_point_owner(wasgo_id, wasgo_buffer_to_point, wasgo_size_to_point));
}
Vector3 Navigation::get_closest_point_to_segment(Vector3 p_start, Vector3 p_end, bool p_use_collision = (bool) false){

    Variant wasgo_var_start = p_start;
    uint8_t wasgo_buffer_start[16];
    int wasgo_size_start = 16;
    encode_variant(wasgo_var_start, wasgo_buffer_start, wasgo_size_start);
    

    Variant wasgo_var_end = p_end;
    uint8_t wasgo_buffer_end[16];
    int wasgo_size_end = 16;
    encode_variant(wasgo_var_end, wasgo_buffer_end, wasgo_size_end);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Navigation_wrapper_get_closest_point_to_segment(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_start, wasgo_size_start, wasgo_buffer_end, wasgo_size_end, p_use_collision);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
PoolVector3Array Navigation::get_simple_path(Vector3 p_start, Vector3 p_end, bool p_optimize = (bool) true){

    Variant wasgo_var_start = p_start;
    uint8_t wasgo_buffer_start[16];
    int wasgo_size_start = 16;
    encode_variant(wasgo_var_start, wasgo_buffer_start, wasgo_size_start);
    

    Variant wasgo_var_end = p_end;
    uint8_t wasgo_buffer_end[16];
    int wasgo_size_end = 16;
    encode_variant(wasgo_var_end, wasgo_buffer_end, wasgo_size_end);
    
	return PoolVector3Array(_wasgo_Navigation_wrapper_get_simple_path(wasgo_id, wasgo_buffer_start, wasgo_size_start, wasgo_buffer_end, wasgo_size_end, p_optimize));
}
Vector3 Navigation::get_up_vector(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Navigation_wrapper_get_up_vector(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
int Navigation::navmesh_add(NavigationMesh p_mesh, Transform p_xform, Object p_owner = (Object) ""){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[52];
    int wasgo_size_xform = 52;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	return (int) _wasgo_Navigation_wrapper_navmesh_add(wasgo_id, p_mesh._get_wasgo_id(), wasgo_buffer_xform, wasgo_size_xform, p_owner._get_wasgo_id());
}
void Navigation::navmesh_remove(int p_id){
	_wasgo_Navigation_wrapper_navmesh_remove(wasgo_id, p_id);
}
void Navigation::navmesh_set_transform(int p_id, Transform p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[52];
    int wasgo_size_xform = 52;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_Navigation_wrapper_navmesh_set_transform(wasgo_id, p_id, wasgo_buffer_xform, wasgo_size_xform);
}
void Navigation::set_up_vector(Vector3 p_up){

    Variant wasgo_var_up = p_up;
    uint8_t wasgo_buffer_up[16];
    int wasgo_size_up = 16;
    encode_variant(wasgo_var_up, wasgo_buffer_up, wasgo_size_up);
    
	_wasgo_Navigation_wrapper_set_up_vector(wasgo_id, wasgo_buffer_up, wasgo_size_up);
}

Navigation::Navigation(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
Navigation::Navigation(){
    wasgo_id = _wasgo_Navigation_constructor();
}
Navigation::~Navigation(){
    _wasgo_Navigation_destructor(wasgo_id);
}