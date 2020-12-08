/* THIS FILE IS GENERATED */
#ifndef BITMAP_H
#define BITMAP_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "Rect2.h"
#include "Resource.h"
#include "Image.h"
#include "Variant.h"
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
public:
explicit BitMap(WasGoID p_wasgo_id);
explicit BitMap(Resource other);
BitMap();
BitMap new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BitMap_wrapper_create(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_BitMap_wrapper_create_from_image_alpha(WasGoID wasgo_id, WasGoID p_image, float p_threshold);
int _wasgo_BitMap_wrapper_get_bit(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_BitMap_wrapper_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_BitMap_wrapper_get_true_bit_count(WasGoID wasgo_id);
void _wasgo_BitMap_wrapper_grow_mask(WasGoID wasgo_id, int p_pixels, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
WasGoID _wasgo_BitMap_wrapper_opaque_to_polygons(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, float p_epsilon);
void _wasgo_BitMap_wrapper_set_bit(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, bool p_bit);
void _wasgo_BitMap_wrapper_set_bit_rect(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, bool p_bit);

    //constructor wrappers
    WasGoID _wasgo_BitMap_constructor();
            
}
#endif