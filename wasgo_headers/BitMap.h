/* THIS FILE IS GENERATED */
#ifndef BITMAP_H
#define BITMAP_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Variant.h"
#include "Rect2.h"
#include "Image.h"
#include "Vector2.h"
class BitMap : public Resource{
public:
void create(Vector2 p_size);
void create_from_image_alpha(Image p_image, float p_threshold = (float) 0.1);
bool get_bit(Vector2 p_position);
Vector2 get_size();
int get_true_bit_count();
void grow_mask(int p_pixels, Rect2 p_rect);
Array opaque_to_polygons(Rect2 p_rect, float p_epsilon = (float) 2);
void set_bit(Vector2 p_position, bool p_bit);
void set_bit_rect(Rect2 p_rect, bool p_bit);

protected:
BitMap(WasGoId p_wasgo_id);
public:
BitMap();
~BitMap();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BitMap_wrapper_create(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_BitMap_wrapper_create_from_image_alpha(WasGoId wasgo_id, WasGoId p_image, float p_threshold);
int _wasgo_BitMap_wrapper_get_bit(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_BitMap_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_BitMap_wrapper_get_true_bit_count(WasGoId wasgo_id);
void _wasgo_BitMap_wrapper_grow_mask(WasGoId wasgo_id, int p_pixels, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
WasGoId _wasgo_BitMap_wrapper_opaque_to_polygons(WasGoId wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, float p_epsilon);
void _wasgo_BitMap_wrapper_set_bit(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, bool p_bit);
void _wasgo_BitMap_wrapper_set_bit_rect(WasGoId wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, bool p_bit);

    //constructor and destructor wrappers
    WasGoId _wasgo_BitMap_constructor();
    void _wasgo_BitMap_destructor(WasGoId p_wasgo_id);
            
}
#endif