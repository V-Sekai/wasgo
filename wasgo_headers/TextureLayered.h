/* THIS FILE IS GENERATED */
#ifndef TEXTURELAYERED_H
#define TEXTURELAYERED_H

#include <stdint.h>

#include "Image.h"
#include "Dictionary.h"
#include "Resource.h"
class TextureLayered : public Resource{
public: TextureLayered();
enum Flags{
FLAG_MIPMAPS: 1,
FLAG_REPEAT: 2,
FLAG_FILTER: 4,
};
Dictionary  _get_data();
Dictionary  _get_data();
void  _set_data(Dictionary data);
void  create(int width, int height, int depth, int format, int flags = 4);
int  get_depth();
int  get_depth();
int  get_flags();
int  get_flags();
enum.Image::Format  get_format();
enum.Image::Format  get_format();
int  get_height();
int  get_height();
Image  get_layer_data(int layer);
int  get_width();
int  get_width();
void  set_data_partial(Image image, int x_offset, int y_offset, int layer, int mipmap = 0);
void  set_flags(int flags);
void  set_layer_data(Image image, int layer);
};
#endif