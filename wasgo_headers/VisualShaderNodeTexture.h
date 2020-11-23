/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTURE_H
#define VISUALSHADERNODETEXTURE_H

#include <stdint.h>

#include "VisualShaderNode.h"
#include "Texture.h"
class VisualShaderNodeTexture : public VisualShaderNode{
public: VisualShaderNodeTexture();
enum TextureType{
TYPE_DATA: 0,
TYPE_COLOR: 1,
};
enum Source{
SOURCE_TEXTURE: 0,
SOURCE_SCREEN: 1,
SOURCE_2D_TEXTURE: 2,
SOURCE_2D_NORMAL: 3,
SOURCE_DEPTH: 4,
};
enum.VisualShaderNodeTexture::Source  get_source();
enum.VisualShaderNodeTexture::Source  get_source();
Texture  get_texture();
Texture  get_texture();
enum.VisualShaderNodeTexture::TextureType  get_texture_type();
enum.VisualShaderNodeTexture::TextureType  get_texture_type();
void  set_source(int value);
void  set_texture(Texture value);
void  set_texture_type(int value);
};
#endif