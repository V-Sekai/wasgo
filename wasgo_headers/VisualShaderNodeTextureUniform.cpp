/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeTextureUniform.h"
VisualShaderNodeTextureUniform::ColorDefault VisualShaderNodeTextureUniform::get_color_default(){
	return VisualShaderNodeTextureUniform::ColorDefault(_wasgo_VisualShaderNodeTextureUniform_wrapper_get_color_default(wasgo_id));
}
VisualShaderNodeTextureUniform::TextureType VisualShaderNodeTextureUniform::get_texture_type(){
	return VisualShaderNodeTextureUniform::TextureType(_wasgo_VisualShaderNodeTextureUniform_wrapper_get_texture_type(wasgo_id));
}
void VisualShaderNodeTextureUniform::set_color_default(VisualShaderNodeTextureUniform::ColorDefault p_type){
	_wasgo_VisualShaderNodeTextureUniform_wrapper_set_color_default(wasgo_id, p_type._get_wasgo_id());
}
void VisualShaderNodeTextureUniform::set_texture_type(VisualShaderNodeTextureUniform::TextureType p_type){
	_wasgo_VisualShaderNodeTextureUniform_wrapper_set_texture_type(wasgo_id, p_type._get_wasgo_id());
}

VisualShaderNodeTextureUniform::VisualShaderNodeTextureUniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeTextureUniform::VisualShaderNodeTextureUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeTextureUniform_constructor();
}
VisualShaderNodeTextureUniform::new_instance(){
    return VisualShaderNodeTextureUniform(_wasgo_VisualShaderNodeTextureUniform_constructor());
}