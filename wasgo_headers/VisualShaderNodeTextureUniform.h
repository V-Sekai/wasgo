/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTUREUNIFORM_H
#define VISUALSHADERNODETEXTUREUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeTextureUniform : public VisualShaderNodeUniform{
public:
enum ColorDefault{
COLOR_DEFAULT_WHITE,
COLOR_DEFAULT_BLACK
};
enum TextureType{
TYPE_DATA,
TYPE_COLOR,
TYPE_NORMALMAP,
TYPE_ANISO
};
VisualShaderNodeTextureUniform::ColorDefault get_color_default();
VisualShaderNodeTextureUniform::TextureType get_texture_type();
void set_color_default(VisualShaderNodeTextureUniform::ColorDefault p_type);
void set_texture_type(VisualShaderNodeTextureUniform::TextureType p_type);

protected:
public:
explicit VisualShaderNodeTextureUniform(WasGoId p_wasgo_id);
explicit VisualShaderNodeTextureUniform(VisualShaderNodeUniform other);
VisualShaderNodeTextureUniform new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeTextureUniform_wrapper_get_color_default(WasGoId wasgo_id);
WasGoId _wasgo_VisualShaderNodeTextureUniform_wrapper_get_texture_type(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeTextureUniform_wrapper_set_color_default(WasGoId wasgo_id, WasGoId p_type);
void _wasgo_VisualShaderNodeTextureUniform_wrapper_set_texture_type(WasGoId wasgo_id, WasGoId p_type);

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeTextureUniform_constructor();
            
}
#endif