/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARUNIFORM_H
#define VISUALSHADERNODESCALARUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeScalarUniform : public VisualShaderNodeUniform{
public:

protected:
VisualShaderNodeScalarUniform(WasGoId p_wasgo_id);
public:
VisualShaderNodeScalarUniform();
~VisualShaderNodeScalarUniform();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarUniform_constructor();
    void _wasgo_VisualShaderNodeScalarUniform_destructor(WasGoId p_wasgo_id);
            
}
#endif