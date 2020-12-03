/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ColorRect.h"
Color ColorRect::get_frame_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ColorRect_wrapper_get_frame_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
void ColorRect::set_frame_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ColorRect_wrapper_set_frame_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}

ColorRect::ColorRect(WasGoId p_wasgo_id) : Control(p_wasgo_id){
}
ColorRect::ColorRect(){
    wasgo_id = _wasgo_ColorRect_constructor();
}
ColorRect::~ColorRect(){
    _wasgo_ColorRect_destructor(wasgo_id);
}