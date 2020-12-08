/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVEC3UNIFORM_H
#define VISUALSHADERNODEVEC3UNIFORM_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeVec3Uniform : public VisualShaderNodeUniform{
public:

protected:
public:
explicit VisualShaderNodeVec3Uniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeVec3Uniform(VisualShaderNodeUniform other);
VisualShaderNodeVec3Uniform();
VisualShaderNodeVec3Uniform new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVec3Uniform_constructor();
            
}
#endif