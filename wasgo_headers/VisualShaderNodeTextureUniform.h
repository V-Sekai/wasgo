/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTUREUNIFORM_H
#define VISUALSHADERNODETEXTUREUNIFORM_H

#include "stdint.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeTextureUniform : public VisualShaderNodeUniform{
public: VisualShaderNodeTextureUniform();
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
};
#endif