/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTexture.h"
VisualShaderNodeTexture::Source VisualShaderNodeTexture::get_source(){
	return VisualShaderNodeTexture::Source(_wasgo_VisualShaderNodeTexture_wrapper_get_source(wasgo_id));
}
Texture VisualShaderNodeTexture::get_texture(){
	return Texture(_wasgo_VisualShaderNodeTexture_wrapper_get_texture(wasgo_id));
}
VisualShaderNodeTexture::TextureType VisualShaderNodeTexture::get_texture_type(){
	return VisualShaderNodeTexture::TextureType(_wasgo_VisualShaderNodeTexture_wrapper_get_texture_type(wasgo_id));
}
void VisualShaderNodeTexture::set_source(VisualShaderNodeTexture::Source p_value){
	_wasgo_VisualShaderNodeTexture_wrapper_set_source(wasgo_id, p_value._get_wasgo_id());
}
void VisualShaderNodeTexture::set_texture(Texture p_value){
	_wasgo_VisualShaderNodeTexture_wrapper_set_texture(wasgo_id, p_value._get_wasgo_id());
}
void VisualShaderNodeTexture::set_texture_type(VisualShaderNodeTexture::TextureType p_value){
	_wasgo_VisualShaderNodeTexture_wrapper_set_texture_type(wasgo_id, p_value._get_wasgo_id());
}

VisualShaderNodeTexture::VisualShaderNodeTexture(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeTexture::VisualShaderNodeTexture(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeTexture::VisualShaderNodeTexture():VisualShaderNode(){
}
VisualShaderNodeTexture VisualShaderNodeTexture::new_instance(){
    return VisualShaderNodeTexture(_wasgo_VisualShaderNodeTexture_constructor());
}
WasGoID VisualShaderNodeTexture::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeTexture::operator bool(){
    return (bool) wasgo_id;
}
