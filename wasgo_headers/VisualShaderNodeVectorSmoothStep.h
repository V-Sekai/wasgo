/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORSMOOTHSTEP_H
#define VISUALSHADERNODEVECTORSMOOTHSTEP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorSmoothStep : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorSmoothStep(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorSmoothStep(VisualShaderNode other);
VisualShaderNodeVectorSmoothStep();
VisualShaderNodeVectorSmoothStep new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorSmoothStep_constructor();
            
}
#endif