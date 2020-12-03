/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BitMap.h"
void BitMap::create(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_BitMap_wrapper_create(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void BitMap::create_from_image_alpha(Image p_image, float p_threshold = (float) 0.1){
	_wasgo_BitMap_wrapper_create_from_image_alpha(wasgo_id, p_image._get_wasgo_id(), p_threshold);
}
bool BitMap::get_bit(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return (bool) _wasgo_BitMap_wrapper_get_bit(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
Vector2 BitMap::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_BitMap_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int BitMap::get_true_bit_count(){
	return (int) _wasgo_BitMap_wrapper_get_true_bit_count(wasgo_id);
}
void BitMap::grow_mask(int p_pixels, Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_BitMap_wrapper_grow_mask(wasgo_id, p_pixels, wasgo_buffer_rect, wasgo_size_rect);
}
Array BitMap::opaque_to_polygons(Rect2 p_rect, float p_epsilon = (float) 2){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	return Array(_wasgo_BitMap_wrapper_opaque_to_polygons(wasgo_id, wasgo_buffer_rect, wasgo_size_rect, p_epsilon));
}
void BitMap::set_bit(Vector2 p_position, bool p_bit){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_BitMap_wrapper_set_bit(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_bit);
}
void BitMap::set_bit_rect(Rect2 p_rect, bool p_bit){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_BitMap_wrapper_set_bit_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect, p_bit);
}

BitMap::BitMap(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
BitMap::BitMap(){
    wasgo_id = _wasgo_BitMap_constructor();
}
BitMap::~BitMap(){
    _wasgo_BitMap_destructor(wasgo_id);
}