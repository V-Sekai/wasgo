/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTURE_H
#define VISUALSHADERNODETEXTURE_H

#include "stdint.h"

#include "Texture.h"
#include "VisualShaderNode.h"
class VisualShaderNodeTexture : public VisualShaderNode{
public: VisualShaderNodeTexture();
enum Source{
SOURCE_TEXTURE,
SOURCE_SCREEN,
SOURCE_2D_TEXTURE,
SOURCE_2D_NORMAL,
SOURCE_DEPTH,
SOURCE_PORT
};
enum TextureType{
TYPE_DATA,
TYPE_COLOR,
TYPE_NORMALMAP
};
VisualShaderNodeTexture::Source get_source();
Texture get_texture();
VisualShaderNodeTexture::TextureType get_texture_type();
void set_source(VisualShaderNodeTexture::Source p_value);
void set_texture(Texture p_value);
void set_texture_type(VisualShaderNodeTexture::TextureType p_value);
};
#endif