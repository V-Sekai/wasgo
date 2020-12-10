/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Texture.h"
void Texture::draw(RID p_canvas_item, Vector2 p_position, Color p_modulate, bool p_transpose, Texture p_normal_map){

    Variant wasgo_var_canvas_item = p_canvas_item;
    uint8_t wasgo_buffer_canvas_item[256];
    int wasgo_size_canvas_item = 256;
    encode_variant(wasgo_var_canvas_item, wasgo_buffer_canvas_item, wasgo_size_canvas_item);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_Texture_wrapper_draw(wasgo_id, wasgo_buffer_canvas_item, wasgo_size_canvas_item, -69, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_modulate, wasgo_size_modulate, p_transpose, p_normal_map._get_wasgo_id());
}
void Texture::draw_rect(RID p_canvas_item, Rect2 p_rect, bool p_tile, Color p_modulate, bool p_transpose, Texture p_normal_map){

    Variant wasgo_var_canvas_item = p_canvas_item;
    uint8_t wasgo_buffer_canvas_item[256];
    int wasgo_size_canvas_item = 256;
    encode_variant(wasgo_var_canvas_item, wasgo_buffer_canvas_item, wasgo_size_canvas_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_Texture_wrapper_draw_rect(wasgo_id, wasgo_buffer_canvas_item, wasgo_size_canvas_item, -69, wasgo_buffer_rect, wasgo_size_rect, p_tile, wasgo_buffer_modulate, wasgo_size_modulate, p_transpose, p_normal_map._get_wasgo_id());
}
void Texture::draw_rect_region(RID p_canvas_item, Rect2 p_rect, Rect2 p_src_rect, Color p_modulate, bool p_transpose, Texture p_normal_map, bool p_clip_uv){

    Variant wasgo_var_canvas_item = p_canvas_item;
    uint8_t wasgo_buffer_canvas_item[256];
    int wasgo_size_canvas_item = 256;
    encode_variant(wasgo_var_canvas_item, wasgo_buffer_canvas_item, wasgo_size_canvas_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_src_rect = p_src_rect;
    uint8_t wasgo_buffer_src_rect[20];
    int wasgo_size_src_rect = 20;
    encode_variant(wasgo_var_src_rect, wasgo_buffer_src_rect, wasgo_size_src_rect);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_Texture_wrapper_draw_rect_region(wasgo_id, wasgo_buffer_canvas_item, wasgo_size_canvas_item, -69, wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_src_rect, wasgo_size_src_rect, wasgo_buffer_modulate, wasgo_size_modulate, p_transpose, p_normal_map._get_wasgo_id(), p_clip_uv);
}
Image Texture::get_data(){
	return Image(_wasgo_Texture_wrapper_get_data(wasgo_id));
}
int Texture::get_flags(){
	return (int) _wasgo_Texture_wrapper_get_flags(wasgo_id);
}
int Texture::get_height(){
	return (int) _wasgo_Texture_wrapper_get_height(wasgo_id);
}
Vector2 Texture::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Texture_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Texture::get_width(){
	return (int) _wasgo_Texture_wrapper_get_width(wasgo_id);
}
bool Texture::has_alpha(){
	return (bool) _wasgo_Texture_wrapper_has_alpha(wasgo_id);
}
void Texture::set_flags(int p_flags){
	_wasgo_Texture_wrapper_set_flags(wasgo_id, p_flags);
}

Texture::Texture(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Texture::Texture(Resource other) : Resource(other._get_wasgo_id()){
}
Texture::Texture():Resource(){
}
Texture Texture::new_instance(){
    return Texture(_wasgo_Texture_constructor());
}
WasGoID Texture::_get_wasgo_id(){
    return wasgo_id;
}
Texture::operator bool(){
    return (bool) wasgo_id;
}
