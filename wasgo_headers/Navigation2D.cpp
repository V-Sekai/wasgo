/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Navigation2D.h"
Vector2 Navigation2D::get_closest_point(Vector2 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[12];
    int wasgo_size_to_point = 12;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Navigation2D_wrapper_get_closest_point(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_to_point, wasgo_size_to_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Object Navigation2D::get_closest_point_owner(Vector2 p_to_point){

    Variant wasgo_var_to_point = p_to_point;
    uint8_t wasgo_buffer_to_point[12];
    int wasgo_size_to_point = 12;
    encode_variant(wasgo_var_to_point, wasgo_buffer_to_point, wasgo_size_to_point);
    
	return Object(_wasgo_Navigation2D_wrapper_get_closest_point_owner(wasgo_id, wasgo_buffer_to_point, wasgo_size_to_point));
}
PoolVector2Array Navigation2D::get_simple_path(Vector2 p_start, Vector2 p_end, bool p_optimize = (bool) true){

    Variant wasgo_var_start = p_start;
    uint8_t wasgo_buffer_start[12];
    int wasgo_size_start = 12;
    encode_variant(wasgo_var_start, wasgo_buffer_start, wasgo_size_start);
    

    Variant wasgo_var_end = p_end;
    uint8_t wasgo_buffer_end[12];
    int wasgo_size_end = 12;
    encode_variant(wasgo_var_end, wasgo_buffer_end, wasgo_size_end);
    
	return PoolVector2Array(_wasgo_Navigation2D_wrapper_get_simple_path(wasgo_id, wasgo_buffer_start, wasgo_size_start, wasgo_buffer_end, wasgo_size_end, p_optimize));
}
int Navigation2D::navpoly_add(NavigationPolygon p_mesh, Transform2D p_xform, Object p_owner = (Object) ""){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	return (int) _wasgo_Navigation2D_wrapper_navpoly_add(wasgo_id, p_mesh._get_wasgo_id(), wasgo_buffer_xform, wasgo_size_xform, p_owner._get_wasgo_id());
}
void Navigation2D::navpoly_remove(int p_id){
	_wasgo_Navigation2D_wrapper_navpoly_remove(wasgo_id, p_id);
}
void Navigation2D::navpoly_set_transform(int p_id, Transform2D p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_Navigation2D_wrapper_navpoly_set_transform(wasgo_id, p_id, wasgo_buffer_xform, wasgo_size_xform);
}

Navigation2D::Navigation2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
Navigation2D::Navigation2D(){
    wasgo_id = _wasgo_Navigation2D_constructor();
}
Navigation2D::~Navigation2D(){
    _wasgo_Navigation2D_destructor(wasgo_id);
}