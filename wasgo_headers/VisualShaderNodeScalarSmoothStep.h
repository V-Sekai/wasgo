/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARSMOOTHSTEP_H
#define VISUALSHADERNODESCALARSMOOTHSTEP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarSmoothStep : public VisualShaderNode{
public:

protected:
VisualShaderNodeScalarSmoothStep(WasGoId p_wasgo_id);
public:
VisualShaderNodeScalarSmoothStep();
~VisualShaderNodeScalarSmoothStep();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarSmoothStep_constructor();
    void _wasgo_VisualShaderNodeScalarSmoothStep_destructor(WasGoId p_wasgo_id);
            
}
#endif