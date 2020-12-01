/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTURE_H
#define VISUALSHADERNODETEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "Texture.h"
class VisualShaderNodeTexture : public VisualShaderNode{
public:
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

VisualShaderNodeTexture(WasGoId p_wasgo_id);
~VisualShaderNodeTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeTexture_wrapper_get_source(WasGoId wasgo_id);
WasGoId _wasgo_VisualShaderNodeTexture_wrapper_get_texture(WasGoId wasgo_id);
WasGoId _wasgo_VisualShaderNodeTexture_wrapper_get_texture_type(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeTexture_wrapper_set_source(WasGoId wasgo_id, WasGoId p_value);
void _wasgo_VisualShaderNodeTexture_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_value);
void _wasgo_VisualShaderNodeTexture_wrapper_set_texture_type(WasGoId wasgo_id, WasGoId p_value);
}
#endif