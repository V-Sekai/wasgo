/* THIS FILE IS GENERATED */
#include "BitMap.h"
void BitMap::create(Vector2 p_size){
	_wasgo_BitMap_wrapper_create(wasgo_id, ((Variant) size).get_wasgo_id());
}
void BitMap::create_from_image_alpha(Image p_image, float p_threshold = (float) 0.1){
	_wasgo_BitMap_wrapper_create_from_image_alpha(wasgo_id, ((Variant) image).get_wasgo_id(), threshold);
}
bool BitMap::get_bit(Vector2 p_position){
	return (bool) _wasgo_BitMap_wrapper_get_bit(wasgo_id, ((Variant) position).get_wasgo_id()));
}
Vector2 BitMap::get_size(){
	return Vector2::from_wasgo_id(_wasgo_BitMap_wrapper_get_size(wasgo_id));
}
int BitMap::get_true_bit_count(){
	return (int) _wasgo_BitMap_wrapper_get_true_bit_count(wasgo_id));
}
void BitMap::set_bit(Vector2 p_position, bool p_bit){
	_wasgo_BitMap_wrapper_set_bit(wasgo_id, ((Variant) position).get_wasgo_id(), bit);
}
void BitMap::set_bit_rect(Rect2 p_rect, bool p_bit){
	_wasgo_BitMap_wrapper_set_bit_rect(wasgo_id, ((Variant) rect).get_wasgo_id(), bit);
}

BitMap::BitMap(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
BitMap::~BitMap(){
}