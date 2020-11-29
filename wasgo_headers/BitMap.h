/* THIS FILE IS GENERATED */
#ifndef BITMAP_H
#define BITMAP_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Image.h"
class BitMap : public Resource{
public: BitMap();
void create(Vector2 p_size);
void create_from_image_alpha(Image p_image, float p_threshold = (float) 0.1);
bool get_bit(Vector2 p_position);
Vector2 get_size();
int get_true_bit_count();
void set_bit(Vector2 p_position, bool p_bit);
void set_bit_rect(Rect2 p_rect, bool p_bit);
};
#endif