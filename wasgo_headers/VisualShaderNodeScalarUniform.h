/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARUNIFORM_H
#define VISUALSHADERNODESCALARUNIFORM_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeScalarUniform : public VisualShaderNodeUniform{
public:

protected:
public:
explicit VisualShaderNodeScalarUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarUniform(VisualShaderNodeUniform other);
VisualShaderNodeScalarUniform();
VisualShaderNodeScalarUniform new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarUniform_constructor();
            
}
#endif