/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CanvasModulate.h"
Color CanvasModulate::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_CanvasModulate_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void CanvasModulate::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasModulate_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}

CanvasModulate::CanvasModulate(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
CanvasModulate::CanvasModulate(Node2D other) : Node2D(other._get_wasgo_id()){
}
CanvasModulate::CanvasModulate():Node2D(){
}
CanvasModulate CanvasModulate::new_instance(){
    return CanvasModulate(_wasgo_CanvasModulate_constructor());
}
WasGoID CanvasModulate::_get_wasgo_id(){
    return wasgo_id;
}
CanvasModulate::operator bool(){
    return (bool) wasgo_id;
}
