/* THIS FILE IS GENERATED */
#ifndef IMAGE_H
#define IMAGE_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Error.h"
class Image : public Resource{
public: Image();
enum AlphaMode{
ALPHA_NONE,
ALPHA_BIT,
ALPHA_BLEND
};
enum CompressMode{
COMPRESS_S3TC,
COMPRESS_PVRTC2,
COMPRESS_PVRTC4,
COMPRESS_ETC,
COMPRESS_ETC2
};
enum CompressSource{
COMPRESS_SOURCE_GENERIC,
COMPRESS_SOURCE_SRGB,
COMPRESS_SOURCE_NORMAL
};
enum Format{
FORMAT_L8,
FORMAT_LA8,
FORMAT_R8,
FORMAT_RG8,
FORMAT_RGB8,
FORMAT_RGBA8,
FORMAT_RGBA4444,
FORMAT_RGBA5551,
FORMAT_RF,
FORMAT_RGF,
FORMAT_RGBF,
FORMAT_RGBAF,
FORMAT_RH,
FORMAT_RGH,
FORMAT_RGBH,
FORMAT_RGBAH,
FORMAT_RGBE9995,
FORMAT_DXT1,
FORMAT_DXT3,
FORMAT_DXT5,
FORMAT_RGTC_R,
FORMAT_RGTC_RG,
FORMAT_BPTC_RGBA,
FORMAT_BPTC_RGBF,
FORMAT_BPTC_RGBFU,
FORMAT_PVRTC2,
FORMAT_PVRTC2A,
FORMAT_PVRTC4,
FORMAT_PVRTC4A,
FORMAT_ETC,
FORMAT_ETC2_R11,
FORMAT_ETC2_R11S,
FORMAT_ETC2_RG11,
FORMAT_ETC2_RG11S,
FORMAT_ETC2_RGB8,
FORMAT_ETC2_RGBA8,
FORMAT_ETC2_RGB8A1,
FORMAT_MAX
};
enum Interpolation{
INTERPOLATE_NEAREST,
INTERPOLATE_BILINEAR,
INTERPOLATE_CUBIC,
INTERPOLATE_TRILINEAR,
INTERPOLATE_LANCZOS
};
void blend_rect(Image p_src, Rect2 p_src_rect, Vector2 p_dst);
void blend_rect_mask(Image p_src, Image p_mask, Rect2 p_src_rect, Vector2 p_dst);
void blit_rect(Image p_src, Rect2 p_src_rect, Vector2 p_dst);
void blit_rect_mask(Image p_src, Image p_mask, Rect2 p_src_rect, Vector2 p_dst);
void bumpmap_to_normalmap(float p_bump_scale = (float) 1);
void clear_mipmaps();
Error compress(Image::CompressMode p_mode, Image::CompressSource p_source, float p_lossy_quality);
void convert(Image::Format p_format);
void copy_from(Image p_src);
void create(int p_width, int p_height, bool p_use_mipmaps, Image::Format p_format);
void create_from_data(int p_width, int p_height, bool p_use_mipmaps, Image::Format p_format, PoolByteArray p_data);
void crop(int p_width, int p_height);
Error decompress();
Image::AlphaMode detect_alpha();
void expand_x2_hq2x();
void fill(Color p_color);
void fix_alpha_edges();
void flip_x();
void flip_y();
Error generate_mipmaps(bool p_renormalize = (bool) False);
PoolByteArray get_data();
Image::Format get_format();
int get_height();
int get_mipmap_offset(int p_mipmap);
Image get_rect(Rect2 p_rect);
Vector2 get_size();
Rect2 get_used_rect();
int get_width();
bool has_mipmaps();
bool is_compressed();
bool is_empty();
bool is_invisible();
Error load(String p_path);
void normalmap_to_xy();
void premultiply_alpha();
void resize(int p_width, int p_height, Image::Interpolation p_interpolation = (Image::Interpolation) 1);
void resize_to_po2(bool p_square = (bool) False);
Image rgbe_to_srgb();
Error save_exr(String p_path, bool p_grayscale = (bool) False);
Error save_png(String p_path);
PoolByteArray save_png_to_buffer();
void shrink_x2();
void srgb_to_linear();
};
#endif