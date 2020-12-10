/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Image.h"
void Image::blend_rect(Image p_src, Rect2 p_src_rect, Vector2 p_dst){

    Variant wasgo_var_src_rect = p_src_rect;
    uint8_t wasgo_buffer_src_rect[20];
    int wasgo_size_src_rect = 20;
    encode_variant(wasgo_var_src_rect, wasgo_buffer_src_rect, wasgo_size_src_rect);
    

    Variant wasgo_var_dst = p_dst;
    uint8_t wasgo_buffer_dst[12];
    int wasgo_size_dst = 12;
    encode_variant(wasgo_var_dst, wasgo_buffer_dst, wasgo_size_dst);
    
	_wasgo_Image_wrapper_blend_rect(wasgo_id, p_src._get_wasgo_id(), wasgo_buffer_src_rect, wasgo_size_src_rect, wasgo_size_src_rect, wasgo_buffer_dst, wasgo_size_dst);
}
void Image::blend_rect_mask(Image p_src, Image p_mask, Rect2 p_src_rect, Vector2 p_dst){

    Variant wasgo_var_src_rect = p_src_rect;
    uint8_t wasgo_buffer_src_rect[20];
    int wasgo_size_src_rect = 20;
    encode_variant(wasgo_var_src_rect, wasgo_buffer_src_rect, wasgo_size_src_rect);
    

    Variant wasgo_var_dst = p_dst;
    uint8_t wasgo_buffer_dst[12];
    int wasgo_size_dst = 12;
    encode_variant(wasgo_var_dst, wasgo_buffer_dst, wasgo_size_dst);
    
	_wasgo_Image_wrapper_blend_rect_mask(wasgo_id, p_src._get_wasgo_id(), p_mask._get_wasgo_id(), -69, wasgo_buffer_src_rect, wasgo_size_src_rect, wasgo_buffer_dst, wasgo_size_dst);
}
void Image::blit_rect(Image p_src, Rect2 p_src_rect, Vector2 p_dst){

    Variant wasgo_var_src_rect = p_src_rect;
    uint8_t wasgo_buffer_src_rect[20];
    int wasgo_size_src_rect = 20;
    encode_variant(wasgo_var_src_rect, wasgo_buffer_src_rect, wasgo_size_src_rect);
    

    Variant wasgo_var_dst = p_dst;
    uint8_t wasgo_buffer_dst[12];
    int wasgo_size_dst = 12;
    encode_variant(wasgo_var_dst, wasgo_buffer_dst, wasgo_size_dst);
    
	_wasgo_Image_wrapper_blit_rect(wasgo_id, p_src._get_wasgo_id(), wasgo_buffer_src_rect, wasgo_size_src_rect, wasgo_size_src_rect, wasgo_buffer_dst, wasgo_size_dst);
}
void Image::blit_rect_mask(Image p_src, Image p_mask, Rect2 p_src_rect, Vector2 p_dst){

    Variant wasgo_var_src_rect = p_src_rect;
    uint8_t wasgo_buffer_src_rect[20];
    int wasgo_size_src_rect = 20;
    encode_variant(wasgo_var_src_rect, wasgo_buffer_src_rect, wasgo_size_src_rect);
    

    Variant wasgo_var_dst = p_dst;
    uint8_t wasgo_buffer_dst[12];
    int wasgo_size_dst = 12;
    encode_variant(wasgo_var_dst, wasgo_buffer_dst, wasgo_size_dst);
    
	_wasgo_Image_wrapper_blit_rect_mask(wasgo_id, p_src._get_wasgo_id(), p_mask._get_wasgo_id(), -69, wasgo_buffer_src_rect, wasgo_size_src_rect, wasgo_buffer_dst, wasgo_size_dst);
}
void Image::bumpmap_to_normalmap(float p_bump_scale){
	_wasgo_Image_wrapper_bumpmap_to_normalmap(wasgo_id, p_bump_scale);
}
void Image::clear_mipmaps(){
	_wasgo_Image_wrapper_clear_mipmaps(wasgo_id);
}
Error Image::compress(Image::CompressMode p_mode, Image::CompressSource p_source, float p_lossy_quality){
	return Error(_wasgo_Image_wrapper_compress(wasgo_id, p_mode._get_wasgo_id(), p_source._get_wasgo_id(), -69, p_lossy_quality));
}
void Image::convert(Image::Format p_format){
	_wasgo_Image_wrapper_convert(wasgo_id, p_format._get_wasgo_id());
}
void Image::copy_from(Image p_src){
	_wasgo_Image_wrapper_copy_from(wasgo_id, p_src._get_wasgo_id());
}
void Image::create(int p_width, int p_height, bool p_use_mipmaps, Image::Format p_format){
	_wasgo_Image_wrapper_create(wasgo_id, p_width, p_height, -69, p_use_mipmaps, p_format._get_wasgo_id());
}
void Image::create_from_data(int p_width, int p_height, bool p_use_mipmaps, Image::Format p_format, PoolByteArray p_data){
	_wasgo_Image_wrapper_create_from_data(wasgo_id, p_width, p_height, -69, p_use_mipmaps, p_format._get_wasgo_id(), p_data._get_wasgo_id());
}
void Image::crop(int p_width, int p_height){
	_wasgo_Image_wrapper_crop(wasgo_id, p_width, p_height);
}
Error Image::decompress(){
	return Error(_wasgo_Image_wrapper_decompress(wasgo_id));
}
Image::AlphaMode Image::detect_alpha(){
	return Image::AlphaMode(_wasgo_Image_wrapper_detect_alpha(wasgo_id));
}
void Image::expand_x2_hq2x(){
	_wasgo_Image_wrapper_expand_x2_hq2x(wasgo_id);
}
void Image::fill(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Image_wrapper_fill(wasgo_id, wasgo_buffer_color, wasgo_size_color);
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
Error Image::generate_mipmaps(bool p_renormalize){
	return Error(_wasgo_Image_wrapper_generate_mipmaps(wasgo_id, p_renormalize));
}
PoolByteArray Image::get_data(){
	return PoolByteArray(_wasgo_Image_wrapper_get_data(wasgo_id));
}
Image::Format Image::get_format(){
	return Image::Format(_wasgo_Image_wrapper_get_format(wasgo_id));
}
int Image::get_height(){
	return (int) _wasgo_Image_wrapper_get_height(wasgo_id);
}
int Image::get_mipmap_offset(int p_mipmap){
	return (int) _wasgo_Image_wrapper_get_mipmap_offset(wasgo_id, p_mipmap);
}
Color Image::get_pixel(int p_x, int p_y){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Image_wrapper_get_pixel(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_x, p_y);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Color Image::get_pixelv(Vector2 p_src){

    Variant wasgo_var_src = p_src;
    uint8_t wasgo_buffer_src[12];
    int wasgo_size_src = 12;
    encode_variant(wasgo_var_src, wasgo_buffer_src, wasgo_size_src);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Image_wrapper_get_pixelv(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_src, wasgo_size_src);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Image Image::get_rect(Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	return Image(_wasgo_Image_wrapper_get_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect));
}
Vector2 Image::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Image_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Rect2 Image::get_used_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Image_wrapper_get_used_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
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

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_Image_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error Image::load_jpg_from_buffer(PoolByteArray p_buffer){
	return Error(_wasgo_Image_wrapper_load_jpg_from_buffer(wasgo_id, p_buffer._get_wasgo_id()));
}
Error Image::load_png_from_buffer(PoolByteArray p_buffer){
	return Error(_wasgo_Image_wrapper_load_png_from_buffer(wasgo_id, p_buffer._get_wasgo_id()));
}
Error Image::load_tga_from_buffer(PoolByteArray p_buffer){
	return Error(_wasgo_Image_wrapper_load_tga_from_buffer(wasgo_id, p_buffer._get_wasgo_id()));
}
Error Image::load_webp_from_buffer(PoolByteArray p_buffer){
	return Error(_wasgo_Image_wrapper_load_webp_from_buffer(wasgo_id, p_buffer._get_wasgo_id()));
}
void Image::lock(){
	_wasgo_Image_wrapper_lock(wasgo_id);
}
void Image::normalmap_to_xy(){
	_wasgo_Image_wrapper_normalmap_to_xy(wasgo_id);
}
void Image::premultiply_alpha(){
	_wasgo_Image_wrapper_premultiply_alpha(wasgo_id);
}
void Image::resize(int p_width, int p_height, Image::Interpolation p_interpolation){
	_wasgo_Image_wrapper_resize(wasgo_id, p_width, p_height, -69, p_interpolation._get_wasgo_id());
}
void Image::resize_to_po2(bool p_square){
	_wasgo_Image_wrapper_resize_to_po2(wasgo_id, p_square);
}
Image Image::rgbe_to_srgb(){
	return Image(_wasgo_Image_wrapper_rgbe_to_srgb(wasgo_id));
}
Error Image::save_exr(String p_path, bool p_grayscale){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_Image_wrapper_save_exr(wasgo_id, wasgo_buffer_path, wasgo_size_path, -69, p_grayscale));
}
Error Image::save_png(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = 10 + String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_Image_wrapper_save_png(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
PoolByteArray Image::save_png_to_buffer(){
	return PoolByteArray(_wasgo_Image_wrapper_save_png_to_buffer(wasgo_id));
}
void Image::set_pixel(int p_x, int p_y, Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Image_wrapper_set_pixel(wasgo_id, p_x, p_y, -69, wasgo_buffer_color, wasgo_size_color);
}
void Image::set_pixelv(Vector2 p_dst, Color p_color){

    Variant wasgo_var_dst = p_dst;
    uint8_t wasgo_buffer_dst[12];
    int wasgo_size_dst = 12;
    encode_variant(wasgo_var_dst, wasgo_buffer_dst, wasgo_size_dst);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Image_wrapper_set_pixelv(wasgo_id, wasgo_buffer_dst, wasgo_size_dst, -69, wasgo_buffer_color, wasgo_size_color);
}
void Image::shrink_x2(){
	_wasgo_Image_wrapper_shrink_x2(wasgo_id);
}
void Image::srgb_to_linear(){
	_wasgo_Image_wrapper_srgb_to_linear(wasgo_id);
}
void Image::unlock(){
	_wasgo_Image_wrapper_unlock(wasgo_id);
}

Image::Image(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Image::Image(Resource other) : Resource(other._get_wasgo_id()){
}
Image::Image():Resource(){
}
Image Image::new_instance(){
    return Image(_wasgo_Image_constructor());
}
WasGoID Image::_get_wasgo_id(){
    return wasgo_id;
}
Image::operator bool(){
    return (bool) wasgo_id;
}
