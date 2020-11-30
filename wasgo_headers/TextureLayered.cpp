/* THIS FILE IS GENERATED */
#include "TextureLayered.h"
void TextureLayered::create(int p_width, int p_height, int p_depth, Image::Format p_format, int p_flags = (int) 4){
	_wasgo_TextureLayered_wrapper_create(wasgo_id, width, height, depth, ((Variant) format).get_wasgo_id(), flags);
}
int TextureLayered::get_depth(){
	return (int) _wasgo_TextureLayered_wrapper_get_depth(wasgo_id));
}
int TextureLayered::get_flags(){
	return (int) _wasgo_TextureLayered_wrapper_get_flags(wasgo_id));
}
Image::Format TextureLayered::get_format(){
	return Image::Format::from_wasgo_id(_wasgo_TextureLayered_wrapper_get_format(wasgo_id));
}
int TextureLayered::get_height(){
	return (int) _wasgo_TextureLayered_wrapper_get_height(wasgo_id));
}
Image TextureLayered::get_layer_data(int p_layer){
	return Image::from_wasgo_id(_wasgo_TextureLayered_wrapper_get_layer_data(wasgo_id, layer));
}
int TextureLayered::get_width(){
	return (int) _wasgo_TextureLayered_wrapper_get_width(wasgo_id));
}
void TextureLayered::set_data_partial(Image p_image, int p_x_offset, int p_y_offset, int p_layer, int p_mipmap = (int) 0){
	_wasgo_TextureLayered_wrapper_set_data_partial(wasgo_id, ((Variant) image).get_wasgo_id(), x_offset, y_offset, layer, mipmap);
}
void TextureLayered::set_flags(int p_flags){
	_wasgo_TextureLayered_wrapper_set_flags(wasgo_id, flags);
}
void TextureLayered::set_layer_data(Image p_image, int p_layer){
	_wasgo_TextureLayered_wrapper_set_layer_data(wasgo_id, ((Variant) image).get_wasgo_id(), layer);
}