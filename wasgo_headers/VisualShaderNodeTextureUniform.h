/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTUREUNIFORM_H
#define VISUALSHADERNODETEXTUREUNIFORM_H

#include "wasgo\wasgoid.h"

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
explicit VisualShaderNodeTextureUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeTextureUniform(VisualShaderNodeUniform other);
VisualShaderNodeTextureUniform();
VisualShaderNodeTextureUniform new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeTextureUniform_wrapper_get_color_default(WasGoID wasgo_id);
WasGoID _wasgo_VisualShaderNodeTextureUniform_wrapper_get_texture_type(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeTextureUniform_wrapper_set_color_default(WasGoID wasgo_id, WasGoID p_type);
void _wasgo_VisualShaderNodeTextureUniform_wrapper_set_texture_type(WasGoID wasgo_id, WasGoID p_type);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTextureUniform_constructor();
            
}
#endif