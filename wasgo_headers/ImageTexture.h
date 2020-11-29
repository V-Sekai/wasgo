/* THIS FILE IS GENERATED */
#ifndef IMAGETEXTURE_H
#define IMAGETEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "Image.h"
#include "Error.h"
class ImageTexture : public Texture{
public: ImageTexture();
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
};
#endif