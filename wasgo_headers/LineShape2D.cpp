/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "LineShape2D.h"
float LineShape2D::get_d(){
	return (float) _wasgo_LineShape2D_wrapper_get_d(wasgo_id);
}
Vector2 LineShape2D::get_normal(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_LineShape2D_wrapper_get_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void LineShape2D::set_d(float p_d){
	_wasgo_LineShape2D_wrapper_set_d(wasgo_id, p_d);
}
void LineShape2D::set_normal(Vector2 p_normal){

    Variant wasgo_var_normal = p_normal;
    uint8_t wasgo_buffer_normal[12];
    int wasgo_size_normal = 12;
    encode_variant(wasgo_var_normal, wasgo_buffer_normal, wasgo_size_normal);
    
	_wasgo_LineShape2D_wrapper_set_normal(wasgo_id, wasgo_buffer_normal, wasgo_size_normal);
}

LineShape2D::LineShape2D(WasGoID p_wasgo_id) : Shape2D(p_wasgo_id){
}
LineShape2D::LineShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
}
LineShape2D::LineShape2D():Shape2D(){
}
LineShape2D LineShape2D::new_instance(){
    return LineShape2D(_wasgo_LineShape2D_constructor());
}
WasGoID LineShape2D::_get_wasgo_id(){
    return wasgo_id;
}
LineShape2D::operator bool(){
    return (bool) wasgo_id;
}
