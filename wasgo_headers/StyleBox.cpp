/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StyleBox.h"
void StyleBox::draw(RID p_canvas_item, Rect2 p_rect){

    Variant wasgo_var_canvas_item = p_canvas_item;
    uint8_t wasgo_buffer_canvas_item[0];
    int wasgo_size_canvas_item = 0;
    encode_variant(wasgo_var_canvas_item, wasgo_buffer_canvas_item, wasgo_size_canvas_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_StyleBox_wrapper_draw(wasgo_id, wasgo_buffer_canvas_item, wasgo_size_canvas_item, wasgo_buffer_rect, wasgo_size_rect);
}
Vector2 StyleBox::get_center_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_StyleBox_wrapper_get_center_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
CanvasItem StyleBox::get_current_item_drawn(){
	return CanvasItem(_wasgo_StyleBox_wrapper_get_current_item_drawn(wasgo_id));
}
float StyleBox::get_default_margin(Margin p_margin){
	return (float) _wasgo_StyleBox_wrapper_get_default_margin(wasgo_id, p_margin._get_wasgo_id());
}
float StyleBox::get_margin(Margin p_margin){
	return (float) _wasgo_StyleBox_wrapper_get_margin(wasgo_id, p_margin._get_wasgo_id());
}
Vector2 StyleBox::get_minimum_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_StyleBox_wrapper_get_minimum_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 StyleBox::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_StyleBox_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
void StyleBox::set_default_margin(Margin p_margin, float p_offset){
	_wasgo_StyleBox_wrapper_set_default_margin(wasgo_id, p_margin._get_wasgo_id(), p_offset);
}
bool StyleBox::test_mask(Vector2 p_point, Rect2 p_rect){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	return (bool) _wasgo_StyleBox_wrapper_test_mask(wasgo_id, wasgo_buffer_point, wasgo_size_point, wasgo_buffer_rect, wasgo_size_rect);
}