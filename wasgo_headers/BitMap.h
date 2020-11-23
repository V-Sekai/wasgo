/* THIS FILE IS GENERATED */
#ifndef BITMAP_H
#define BITMAP_H

#include <stdint.h>

#include "Resource.h"
#include "Rect2.h"
#include "Vector2.h"
#include "Dictionary.h"
#include "Image.h"
#include "Variant.h"
class BitMap : public Resource{
public: BitMap();
Dictionary  _get_data();
Dictionary  _get_data();
void  _set_data(Dictionary arg0);
void  create(Vector2 size);
void  create_from_image_alpha(Image image, float threshold = 0.1);
bool  get_bit(Vector2 position);
Vector2  get_size();
Vector2  get_size();
int  get_true_bit_count();
int  get_true_bit_count();
void  grow_mask(int pixels, Rect2 rect);
Array  opaque_to_polygons(Rect2 rect, float epsilon = 2);
void  set_bit(Vector2 position, bool bit);
void  set_bit_rect(Rect2 rect, bool bit);
};
#endif