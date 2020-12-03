/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMUNIFORM_H
#define VISUALSHADERNODETRANSFORMUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeTransformUniform : public VisualShaderNodeUniform{
public:

protected:
VisualShaderNodeTransformUniform(WasGoId p_wasgo_id);
public:
VisualShaderNodeTransformUniform();
~VisualShaderNodeTransformUniform();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeTransformUniform_constructor();
    void _wasgo_VisualShaderNodeTransformUniform_destructor(WasGoId p_wasgo_id);
            
}
#endif