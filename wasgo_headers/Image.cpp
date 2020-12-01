/* THIS FILE IS GENERATED */
#include "Image.h"
void Image::blend_rect(Image p_src, Rect2 p_src_rect, Vector2 p_dst){
	_wasgo_Image_wrapper_blend_rect(wasgo_id, ((Variant) p_src).get_wasgo_id(), ((Variant) p_src_rect).get_wasgo_id(), ((Variant) p_dst).get_wasgo_id());
}
void Image::blend_rect_mask(Image p_src, Image p_mask, Rect2 p_src_rect, Vector2 p_dst){
	_wasgo_Image_wrapper_blend_rect_mask(wasgo_id, ((Variant) p_src).get_wasgo_id(), ((Variant) p_mask).get_wasgo_id(), ((Variant) p_src_rect).get_wasgo_id(), ((Variant) p_dst).get_wasgo_id());
}
void Image::blit_rect(Image p_src, Rect2 p_src_rect, Vector2 p_dst){
	_wasgo_Image_wrapper_blit_rect(wasgo_id, ((Variant) p_src).get_wasgo_id(), ((Variant) p_src_rect).get_wasgo_id(), ((Variant) p_dst).get_wasgo_id());
}
void Image::blit_rect_mask(Image p_src, Image p_mask, Rect2 p_src_rect, Vector2 p_dst){
	_wasgo_Image_wrapper_blit_rect_mask(wasgo_id, ((Variant) p_src).get_wasgo_id(), ((Variant) p_mask).get_wasgo_id(), ((Variant) p_src_rect).get_wasgo_id(), ((Variant) p_dst).get_wasgo_id());
}
void Image::bumpmap_to_normalmap(float p_bump_scale = (float) 1){
	_wasgo_Image_wrapper_bumpmap_to_normalmap(wasgo_id, p_bump_scale);
}
void Image::clear_mipmaps(){
	_wasgo_Image_wrapper_clear_mipmaps(wasgo_id);
}
Error Image::compress(Image::CompressMode p_mode, Image::CompressSource p_source, float p_lossy_quality){
	return Error::from_wasgo_id(_wasgo_Image_wrapper_compress(wasgo_id, ((Variant) p_mode).get_wasgo_id(), ((Variant) p_source).get_wasgo_id(), p_lossy_quality));
}
void Image::convert(Image::Format p_format){
	_wasgo_Image_wrapper_convert(wasgo_id, ((Variant) p_format).get_wasgo_id());
}
void Image::copy_from(Image p_src){
	_wasgo_Image_wrapper_copy_from(wasgo_id, ((Variant) p_src).get_wasgo_id());
}
void Image::create(int p_width, int p_height, bool p_use_mipmaps, Image::Format p_format){
	_wasgo_Image_wrapper_create(wasgo_id, p_width, p_height, p_use_mipmaps, ((Variant) p_format).get_wasgo_id());
}
void Image::create_from_data(int p_width, int p_height, bool p_use_mipmaps, Image::Format p_format, PoolByteArray p_data){
	_wasgo_Image_wrapper_create_from_data(wasgo_id, p_width, p_height, p_use_mipmaps, ((Variant) p_format).get_wasgo_id(), ((Variant) p_data).get_wasgo_id());
}
void Image::crop(int p_width, int p_height){
	_wasgo_Image_wrapper_crop(wasgo_id, p_width, p_height);
}
Error Image::decompress(){
	return Error::from_wasgo_id(_wasgo_Image_wrapper_decompress(wasgo_id));
}
Image::AlphaMode Image::detect_alpha(){
	return Image::AlphaMode::from_wasgo_id(_wasgo_Image_wrapper_detect_alpha(wasgo_id));
}
void Image::expand_x2_hq2x(){
	_wasgo_Image_wrapper_expand_x2_hq2x(wasgo_id);
}
void Image::fill(Color p_color){
	_wasgo_Image_wrapper_fill(wasgo_id, ((Variant) p_color).get_wasgo_id());
}
void Image::fix_alpha_edges(){
	_wasgo_Image_wrapper_fix_alpha_edges(wasgo_id);
}
void Image::flip_x(){
	_wasgo_Image_wrapper_flip_x(wasgo_id);
}
void Image::flip_y(){
	_wasgo_Image_wrapper_flip_y(wasgo_id);
}
Error Image::generate_mipmaps(bool p_renormalize = (bool) false){
	return Error::from_wasgo_id(_wasgo_Image_wrapper_generate_mipmaps(wasgo_id, p_renormalize));
}
PoolByteArray Image::get_data(){
	return PoolByteArray::from_wasgo_id(_wasgo_Image_wrapper_get_data(wasgo_id));
}
Image::Format Image::get_format(){
	return Image::Format::from_wasgo_id(_wasgo_Image_wrapper_get_format(wasgo_id));
}
int Image::get_height(){
	return (int) _wasgo_Image_wrapper_get_height(wasgo_id);
}
int Image::get_mipmap_offset(int p_mipmap){
	return (int) _wasgo_Image_wrapper_get_mipmap_offset(wasgo_id, p_mipmap);
}
Image Image::get_rect(Rect2 p_rect){
	return Image::from_wasgo_id(_wasgo_Image_wrapper_get_rect(wasgo_id, ((Variant) p_rect).get_wasgo_id()));
}
Vector2 Image::get_size(){
	return Vector2::from_wasgo_id(_wasgo_Image_wrapper_get_size(wasgo_id));
}
Rect2 Image::get_used_rect(){
	return Rect2::from_wasgo_id(_wasgo_Image_wrapper_get_used_rect(wasgo_id));
}
int Image::get_width(){
	return (int) _wasgo_Image_wrapper_get_width(wasgo_id);
}
bool Image::has_mipmaps(){
	return (bool) _wasgo_Image_wrapper_has_mipmaps(wasgo_id);
}
bool Image::is_compressed(){
	return (bool) _wasgo_Image_wrapper_is_compressed(wasgo_id);
}
bool Image::is_empty(){
	return (bool) _wasgo_Image_wrapper_is_empty(wasgo_id);
}
bool Image::is_invisible(){
	return (bool) _wasgo_Image_wrapper_is_invisible(wasgo_id);
}
Error Image::load(String p_path){
	return Error::from_wasgo_id(_wasgo_Image_wrapper_load(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}
void Image::normalmap_to_xy(){
	_wasgo_Image_wrapper_normalmap_to_xy(wasgo_id);
}
void Image::premultiply_alpha(){
	_wasgo_Image_wrapper_premultiply_alpha(wasgo_id);
}
void Image::resize(int p_width, int p_height, Image::Interpolation p_interpolation = (Image::Interpolation) 1){
	_wasgo_Image_wrapper_resize(wasgo_id, p_width, p_height, ((Variant) p_interpolation).get_wasgo_id());
}
void Image::resize_to_po2(bool p_square = (bool) false){
	_wasgo_Image_wrapper_resize_to_po2(wasgo_id, p_square);
}
Image Image::rgbe_to_srgb(){
	return Image::from_wasgo_id(_wasgo_Image_wrapper_rgbe_to_srgb(wasgo_id));
}
Error Image::save_exr(String p_path, bool p_grayscale = (bool) false){
	return Error::from_wasgo_id(_wasgo_Image_wrapper_save_exr(wasgo_id, ((Variant) p_path).get_wasgo_id(), p_grayscale));
}
Error Image::save_png(String p_path){
	return Error::from_wasgo_id(_wasgo_Image_wrapper_save_png(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}
PoolByteArray Image::save_png_to_buffer(){
	return PoolByteArray::from_wasgo_id(_wasgo_Image_wrapper_save_png_to_buffer(wasgo_id));
}
void Image::shrink_x2(){
	_wasgo_Image_wrapper_shrink_x2(wasgo_id);
}
void Image::srgb_to_linear(){
	_wasgo_Image_wrapper_srgb_to_linear(wasgo_id);
}