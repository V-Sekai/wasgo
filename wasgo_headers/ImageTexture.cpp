/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ImageTexture.h"
void ImageTexture::create(int p_width, int p_height, Image::Format p_format, int p_flags = (int) 7){
	_wasgo_ImageTexture_wrapper_create(wasgo_id, p_width, p_height, p_format._get_wasgo_id(), p_flags);
}
void ImageTexture::create_from_image(Image p_image, int p_flags = (int) 7){
	_wasgo_ImageTexture_wrapper_create_from_image(wasgo_id, p_image._get_wasgo_id(), p_flags);
}
Image::Format ImageTexture::get_format(){
	return Image::Format(_wasgo_ImageTexture_wrapper_get_format(wasgo_id));
}
float ImageTexture::get_lossy_storage_quality(){
	return (float) _wasgo_ImageTexture_wrapper_get_lossy_storage_quality(wasgo_id);
}
ImageTexture::Storage ImageTexture::get_storage(){
	return ImageTexture::Storage(_wasgo_ImageTexture_wrapper_get_storage(wasgo_id));
}
Error ImageTexture::load(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_ImageTexture_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
void ImageTexture::set_data(Image p_image){
	_wasgo_ImageTexture_wrapper_set_data(wasgo_id, p_image._get_wasgo_id());
}
void ImageTexture::set_lossy_storage_quality(float p_quality){
	_wasgo_ImageTexture_wrapper_set_lossy_storage_quality(wasgo_id, p_quality);
}
void ImageTexture::set_size_override(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_ImageTexture_wrapper_set_size_override(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void ImageTexture::set_storage(ImageTexture::Storage p_mode){
	_wasgo_ImageTexture_wrapper_set_storage(wasgo_id, p_mode._get_wasgo_id());
}

ImageTexture::ImageTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
ImageTexture::ImageTexture(){
    wasgo_id = _wasgo_ImageTexture_constructor();
}
ImageTexture::~ImageTexture(){
    _wasgo_ImageTexture_destructor(wasgo_id);
}