/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RectangleShape2D.h"
Vector2 RectangleShape2D::get_extents(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_RectangleShape2D_wrapper_get_extents(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void RectangleShape2D::set_extents(Vector2 p_extents){

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[12];
    int wasgo_size_extents = 12;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_RectangleShape2D_wrapper_set_extents(wasgo_id, wasgo_buffer_extents, wasgo_size_extents);
}

RectangleShape2D::RectangleShape2D(WasGoID p_wasgo_id) : Shape2D(p_wasgo_id){
}
RectangleShape2D::RectangleShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_RectangleShape2D_constructor();
}
RectangleShape2D::new_instance(){
    return RectangleShape2D(_wasgo_RectangleShape2D_constructor());
}