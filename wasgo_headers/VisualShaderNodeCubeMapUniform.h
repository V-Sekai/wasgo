/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUBEMAPUNIFORM_H
#define VISUALSHADERNODECUBEMAPUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeTextureUniform.h"
class VisualShaderNodeCubeMapUniform : public VisualShaderNodeTextureUniform{
public:

protected:
public:
explicit VisualShaderNodeCubeMapUniform(WasGoId p_wasgo_id);
explicit VisualShaderNodeCubeMapUniform(VisualShaderNodeTextureUniform other);
VisualShaderNodeCubeMapUniform new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeCubeMapUniform_constructor();
            
}
#endif