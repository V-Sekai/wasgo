/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Gradient.h"
void Gradient::add_point(float p_offset, Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Gradient_wrapper_add_point(wasgo_id, p_offset, wasgo_buffer_color, wasgo_size_color);
}
Color Gradient::get_color(int p_point){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Gradient_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
PoolColorArray Gradient::get_colors(){
	return PoolColorArray(_wasgo_Gradient_wrapper_get_colors(wasgo_id));
}
float Gradient::get_offset(int p_point){
	return (float) _wasgo_Gradient_wrapper_get_offset(wasgo_id, p_point);
}
PoolRealArray Gradient::get_offsets(){
	return PoolRealArray(_wasgo_Gradient_wrapper_get_offsets(wasgo_id));
}
int Gradient::get_point_count(){
	return (int) _wasgo_Gradient_wrapper_get_point_count(wasgo_id);
}
Color Gradient::interpolate(float p_offset){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Gradient_wrapper_interpolate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_offset);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
void Gradient::remove_point(int p_offset){
	_wasgo_Gradient_wrapper_remove_point(wasgo_id, p_offset);
}
void Gradient::set_color(int p_point, Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Gradient_wrapper_set_color(wasgo_id, p_point, wasgo_buffer_color, wasgo_size_color);
}
void Gradient::set_colors(PoolColorArray p_colors){
	_wasgo_Gradient_wrapper_set_colors(wasgo_id, p_colors._get_wasgo_id());
}
void Gradient::set_offset(int p_point, float p_offset){
	_wasgo_Gradient_wrapper_set_offset(wasgo_id, p_point, p_offset);
}
void Gradient::set_offsets(PoolRealArray p_offsets){
	_wasgo_Gradient_wrapper_set_offsets(wasgo_id, p_offsets._get_wasgo_id());
}

Gradient::Gradient(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Gradient::Gradient(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_Gradient_constructor();
}
Gradient::new_instance(){
    return Gradient(_wasgo_Gradient_constructor());
}