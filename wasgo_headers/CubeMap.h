/* THIS FILE IS GENERATED */
#ifndef CUBEMAP_H
#define CUBEMAP_H

#include "stdint.h"

#include "Resource.h"
#include "Image.h"
class CubeMap : public Resource{
public: CubeMap();
enum Flags{
FLAG_MIPMAPS,
FLAG_REPEAT,
FLAG_FILTER,
FLAGS_DEFAULT
};
enum Side{
SIDE_LEFT,
SIDE_RIGHT,
SIDE_BOTTOM,
SIDE_TOP,
SIDE_FRONT,
SIDE_BACK
};
enum Storage{
STORAGE_RAW,
STORAGE_COMPRESS_LOSSY,
STORAGE_COMPRESS_LOSSLESS
};
int get_flags();
int get_height();
float get_lossy_storage_quality();
Image get_side(CubeMap::Side p_side);
CubeMap::Storage get_storage();
int get_width();
void set_flags(int p_flags);
void set_lossy_storage_quality(float p_quality);
void set_side(CubeMap::Side p_side, Image p_image);
void set_storage(CubeMap::Storage p_mode);
};
#endif