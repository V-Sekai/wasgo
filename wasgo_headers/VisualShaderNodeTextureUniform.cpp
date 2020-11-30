/* THIS FILE IS GENERATED */
#include "VisualShaderNodeTextureUniform.h"
VisualShaderNodeTextureUniform::ColorDefault VisualShaderNodeTextureUniform::get_color_default(){
	return VisualShaderNodeTextureUniform::ColorDefault::from_wasgo_id(_wasgo_VisualShaderNodeTextureUniform_wrapper_get_color_default(wasgo_id));
}
VisualShaderNodeTextureUniform::TextureType VisualShaderNodeTextureUniform::get_texture_type(){
	return VisualShaderNodeTextureUniform::TextureType::from_wasgo_id(_wasgo_VisualShaderNodeTextureUniform_wrapper_get_texture_type(wasgo_id));
}
void VisualShaderNodeTextureUniform::set_color_default(VisualShaderNodeTextureUniform::ColorDefault p_type){
	_wasgo_VisualShaderNodeTextureUniform_wrapper_set_color_default(wasgo_id, ((Variant) type).get_wasgo_id());
}
void VisualShaderNodeTextureUniform::set_texture_type(VisualShaderNodeTextureUniform::TextureType p_type){
	_wasgo_VisualShaderNodeTextureUniform_wrapper_set_texture_type(wasgo_id, ((Variant) type).get_wasgo_id());
}

VisualShaderNodeTextureUniform::VisualShaderNodeTextureUniform(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeTextureUniform::~VisualShaderNodeTextureUniform(){
}