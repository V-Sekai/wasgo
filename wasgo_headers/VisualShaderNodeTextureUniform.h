/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTUREUNIFORM_H
#define VISUALSHADERNODETEXTUREUNIFORM_H

#include <stdint.h>

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeTextureUniform : public VisualShaderNodeUniform{
public: VisualShaderNodeTextureUniform();
enum TextureType{
TYPE_DATA: 0,
TYPE_COLOR: 1,
TYPE_NORMALMAP: 2,
};
enum ColorDefault{
COLOR_DEFAULT_WHITE: 0,
};
enum.VisualShaderNodeTextureUniform::ColorDefault  get_color_default();
enum.VisualShaderNodeTextureUniform::ColorDefault  get_color_default();
enum.VisualShaderNodeTextureUniform::TextureType  get_texture_type();
enum.VisualShaderNodeTextureUniform::TextureType  get_texture_type();
void  set_color_default(int type);
void  set_texture_type(int type);
};
#endif