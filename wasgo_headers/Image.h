/* THIS FILE IS GENERATED */
#ifndef IMAGE_H
#define IMAGE_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Resource.h"
#include "PoolByteArray.h"
#include "Rect2.h"
#include "Erro.h"
#include "Dictionary.h"
#include "Variant.h"
class Image : public Resource{
public: Image();
enum AlphaMode{
ALPHA_NONE: 0,
ALPHA_BIT: 1,
};
enum CompressSource{
COMPRESS_SOURCE_GENERIC: 0,
COMPRESS_SOURCE_SRGB: 1,
};
enum Interpolation{
INTERPOLATE_NEAREST: 0,
INTERPOLATE_BILINEAR: 1,
INTERPOLATE_CUBIC: 2,
INTERPOLATE_TRILINEAR: 3,
};
enum CompressMode{
COMPRESS_S3TC: 0,
COMPRESS_PVRTC2: 1,
COMPRESS_PVRTC4: 2,
COMPRESS_ETC: 3,
};
enum Format{
FORMAT_L8: 0,
FORMAT_LA8: 1,
FORMAT_R8: 2,
FORMAT_RG8: 3,
FORMAT_RGB8: 4,
FORMAT_RGBA8: 5,
FORMAT_RGBA4444: 6,
FORMAT_RGBA5551: 7,
FORMAT_RF: 8,
FORMAT_RGF: 9,
FORMAT_RGBF: 10,
FORMAT_RGBAF: 11,
FORMAT_RH: 12,
FORMAT_RGH: 13,
FORMAT_RGBH: 14,
FORMAT_RGBAH: 15,
FORMAT_RGBE9995: 16,
FORMAT_DXT1: 17,
FORMAT_DXT3: 18,
FORMAT_DXT5: 19,
FORMAT_RGTC_R: 20,
FORMAT_RGTC_RG: 21,
FORMAT_BPTC_RGBA: 22,
FORMAT_BPTC_RGBF: 23,
FORMAT_BPTC_RGBFU: 24,
FORMAT_PVRTC2: 25,
FORMAT_PVRTC2A: 26,
FORMAT_PVRTC4: 27,
FORMAT_PVRTC4A: 28,
FORMAT_ETC: 29,
FORMAT_ETC2_R11: 30,
FORMAT_ETC2_R11S: 31,
FORMAT_ETC2_RG11: 32,
FORMAT_ETC2_RG11S: 33,
FORMAT_ETC2_RGB8: 34,
FORMAT_ETC2_RGBA8: 35,
FORMAT_ETC2_RGB8A1: 36,
};
Dictionary  _get_data();
Dictionary  _get_data();
void  _set_data(Dictionary data);
void  blend_rect(Image src, Rect2 src_rect, Vector2 dst);
void  blend_rect_mask(Image src, Image mask, Rect2 src_rect, Vector2 dst);
void  blit_rect(Image src, Rect2 src_rect, Vector2 dst);
void  blit_rect_mask(Image src, Image mask, Rect2 src_rect, Vector2 dst);
void  bumpmap_to_normalmap(float bump_scale = 1);
void  clear_mipmaps();
void  clear_mipmaps();
enum.Error  compress(int mode, int source, float lossy_quality);
void  convert(int format);
void  copy_from(Image src);
void  create(int width, int height, bool use_mipmaps, int format);
void  create_from_data(int width, int height, bool use_mipmaps, int format, PoolByteArray data);
void  crop(int width, int height);
enum.Error  decompress();
enum.Error  decompress();
enum.Image::AlphaMode  detect_alpha();
enum.Image::AlphaMode  detect_alpha();
void  expand_x2_hq2x();
void  expand_x2_hq2x();
void  fill(Color color);
void  fix_alpha_edges();
void  fix_alpha_edges();
void  flip_x();
void  flip_x();
void  flip_y();
void  flip_y();
enum.Error  generate_mipmaps(bool renormalize = false);
PoolByteArray  get_data();
PoolByteArray  get_data();
enum.Image::Format  get_format();
enum.Image::Format  get_format();
int  get_height();
int  get_height();
int  get_mipmap_offset(int mipmap);
Color  get_pixel(int x, int y);
Color  get_pixelv(Vector2 src);
Image  get_rect(Rect2 rect);
Vector2  get_size();
Vector2  get_size();
Rect2  get_used_rect();
Rect2  get_used_rect();
int  get_width();
int  get_width();
bool  has_mipmaps();
bool  has_mipmaps();
bool  is_compressed();
bool  is_compressed();
bool  is_empty();
bool  is_empty();
bool  is_invisible();
bool  is_invisible();
enum.Error  load(String path);
enum.Error  load_jpg_from_buffer(PoolByteArray buffer);
enum.Error  load_png_from_buffer(PoolByteArray buffer);
enum.Error  load_webp_from_buffer(PoolByteArray buffer);
void  lock();
void  lock();
void  normalmap_to_xy();
void  normalmap_to_xy();
void  premultiply_alpha();
void  premultiply_alpha();
void  resize(int width, int height, int interpolation = 1);
void  resize_to_po2(bool square = false);
Image  rgbe_to_srgb();
Image  rgbe_to_srgb();
enum.Error  save_exr(String path, bool grayscale = false);
enum.Error  save_png(String path);
void  set_pixel(int x, int y, Color color);
void  set_pixelv(Vector2 dst, Color color);
void  shrink_x2();
void  shrink_x2();
void  srgb_to_linear();
void  srgb_to_linear();
void  unlock();
void  unlock();
};
#endif