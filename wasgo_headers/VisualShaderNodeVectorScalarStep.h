/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORSCALARSTEP_H
#define VISUALSHADERNODEVECTORSCALARSTEP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorScalarStep : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorScalarStep(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorScalarStep();
~VisualShaderNodeVectorScalarStep();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorScalarStep_constructor();
    void _wasgo_VisualShaderNodeVectorScalarStep_destructor(WasGoId p_wasgo_id);
            
}
#endif