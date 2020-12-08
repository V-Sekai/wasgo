/* THIS FILE IS GENERATED */
#ifndef IMAGETEXTURE_H
#define IMAGETEXTURE_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "error_list.h"
#include "Image.h"
#include "Ustring.h"
#include "Texture.h"
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

protected:
public:
explicit ImageTexture(WasGoID p_wasgo_id);
explicit ImageTexture(Texture other);
ImageTexture();
ImageTexture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ImageTexture_wrapper_create(WasGoID wasgo_id, int p_width, int p_height, WasGoID p_format, int p_flags);
void _wasgo_ImageTexture_wrapper_create_from_image(WasGoID wasgo_id, WasGoID p_image, int p_flags);
WasGoID _wasgo_ImageTexture_wrapper_get_format(WasGoID wasgo_id);
float _wasgo_ImageTexture_wrapper_get_lossy_storage_quality(WasGoID wasgo_id);
WasGoID _wasgo_ImageTexture_wrapper_get_storage(WasGoID wasgo_id);
WasGoID _wasgo_ImageTexture_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_ImageTexture_wrapper_set_data(WasGoID wasgo_id, WasGoID p_image);
void _wasgo_ImageTexture_wrapper_set_lossy_storage_quality(WasGoID wasgo_id, float p_quality);
void _wasgo_ImageTexture_wrapper_set_size_override(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_ImageTexture_wrapper_set_storage(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_ImageTexture_constructor();
            
}
#endif