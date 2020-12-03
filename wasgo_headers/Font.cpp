/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Font.h"
void Font::draw(RID p_canvas_item, Vector2 p_position, String p_string, Color p_modulate = Color(1,1,1,1), int p_clip_w = (int) -1, Color p_outline_modulate = Color(1,1,1,1)){

    Variant wasgo_var_canvas_item = p_canvas_item;
    uint8_t wasgo_buffer_canvas_item[0];
    int wasgo_size_canvas_item = 0;
    encode_variant(wasgo_var_canvas_item, wasgo_buffer_canvas_item, wasgo_size_canvas_item);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_string = p_string;
    uint8_t wasgo_buffer_string[256];
    int wasgo_size_string = 256;
    encode_variant(wasgo_var_string, wasgo_buffer_string, wasgo_size_string);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    

    Variant wasgo_var_outline_modulate = p_outline_modulate;
    uint8_t wasgo_buffer_outline_modulate[20];
    int wasgo_size_outline_modulate = 20;
    encode_variant(wasgo_var_outline_modulate, wasgo_buffer_outline_modulate, wasgo_size_outline_modulate);
    
	_wasgo_Font_wrapper_draw(wasgo_id, wasgo_buffer_canvas_item, wasgo_size_canvas_item, wasgo_buffer_position, wasgo_size_position, wasgo_buffer_string, wasgo_size_string, wasgo_buffer_modulate, wasgo_size_modulate, p_clip_w, wasgo_buffer_outline_modulate, wasgo_size_outline_modulate);
}
float Font::draw_char(RID p_canvas_item, Vector2 p_position, int p_char, int p_next = (int) -1, Color p_modulate = Color(1,1,1,1), bool p_outline = (bool) false){

    Variant wasgo_var_canvas_item = p_canvas_item;
    uint8_t wasgo_buffer_canvas_item[0];
    int wasgo_size_canvas_item = 0;
    encode_variant(wasgo_var_canvas_item, wasgo_buffer_canvas_item, wasgo_size_canvas_item);
    

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	return (float) _wasgo_Font_wrapper_draw_char(wasgo_id, wasgo_buffer_canvas_item, wasgo_size_canvas_item, wasgo_buffer_position, wasgo_size_position, p_char, p_next, wasgo_buffer_modulate, wasgo_size_modulate, p_outline);
}
float Font::get_ascent(){
	return (float) _wasgo_Font_wrapper_get_ascent(wasgo_id);
}
Vector2 Font::get_char_size(int p_char, int p_next = (int) 0){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Font_wrapper_get_char_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_char, p_next);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float Font::get_descent(){
	return (float) _wasgo_Font_wrapper_get_descent(wasgo_id);
}
float Font::get_height(){
	return (float) _wasgo_Font_wrapper_get_height(wasgo_id);
}
Vector2 Font::get_string_size(String p_string){

    Variant wasgo_var_string = p_string;
    uint8_t wasgo_buffer_string[256];
    int wasgo_size_string = 256;
    encode_variant(wasgo_var_string, wasgo_buffer_string, wasgo_size_string);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Font_wrapper_get_string_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_string, wasgo_size_string);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Font::get_wordwrap_string_size(String p_string, float p_width){

    Variant wasgo_var_string = p_string;
    uint8_t wasgo_buffer_string[256];
    int wasgo_size_string = 256;
    encode_variant(wasgo_var_string, wasgo_buffer_string, wasgo_size_string);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Font_wrapper_get_wordwrap_string_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_string, wasgo_size_string, p_width);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
bool Font::has_outline(){
	return (bool) _wasgo_Font_wrapper_has_outline(wasgo_id);
}
bool Font::is_distance_field_hint(){
	return (bool) _wasgo_Font_wrapper_is_distance_field_hint(wasgo_id);
}
void Font::update_changes(){
	_wasgo_Font_wrapper_update_changes(wasgo_id);
}