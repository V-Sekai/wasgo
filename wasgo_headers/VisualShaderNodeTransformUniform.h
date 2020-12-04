/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMUNIFORM_H
#define VISUALSHADERNODETRANSFORMUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeTransformUniform : public VisualShaderNodeUniform{
public:

protected:
public:
explicit VisualShaderNodeTransformUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeTransformUniform(VisualShaderNodeUniform other);
VisualShaderNodeTransformUniform new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTransformUniform_constructor();
            
}
#endif