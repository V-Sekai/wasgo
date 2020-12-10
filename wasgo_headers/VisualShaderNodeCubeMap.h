/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUBEMAP_H
#define VISUALSHADERNODECUBEMAP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
#include "CubeMap.h"
class VisualShaderNodeCubeMap : public VisualShaderNode{
public:
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

protected:
public:
explicit VisualShaderNodeCubeMap(WasGoID p_wasgo_id);
explicit VisualShaderNodeCubeMap(VisualShaderNode other);
VisualShaderNodeCubeMap();
VisualShaderNodeCubeMap new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeCubeMap_wrapper_get_cube_map(WasGoID wasgo_id);
WasGoID _wasgo_VisualShaderNodeCubeMap_wrapper_get_source(WasGoID wasgo_id);
WasGoID _wasgo_VisualShaderNodeCubeMap_wrapper_get_texture_type(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeCubeMap_wrapper_set_cube_map(WasGoID wasgo_id, WasGoID p_value);
void _wasgo_VisualShaderNodeCubeMap_wrapper_set_source(WasGoID wasgo_id, WasGoID p_value);
void _wasgo_VisualShaderNodeCubeMap_wrapper_set_texture_type(WasGoID wasgo_id, WasGoID p_value);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeCubeMap_constructor();
            
}
#endif