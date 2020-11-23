/* THIS FILE IS GENERATED */
#ifndef IMAGETEXTURE_H
#define IMAGETEXTURE_H

#include <stdint.h>

#include "String.h"
#include "Vector2.h"
#include "RID.h"
#include "Erro.h"
#include "Image.h"
#include "Texture.h"
class ImageTexture : public Texture{
public: ImageTexture();
enum Storage{
STORAGE_RAW: 0,
STORAGE_COMPRESS_LOSSY: 1,
};
void  _reload_hook(RID rid);
void  create(int width, int height, int format, int flags = 7);
void  create_from_image(Image image, int flags = 7);
enum.Image::Format  get_format();
enum.Image::Format  get_format();
float  get_lossy_storage_quality();
float  get_lossy_storage_quality();
enum.ImageTexture::Storage  get_storage();
enum.ImageTexture::Storage  get_storage();
enum.Error  load(String path);
void  set_data(Image image);
void  set_lossy_storage_quality(float quality);
void  set_size_override(Vector2 size);
void  set_storage(int mode);
};
#endif