/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARUNIFORM_H
#define VISUALSHADERNODESCALARUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeScalarUniform : public VisualShaderNodeUniform{
public:

protected:
public:
explicit VisualShaderNodeScalarUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarUniform(VisualShaderNodeUniform other);
VisualShaderNodeScalarUniform new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarUniform_constructor();
            
}
#endif