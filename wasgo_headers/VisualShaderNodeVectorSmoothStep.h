/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORSMOOTHSTEP_H
#define VISUALSHADERNODEVECTORSMOOTHSTEP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorSmoothStep : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorSmoothStep(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorSmoothStep();
~VisualShaderNodeVectorSmoothStep();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorSmoothStep_constructor();
    void _wasgo_VisualShaderNodeVectorSmoothStep_destructor(WasGoId p_wasgo_id);
            
}
#endif