/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUBEMAP_H
#define VISUALSHADERNODECUBEMAP_H

#include <stdint.h>

#include "VisualShaderNode.h"
#include "CubeMap.h"
class VisualShaderNodeCubeMap : public VisualShaderNode{
public: VisualShaderNodeCubeMap();
enum TextureType{
TYPE_DATA: 0,
TYPE_COLOR: 1,
};
enum Source{
SOURCE_TEXTURE: 0,
};
CubeMap  get_cube_map();
CubeMap  get_cube_map();
enum.VisualShaderNodeCubeMap::Source  get_source();
enum.VisualShaderNodeCubeMap::Source  get_source();
enum.VisualShaderNodeCubeMap::TextureType  get_texture_type();
enum.VisualShaderNodeCubeMap::TextureType  get_texture_type();
void  set_cube_map(CubeMap value);
void  set_source(int value);
void  set_texture_type(int value);
};
#endif