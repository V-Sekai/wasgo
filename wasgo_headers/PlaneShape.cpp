/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PlaneShape.h"
Plane PlaneShape::get_plane(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_PlaneShape_wrapper_get_plane(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Plane) wasgo_ret;
    
}
void PlaneShape::set_plane(Plane p_plane){

    Variant wasgo_var_plane = p_plane;
    uint8_t wasgo_buffer_plane[20];
    int wasgo_size_plane = 20;
    encode_variant(wasgo_var_plane, wasgo_buffer_plane, wasgo_size_plane);
    
	_wasgo_PlaneShape_wrapper_set_plane(wasgo_id, wasgo_buffer_plane, wasgo_size_plane);
}

PlaneShape::PlaneShape(WasGoId p_wasgo_id) : Shape(p_wasgo_id){
}
PlaneShape::PlaneShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_PlaneShape_constructor();
}
PlaneShape::new_instance(){
    return PlaneShape(_wasgo_PlaneShape_constructor());
}