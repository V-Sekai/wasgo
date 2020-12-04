/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARSMOOTHSTEP_H
#define VISUALSHADERNODESCALARSMOOTHSTEP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarSmoothStep : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeScalarSmoothStep(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarSmoothStep(VisualShaderNode other);
VisualShaderNodeScalarSmoothStep new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarSmoothStep_constructor();
            
}
#endif