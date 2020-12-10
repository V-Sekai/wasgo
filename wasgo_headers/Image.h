/* THIS FILE IS GENERATED */
#ifndef IMAGE_H
#define IMAGE_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Ustring.h"
#include "error_list.h"
#include "Resource.h"
#include "Variant.h"
#include "Vector2.h"
#include "Color.h"
class Image : public Resource{
public:
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
Error generate_mipmaps(bool p_renormalize = (bool) false);
PoolByteArray get_data();
Image::Format get_format();
int get_height();
int get_mipmap_offset(int p_mipmap);
Color get_pixel(int p_x, int p_y);
Color get_pixelv(Vector2 p_src);
Image get_rect(Rect2 p_rect);
Vector2 get_size();
Rect2 get_used_rect();
int get_width();
bool has_mipmaps();
bool is_compressed();
bool is_empty();
bool is_invisible();
Error load(String p_path);
Error load_jpg_from_buffer(PoolByteArray p_buffer);
Error load_png_from_buffer(PoolByteArray p_buffer);
Error load_tga_from_buffer(PoolByteArray p_buffer);
Error load_webp_from_buffer(PoolByteArray p_buffer);
void lock();
void normalmap_to_xy();
void premultiply_alpha();
void resize(int p_width, int p_height, Image::Interpolation p_interpolation = (Image::Interpolation) 1);
void resize_to_po2(bool p_square = (bool) false);
Image rgbe_to_srgb();
Error save_exr(String p_path, bool p_grayscale = (bool) false);
Error save_png(String p_path);
PoolByteArray save_png_to_buffer();
void set_pixel(int p_x, int p_y, Color p_color);
void set_pixelv(Vector2 p_dst, Color p_color);
void shrink_x2();
void srgb_to_linear();
void unlock();

protected:
public:
explicit Image(WasGoID p_wasgo_id);
explicit Image(Resource other);
Image();
Image new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Image_wrapper_blend_rect(WasGoID wasgo_id, WasGoID p_src, const uint8_t * p_src_rect, int wasgo_throwaway, int p_src_rect_wasgo_buffer_size, const uint8_t * p_dst, int p_dst_wasgo_buffer_size);
void _wasgo_Image_wrapper_blend_rect_mask(WasGoID wasgo_id, WasGoID p_src, WasGoID p_mask, int wasgo_throwaway, const uint8_t * p_src_rect, int p_src_rect_wasgo_buffer_size, const uint8_t * p_dst, int p_dst_wasgo_buffer_size);
void _wasgo_Image_wrapper_blit_rect(WasGoID wasgo_id, WasGoID p_src, const uint8_t * p_src_rect, int wasgo_throwaway, int p_src_rect_wasgo_buffer_size, const uint8_t * p_dst, int p_dst_wasgo_buffer_size);
void _wasgo_Image_wrapper_blit_rect_mask(WasGoID wasgo_id, WasGoID p_src, WasGoID p_mask, int wasgo_throwaway, const uint8_t * p_src_rect, int p_src_rect_wasgo_buffer_size, const uint8_t * p_dst, int p_dst_wasgo_buffer_size);
void _wasgo_Image_wrapper_bumpmap_to_normalmap(WasGoID wasgo_id, float p_bump_scale);
void _wasgo_Image_wrapper_clear_mipmaps(WasGoID wasgo_id);
WasGoID _wasgo_Image_wrapper_compress(WasGoID wasgo_id, WasGoID p_mode, WasGoID p_source, int wasgo_throwaway, float p_lossy_quality);
void _wasgo_Image_wrapper_convert(WasGoID wasgo_id, WasGoID p_format);
void _wasgo_Image_wrapper_copy_from(WasGoID wasgo_id, WasGoID p_src);
void _wasgo_Image_wrapper_create(WasGoID wasgo_id, int p_width, int p_height, int wasgo_throwaway, bool p_use_mipmaps, WasGoID p_format);
void _wasgo_Image_wrapper_create_from_data(WasGoID wasgo_id, int p_width, int p_height, int wasgo_throwaway, bool p_use_mipmaps, WasGoID p_format, WasGoID p_data);
void _wasgo_Image_wrapper_crop(WasGoID wasgo_id, int p_width, int p_height);
WasGoID _wasgo_Image_wrapper_decompress(WasGoID wasgo_id);
WasGoID _wasgo_Image_wrapper_detect_alpha(WasGoID wasgo_id);
void _wasgo_Image_wrapper_expand_x2_hq2x(WasGoID wasgo_id);
void _wasgo_Image_wrapper_fill(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Image_wrapper_fix_alpha_edges(WasGoID wasgo_id);
void _wasgo_Image_wrapper_flip_x(WasGoID wasgo_id);
void _wasgo_Image_wrapper_flip_y(WasGoID wasgo_id);
WasGoID _wasgo_Image_wrapper_generate_mipmaps(WasGoID wasgo_id, bool p_renormalize);
WasGoID _wasgo_Image_wrapper_get_data(WasGoID wasgo_id);
WasGoID _wasgo_Image_wrapper_get_format(WasGoID wasgo_id);
int _wasgo_Image_wrapper_get_height(WasGoID wasgo_id);
int _wasgo_Image_wrapper_get_mipmap_offset(WasGoID wasgo_id, int p_mipmap);
void _wasgo_Image_wrapper_get_pixel(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_x, int p_y);
void _wasgo_Image_wrapper_get_pixelv(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_src, int p_src_wasgo_buffer_size);
WasGoID _wasgo_Image_wrapper_get_rect(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_Image_wrapper_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Image_wrapper_get_used_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Image_wrapper_get_width(WasGoID wasgo_id);
int _wasgo_Image_wrapper_has_mipmaps(WasGoID wasgo_id);
int _wasgo_Image_wrapper_is_compressed(WasGoID wasgo_id);
int _wasgo_Image_wrapper_is_empty(WasGoID wasgo_id);
int _wasgo_Image_wrapper_is_invisible(WasGoID wasgo_id);
WasGoID _wasgo_Image_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Image_wrapper_load_jpg_from_buffer(WasGoID wasgo_id, WasGoID p_buffer);
WasGoID _wasgo_Image_wrapper_load_png_from_buffer(WasGoID wasgo_id, WasGoID p_buffer);
WasGoID _wasgo_Image_wrapper_load_tga_from_buffer(WasGoID wasgo_id, WasGoID p_buffer);
WasGoID _wasgo_Image_wrapper_load_webp_from_buffer(WasGoID wasgo_id, WasGoID p_buffer);
void _wasgo_Image_wrapper_lock(WasGoID wasgo_id);
void _wasgo_Image_wrapper_normalmap_to_xy(WasGoID wasgo_id);
void _wasgo_Image_wrapper_premultiply_alpha(WasGoID wasgo_id);
void _wasgo_Image_wrapper_resize(WasGoID wasgo_id, int p_width, int p_height, int wasgo_throwaway, WasGoID p_interpolation);
void _wasgo_Image_wrapper_resize_to_po2(WasGoID wasgo_id, bool p_square);
WasGoID _wasgo_Image_wrapper_rgbe_to_srgb(WasGoID wasgo_id);
WasGoID _wasgo_Image_wrapper_save_exr(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, int wasgo_throwaway, bool p_grayscale);
WasGoID _wasgo_Image_wrapper_save_png(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Image_wrapper_save_png_to_buffer(WasGoID wasgo_id);
void _wasgo_Image_wrapper_set_pixel(WasGoID wasgo_id, int p_x, int p_y, int wasgo_throwaway, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Image_wrapper_set_pixelv(WasGoID wasgo_id, const uint8_t * p_dst, int p_dst_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Image_wrapper_shrink_x2(WasGoID wasgo_id);
void _wasgo_Image_wrapper_srgb_to_linear(WasGoID wasgo_id);
void _wasgo_Image_wrapper_unlock(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Image_constructor();
            
}
#endif