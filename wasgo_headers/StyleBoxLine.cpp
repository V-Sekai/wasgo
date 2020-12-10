/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StyleBoxLine.h"
Color StyleBoxLine::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_StyleBoxLine_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float StyleBoxLine::get_grow_begin(){
	return (float) _wasgo_StyleBoxLine_wrapper_get_grow_begin(wasgo_id);
}
float StyleBoxLine::get_grow_end(){
	return (float) _wasgo_StyleBoxLine_wrapper_get_grow_end(wasgo_id);
}
int StyleBoxLine::get_thickness(){
	return (int) _wasgo_StyleBoxLine_wrapper_get_thickness(wasgo_id);
}
bool StyleBoxLine::is_vertical(){
	return (bool) _wasgo_StyleBoxLine_wrapper_is_vertical(wasgo_id);
}
void StyleBoxLine::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_StyleBoxLine_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void StyleBoxLine::set_grow_begin(float p_offset){
	_wasgo_StyleBoxLine_wrapper_set_grow_begin(wasgo_id, p_offset);
}
void StyleBoxLine::set_grow_end(float p_offset){
	_wasgo_StyleBoxLine_wrapper_set_grow_end(wasgo_id, p_offset);
}
void StyleBoxLine::set_thickness(int p_thickness){
	_wasgo_StyleBoxLine_wrapper_set_thickness(wasgo_id, p_thickness);
}
void StyleBoxLine::set_vertical(bool p_vertical){
	_wasgo_StyleBoxLine_wrapper_set_vertical(wasgo_id, p_vertical);
}

StyleBoxLine::StyleBoxLine(WasGoID p_wasgo_id) : StyleBox(p_wasgo_id){
}
StyleBoxLine::StyleBoxLine(StyleBox other) : StyleBox(other._get_wasgo_id()){
}
StyleBoxLine::StyleBoxLine():StyleBox(){
}
StyleBoxLine StyleBoxLine::new_instance(){
    return StyleBoxLine(_wasgo_StyleBoxLine_constructor());
}
WasGoID StyleBoxLine::_get_wasgo_id(){
    return wasgo_id;
}
StyleBoxLine::operator bool(){
    return (bool) wasgo_id;
}
