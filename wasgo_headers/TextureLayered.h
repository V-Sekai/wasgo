/* THIS FILE IS GENERATED */
#ifndef TEXTURELAYERED_H
#define TEXTURELAYERED_H

#include "stdint.h"

#include "Resource.h"
#include "Image.h"
class TextureLayered : public Resource{
public: TextureLayered();
enum Flags{
FLAG_MIPMAPS,
FLAG_REPEAT,
FLAG_FILTER,
FLAGS_DEFAULT
};
void create(int p_width, int p_height, int p_depth, Image::Format p_format, int p_flags = (int) 4);
int get_depth();
int get_flags();
Image::Format get_format();
int get_height();
Image get_layer_data(int p_layer);
int get_width();
void set_data_partial(Image p_image, int p_x_offset, int p_y_offset, int p_layer, int p_mipmap = (int) 0);
void set_flags(int p_flags);
void set_layer_data(Image p_image, int p_layer);
};
#endif