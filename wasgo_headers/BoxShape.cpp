/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BoxShape.h"
Vector3 BoxShape::get_extents(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_BoxShape_wrapper_get_extents(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
void BoxShape::set_extents(Vector3 p_extents){

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[16];
    int wasgo_size_extents = 16;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_BoxShape_wrapper_set_extents(wasgo_id, wasgo_buffer_extents, wasgo_size_extents);
}

BoxShape::BoxShape(WasGoId p_wasgo_id) : Shape(p_wasgo_id){
}
BoxShape::BoxShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_BoxShape_constructor();
}
BoxShape::new_instance(){
    return BoxShape(_wasgo_BoxShape_constructor());
}