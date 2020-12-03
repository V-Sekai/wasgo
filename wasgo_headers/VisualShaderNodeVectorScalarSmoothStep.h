/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORSCALARSMOOTHSTEP_H
#define VISUALSHADERNODEVECTORSCALARSMOOTHSTEP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorScalarSmoothStep : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorScalarSmoothStep(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorScalarSmoothStep();
~VisualShaderNodeVectorScalarSmoothStep();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorScalarSmoothStep_constructor();
    void _wasgo_VisualShaderNodeVectorScalarSmoothStep_destructor(WasGoId p_wasgo_id);
            
}
#endif