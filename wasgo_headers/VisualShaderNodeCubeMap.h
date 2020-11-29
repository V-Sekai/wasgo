/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUBEMAP_H
#define VISUALSHADERNODECUBEMAP_H

#include "stdint.h"

#include "CubeMap.h"
#include "VisualShaderNode.h"
class VisualShaderNodeCubeMap : public VisualShaderNode{
public: VisualShaderNodeCubeMap();
enum Source{
SOURCE_TEXTURE,
SOURCE_PORT
};
enum TextureType{
TYPE_DATA,
TYPE_COLOR,
TYPE_NORMALMAP
};
CubeMap get_cube_map();
VisualShaderNodeCubeMap::Source get_source();
VisualShaderNodeCubeMap::TextureType get_texture_type();
void set_cube_map(CubeMap p_value);
void set_source(VisualShaderNodeCubeMap::Source p_value);
void set_texture_type(VisualShaderNodeCubeMap::TextureType p_value);
};
#endif