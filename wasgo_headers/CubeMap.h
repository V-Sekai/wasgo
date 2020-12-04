/* THIS FILE IS GENERATED */
#ifndef CUBEMAP_H
#define CUBEMAP_H

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

protected:
public:
explicit CubeMap(WasGoID p_wasgo_id);
explicit CubeMap(Resource other);
CubeMap new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CubeMap_wrapper_get_flags(WasGoID wasgo_id);
int _wasgo_CubeMap_wrapper_get_height(WasGoID wasgo_id);
float _wasgo_CubeMap_wrapper_get_lossy_storage_quality(WasGoID wasgo_id);
WasGoID _wasgo_CubeMap_wrapper_get_side(WasGoID wasgo_id, WasGoID p_side);
WasGoID _wasgo_CubeMap_wrapper_get_storage(WasGoID wasgo_id);
int _wasgo_CubeMap_wrapper_get_width(WasGoID wasgo_id);
void _wasgo_CubeMap_wrapper_set_flags(WasGoID wasgo_id, int p_flags);
void _wasgo_CubeMap_wrapper_set_lossy_storage_quality(WasGoID wasgo_id, float p_quality);
void _wasgo_CubeMap_wrapper_set_side(WasGoID wasgo_id, WasGoID p_side, WasGoID p_image);
void _wasgo_CubeMap_wrapper_set_storage(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_CubeMap_constructor();
            
}
#endif