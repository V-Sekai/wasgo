/* THIS FILE IS GENERATED */
#ifndef CUBEMAP_H
#define CUBEMAP_H

#include <stdint.h>

#include "Resource.h"
#include "Image.h"
class CubeMap : public Resource{
public: CubeMap();
enum Flags{
FLAG_MIPMAPS: 1,
FLAG_REPEAT: 2,
FLAG_FILTER: 4,
};
enum Side{
SIDE_LEFT: 0,
SIDE_RIGHT: 1,
SIDE_BOTTOM: 2,
SIDE_TOP: 3,
SIDE_FRONT: 4,
};
enum Storage{
STORAGE_RAW: 0,
STORAGE_COMPRESS_LOSSY: 1,
};
int  get_flags();
int  get_flags();
int  get_height();
int  get_height();
float  get_lossy_storage_quality();
float  get_lossy_storage_quality();
Image  get_side(int side);
enum.CubeMap::Storage  get_storage();
enum.CubeMap::Storage  get_storage();
int  get_width();
int  get_width();
void  set_flags(int flags);
void  set_lossy_storage_quality(float quality);
void  set_side(int side, Image image);
void  set_storage(int mode);
};
#endif