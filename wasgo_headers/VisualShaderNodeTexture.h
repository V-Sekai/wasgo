/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTURE_H
#define VISUALSHADERNODETEXTURE_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit VisualShaderNodeTexture(WasGoID p_wasgo_id);
explicit VisualShaderNodeTexture(VisualShaderNode other);
VisualShaderNodeTexture();
VisualShaderNodeTexture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeTexture_wrapper_get_source(WasGoID wasgo_id);
WasGoID _wasgo_VisualShaderNodeTexture_wrapper_get_texture(WasGoID wasgo_id);
WasGoID _wasgo_VisualShaderNodeTexture_wrapper_get_texture_type(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeTexture_wrapper_set_source(WasGoID wasgo_id, WasGoID p_value);
void _wasgo_VisualShaderNodeTexture_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_value);
void _wasgo_VisualShaderNodeTexture_wrapper_set_texture_type(WasGoID wasgo_id, WasGoID p_value);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTexture_constructor();
            
}
#endif