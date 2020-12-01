/* THIS FILE IS GENERATED */
#ifndef CUBEMAP_H
#define CUBEMAP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Image.h"
#include "Resource.h"
class CubeMap : public Resource{
public:
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

CubeMap(WasGoId p_wasgo_id);
~CubeMap();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CubeMap_wrapper_get_flags(WasGoId wasgo_id);
int _wasgo_CubeMap_wrapper_get_height(WasGoId wasgo_id);
float _wasgo_CubeMap_wrapper_get_lossy_storage_quality(WasGoId wasgo_id);
WasGoId _wasgo_CubeMap_wrapper_get_side(WasGoId wasgo_id, WasGoId p_side);
WasGoId _wasgo_CubeMap_wrapper_get_storage(WasGoId wasgo_id);
int _wasgo_CubeMap_wrapper_get_width(WasGoId wasgo_id);
void _wasgo_CubeMap_wrapper_set_flags(WasGoId wasgo_id, int p_flags);
void _wasgo_CubeMap_wrapper_set_lossy_storage_quality(WasGoId wasgo_id, float p_quality);
void _wasgo_CubeMap_wrapper_set_side(WasGoId wasgo_id, WasGoId p_side, WasGoId p_image);
void _wasgo_CubeMap_wrapper_set_storage(WasGoId wasgo_id, WasGoId p_mode);
}
#endif