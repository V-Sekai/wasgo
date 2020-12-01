/* THIS FILE IS GENERATED */
#ifndef IMAGETEXTURE_H
#define IMAGETEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Texture.h"
#include "error_list.h"
#include "ustring.h"
#include "Image.h"
class ImageTexture : public Texture{
public:
enum Storage{
STORAGE_RAW,
STORAGE_COMPRESS_LOSSY,
STORAGE_COMPRESS_LOSSLESS
};
void create(int p_width, int p_height, Image::Format p_format, int p_flags = (int) 7);
void create_from_image(Image p_image, int p_flags = (int) 7);
Image::Format get_format();
float get_lossy_storage_quality();
ImageTexture::Storage get_storage();
Error load(String p_path);
void set_data(Image p_image);
void set_lossy_storage_quality(float p_quality);
void set_size_override(Vector2 p_size);
void set_storage(ImageTexture::Storage p_mode);

ImageTexture(WasGoId p_wasgo_id);
~ImageTexture();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ImageTexture_wrapper_create(WasGoId wasgo_id, int p_width, int p_height, WasGoId p_format, int p_flags);
void _wasgo_ImageTexture_wrapper_create_from_image(WasGoId wasgo_id, WasGoId p_image, int p_flags);
WasGoId _wasgo_ImageTexture_wrapper_get_format(WasGoId wasgo_id);
float _wasgo_ImageTexture_wrapper_get_lossy_storage_quality(WasGoId wasgo_id);
WasGoId _wasgo_ImageTexture_wrapper_get_storage(WasGoId wasgo_id);
WasGoId _wasgo_ImageTexture_wrapper_load(WasGoId wasgo_id, WasGoId p_path);
void _wasgo_ImageTexture_wrapper_set_data(WasGoId wasgo_id, WasGoId p_image);
void _wasgo_ImageTexture_wrapper_set_lossy_storage_quality(WasGoId wasgo_id, float p_quality);
void _wasgo_ImageTexture_wrapper_set_size_override(WasGoId wasgo_id, WasGoId p_size);
void _wasgo_ImageTexture_wrapper_set_storage(WasGoId wasgo_id, WasGoId p_mode);
}
#endif