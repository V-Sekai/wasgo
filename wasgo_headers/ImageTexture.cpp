/* THIS FILE IS GENERATED */
#include "ImageTexture.h"
void ImageTexture::create(int p_width, int p_height, Image::Format p_format, int p_flags = (int) 7){
	_wasgo_ImageTexture_wrapper_create(wasgo_id, width, height, ((Variant) format).get_wasgo_id(), flags);
}
void ImageTexture::create_from_image(Image p_image, int p_flags = (int) 7){
	_wasgo_ImageTexture_wrapper_create_from_image(wasgo_id, ((Variant) image).get_wasgo_id(), flags);
}
Image::Format ImageTexture::get_format(){
	return Image::Format::from_wasgo_id(_wasgo_ImageTexture_wrapper_get_format(wasgo_id));
}
float ImageTexture::get_lossy_storage_quality(){
	return (float) _wasgo_ImageTexture_wrapper_get_lossy_storage_quality(wasgo_id));
}
ImageTexture::Storage ImageTexture::get_storage(){
	return ImageTexture::Storage::from_wasgo_id(_wasgo_ImageTexture_wrapper_get_storage(wasgo_id));
}
Error ImageTexture::load(String p_path){
	return Error::from_wasgo_id(_wasgo_ImageTexture_wrapper_load(wasgo_id, ((Variant) path).get_wasgo_id()));
}
void ImageTexture::set_data(Image p_image){
	_wasgo_ImageTexture_wrapper_set_data(wasgo_id, ((Variant) image).get_wasgo_id());
}
void ImageTexture::set_lossy_storage_quality(float p_quality){
	_wasgo_ImageTexture_wrapper_set_lossy_storage_quality(wasgo_id, quality);
}
void ImageTexture::set_size_override(Vector2 p_size){
	_wasgo_ImageTexture_wrapper_set_size_override(wasgo_id, ((Variant) size).get_wasgo_id());
}
void ImageTexture::set_storage(ImageTexture::Storage p_mode){
	_wasgo_ImageTexture_wrapper_set_storage(wasgo_id, ((Variant) mode).get_wasgo_id());
}

ImageTexture::ImageTexture(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ImageTexture::~ImageTexture(){
}