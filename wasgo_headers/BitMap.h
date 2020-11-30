/* THIS FILE IS GENERATED */
#ifndef BITMAP_H
#define BITMAP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Image.h"
#include "Resource.h"
class BitMap : public Resource{
void create(Vector2 p_size);
void create_from_image_alpha(Image p_image, float p_threshold = (float) 0.1);
bool get_bit(Vector2 p_position);
Vector2 get_size();
int get_true_bit_count();
void set_bit(Vector2 p_position, bool p_bit);
void set_bit_rect(Rect2 p_rect, bool p_bit);

BitMap(WasGoId p_wasgo_id);
~BitMap();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BitMap_wrapper_create(WasGoId wasgo_id, WasGo::WasGoId p_size);
void _wasgo_BitMap_wrapper_create_from_image_alpha(WasGoId wasgo_id, WasGo::WasGoId p_image, float p_threshold);
int _wasgo_BitMap_wrapper_get_bit(WasGoId wasgo_id, WasGo::WasGoId p_position);
WasGo::WasGoId _wasgo_BitMap_wrapper_get_size(WasGoId wasgo_id);
int _wasgo_BitMap_wrapper_get_true_bit_count(WasGoId wasgo_id);
void _wasgo_BitMap_wrapper_set_bit(WasGoId wasgo_id, WasGo::WasGoId p_position, bool p_bit);
void _wasgo_BitMap_wrapper_set_bit_rect(WasGoId wasgo_id, WasGo::WasGoId p_rect, bool p_bit);
}
#endif