/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUBEMAPUNIFORM_H
#define VISUALSHADERNODECUBEMAPUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeTextureUniform.h"
class VisualShaderNodeCubeMapUniform : public VisualShaderNodeTextureUniform{
public:

protected:
VisualShaderNodeCubeMapUniform(WasGoId p_wasgo_id);
public:
VisualShaderNodeCubeMapUniform();
~VisualShaderNodeCubeMapUniform();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeCubeMapUniform_constructor();
    void _wasgo_VisualShaderNodeCubeMapUniform_destructor(WasGoId p_wasgo_id);
            
}
#endif