/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORSCALARSMOOTHSTEP_H
#define VISUALSHADERNODEVECTORSCALARSMOOTHSTEP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorScalarSmoothStep : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorScalarSmoothStep(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorScalarSmoothStep(VisualShaderNode other);
VisualShaderNodeVectorScalarSmoothStep();
VisualShaderNodeVectorScalarSmoothStep new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorScalarSmoothStep_constructor();
            
}
#endif