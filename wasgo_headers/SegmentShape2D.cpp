/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SegmentShape2D.h"
Vector2 SegmentShape2D::get_a(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_SegmentShape2D_wrapper_get_a(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 SegmentShape2D::get_b(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_SegmentShape2D_wrapper_get_b(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void SegmentShape2D::set_a(Vector2 p_a){

    Variant wasgo_var_a = p_a;
    uint8_t wasgo_buffer_a[12];
    int wasgo_size_a = 12;
    encode_variant(wasgo_var_a, wasgo_buffer_a, wasgo_size_a);
    
	_wasgo_SegmentShape2D_wrapper_set_a(wasgo_id, wasgo_buffer_a, wasgo_size_a);
}
void SegmentShape2D::set_b(Vector2 p_b){

    Variant wasgo_var_b = p_b;
    uint8_t wasgo_buffer_b[12];
    int wasgo_size_b = 12;
    encode_variant(wasgo_var_b, wasgo_buffer_b, wasgo_size_b);
    
	_wasgo_SegmentShape2D_wrapper_set_b(wasgo_id, wasgo_buffer_b, wasgo_size_b);
}

SegmentShape2D::SegmentShape2D(WasGoID p_wasgo_id) : Shape2D(p_wasgo_id){
}
SegmentShape2D::SegmentShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
}
SegmentShape2D::SegmentShape2D():Shape2D(){
}
SegmentShape2D SegmentShape2D::new_instance(){
    return SegmentShape2D(_wasgo_SegmentShape2D_constructor());
}
WasGoID SegmentShape2D::_get_wasgo_id(){
    return wasgo_id;
}
SegmentShape2D::operator bool(){
    return (bool) wasgo_id;
}
