/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORSCALARMIX_H
#define VISUALSHADERNODEVECTORSCALARMIX_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorScalarMix : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorScalarMix(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorScalarMix();
~VisualShaderNodeVectorScalarMix();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorScalarMix_constructor();
    void _wasgo_VisualShaderNodeVectorScalarMix_destructor(WasGoId p_wasgo_id);
            
}
#endif