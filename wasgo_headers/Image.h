/* THIS FILE IS GENERATED */
#ifndef IMAGE_H
#define IMAGE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
#include "Error.h"
class Image : public Resource{
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

Image(WasGoId p_wasgo_id);
~Image();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Image_wrapper_blend_rect(WasGoId wasgo_id, WasGo::WasGoId p_src, WasGo::WasGoId p_src_rect, WasGo::WasGoId p_dst);
void _wasgo_Image_wrapper_blend_rect_mask(WasGoId wasgo_id, WasGo::WasGoId p_src, WasGo::WasGoId p_mask, WasGo::WasGoId p_src_rect, WasGo::WasGoId p_dst);
void _wasgo_Image_wrapper_blit_rect(WasGoId wasgo_id, WasGo::WasGoId p_src, WasGo::WasGoId p_src_rect, WasGo::WasGoId p_dst);
void _wasgo_Image_wrapper_blit_rect_mask(WasGoId wasgo_id, WasGo::WasGoId p_src, WasGo::WasGoId p_mask, WasGo::WasGoId p_src_rect, WasGo::WasGoId p_dst);
void _wasgo_Image_wrapper_bumpmap_to_normalmap(WasGoId wasgo_id, float p_bump_scale);
void _wasgo_Image_wrapper_clear_mipmaps(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Image_wrapper_compress(WasGoId wasgo_id, WasGo::WasGoId p_mode, WasGo::WasGoId p_source, float p_lossy_quality);
void _wasgo_Image_wrapper_convert(WasGoId wasgo_id, WasGo::WasGoId p_format);
void _wasgo_Image_wrapper_copy_from(WasGoId wasgo_id, WasGo::WasGoId p_src);
void _wasgo_Image_wrapper_create(WasGoId wasgo_id, int p_width, int p_height, bool p_use_mipmaps, WasGo::WasGoId p_format);
void _wasgo_Image_wrapper_create_from_data(WasGoId wasgo_id, int p_width, int p_height, bool p_use_mipmaps, WasGo::WasGoId p_format, WasGo::WasGoId p_data);
void _wasgo_Image_wrapper_crop(WasGoId wasgo_id, int p_width, int p_height);
WasGo::WasGoId _wasgo_Image_wrapper_decompress(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Image_wrapper_detect_alpha(WasGoId wasgo_id);
void _wasgo_Image_wrapper_expand_x2_hq2x(WasGoId wasgo_id);
void _wasgo_Image_wrapper_fill(WasGoId wasgo_id, WasGo::WasGoId p_color);
void _wasgo_Image_wrapper_fix_alpha_edges(WasGoId wasgo_id);
void _wasgo_Image_wrapper_flip_x(WasGoId wasgo_id);
void _wasgo_Image_wrapper_flip_y(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Image_wrapper_generate_mipmaps(WasGoId wasgo_id, bool p_renormalize);
WasGo::WasGoId _wasgo_Image_wrapper_get_data(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Image_wrapper_get_format(WasGoId wasgo_id);
int _wasgo_Image_wrapper_get_height(WasGoId wasgo_id);
int _wasgo_Image_wrapper_get_mipmap_offset(WasGoId wasgo_id, int p_mipmap);
WasGo::WasGoId _wasgo_Image_wrapper_get_rect(WasGoId wasgo_id, WasGo::WasGoId p_rect);
WasGo::WasGoId _wasgo_Image_wrapper_get_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Image_wrapper_get_used_rect(WasGoId wasgo_id);
int _wasgo_Image_wrapper_get_width(WasGoId wasgo_id);
int _wasgo_Image_wrapper_has_mipmaps(WasGoId wasgo_id);
int _wasgo_Image_wrapper_is_compressed(WasGoId wasgo_id);
int _wasgo_Image_wrapper_is_empty(WasGoId wasgo_id);
int _wasgo_Image_wrapper_is_invisible(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Image_wrapper_load(WasGoId wasgo_id, WasGo::WasGoId p_path);
void _wasgo_Image_wrapper_normalmap_to_xy(WasGoId wasgo_id);
void _wasgo_Image_wrapper_premultiply_alpha(WasGoId wasgo_id);
void _wasgo_Image_wrapper_resize(WasGoId wasgo_id, int p_width, int p_height, WasGo::WasGoId p_interpolation);
void _wasgo_Image_wrapper_resize_to_po2(WasGoId wasgo_id, bool p_square);
WasGo::WasGoId _wasgo_Image_wrapper_rgbe_to_srgb(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Image_wrapper_save_exr(WasGoId wasgo_id, WasGo::WasGoId p_path, bool p_grayscale);
WasGo::WasGoId _wasgo_Image_wrapper_save_png(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_Image_wrapper_save_png_to_buffer(WasGoId wasgo_id);
void _wasgo_Image_wrapper_shrink_x2(WasGoId wasgo_id);
void _wasgo_Image_wrapper_srgb_to_linear(WasGoId wasgo_id);
}
#endif