/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUBEMAPUNIFORM_H
#define VISUALSHADERNODECUBEMAPUNIFORM_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNodeTextureUniform.h"
class VisualShaderNodeCubeMapUniform : public VisualShaderNodeTextureUniform{
public:

protected:
public:
explicit VisualShaderNodeCubeMapUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeCubeMapUniform(VisualShaderNodeTextureUniform other);
VisualShaderNodeCubeMapUniform();
VisualShaderNodeCubeMapUniform new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeCubeMapUniform_constructor();
            
}
#endif