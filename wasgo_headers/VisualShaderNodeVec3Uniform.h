/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVEC3UNIFORM_H
#define VISUALSHADERNODEVEC3UNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeVec3Uniform : public VisualShaderNodeUniform{
public:

protected:
VisualShaderNodeVec3Uniform(WasGoId p_wasgo_id);
public:
VisualShaderNodeVec3Uniform();
~VisualShaderNodeVec3Uniform();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVec3Uniform_constructor();
    void _wasgo_VisualShaderNodeVec3Uniform_destructor(WasGoId p_wasgo_id);
            
}
#endif