/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TextureLayered.h"
void TextureLayered::create(int p_width, int p_height, int p_depth, Image::Format p_format, int p_flags){
	_wasgo_TextureLayered_wrapper_create(wasgo_id, p_width, p_height, -69, p_depth, p_format._get_wasgo_id(), p_flags);
}
int TextureLayered::get_depth(){
	return (int) _wasgo_TextureLayered_wrapper_get_depth(wasgo_id);
}
int TextureLayered::get_flags(){
	return (int) _wasgo_TextureLayered_wrapper_get_flags(wasgo_id);
}
Image::Format TextureLayered::get_format(){
	return Image::Format(_wasgo_TextureLayered_wrapper_get_format(wasgo_id));
}
int TextureLayered::get_height(){
	return (int) _wasgo_TextureLayered_wrapper_get_height(wasgo_id);
}
Image TextureLayered::get_layer_data(int p_layer){
	return Image(_wasgo_TextureLayered_wrapper_get_layer_data(wasgo_id, p_layer));
}
int TextureLayered::get_width(){
	return (int) _wasgo_TextureLayered_wrapper_get_width(wasgo_id);
}
void TextureLayered::set_data_partial(Image p_image, int p_x_offset, int p_y_offset, int p_layer, int p_mipmap){
	_wasgo_TextureLayered_wrapper_set_data_partial(wasgo_id, p_image._get_wasgo_id(), p_x_offset, -69, p_y_offset, p_layer, p_mipmap);
}
void TextureLayered::set_flags(int p_flags){
	_wasgo_TextureLayered_wrapper_set_flags(wasgo_id, p_flags);
}
void TextureLayered::set_layer_data(Image p_image, int p_layer){
	_wasgo_TextureLayered_wrapper_set_layer_data(wasgo_id, p_image._get_wasgo_id(), p_layer);
}

TextureLayered::TextureLayered(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
TextureLayered::TextureLayered(Resource other) : Resource(other._get_wasgo_id()){
}
TextureLayered::TextureLayered():Resource(){
}
TextureLayered TextureLayered::new_instance(){
    return TextureLayered(_wasgo_TextureLayered_constructor());
}
WasGoID TextureLayered::_get_wasgo_id(){
    return wasgo_id;
}
TextureLayered::operator bool(){
    return (bool) wasgo_id;
}
