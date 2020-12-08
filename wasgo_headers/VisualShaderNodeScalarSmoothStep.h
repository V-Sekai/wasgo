/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARSMOOTHSTEP_H
#define VISUALSHADERNODESCALARSMOOTHSTEP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarSmoothStep : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeScalarSmoothStep(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarSmoothStep(VisualShaderNode other);
VisualShaderNodeScalarSmoothStep();
VisualShaderNodeScalarSmoothStep new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarSmoothStep_constructor();
            
}
#endif