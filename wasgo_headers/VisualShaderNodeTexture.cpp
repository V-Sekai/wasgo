/* THIS FILE IS GENERATED */
#include "VisualShaderNodeTexture.h"
VisualShaderNodeTexture::Source VisualShaderNodeTexture::get_source(){
	return VisualShaderNodeTexture::Source::from_wasgo_id(_wasgo_VisualShaderNodeTexture_wrapper_get_source(wasgo_id));
}
Texture VisualShaderNodeTexture::get_texture(){
	return Texture::from_wasgo_id(_wasgo_VisualShaderNodeTexture_wrapper_get_texture(wasgo_id));
}
VisualShaderNodeTexture::TextureType VisualShaderNodeTexture::get_texture_type(){
	return VisualShaderNodeTexture::TextureType::from_wasgo_id(_wasgo_VisualShaderNodeTexture_wrapper_get_texture_type(wasgo_id));
}
void VisualShaderNodeTexture::set_source(VisualShaderNodeTexture::Source p_value){
	_wasgo_VisualShaderNodeTexture_wrapper_set_source(wasgo_id, ((Variant) value).get_wasgo_id());
}
void VisualShaderNodeTexture::set_texture(Texture p_value){
	_wasgo_VisualShaderNodeTexture_wrapper_set_texture(wasgo_id, ((Variant) value).get_wasgo_id());
}
void VisualShaderNodeTexture::set_texture_type(VisualShaderNodeTexture::TextureType p_value){
	_wasgo_VisualShaderNodeTexture_wrapper_set_texture_type(wasgo_id, ((Variant) value).get_wasgo_id());
}

VisualShaderNodeTexture::VisualShaderNodeTexture(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeTexture::~VisualShaderNodeTexture(){
}