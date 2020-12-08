/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORSCALARMIX_H
#define VISUALSHADERNODEVECTORSCALARMIX_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorScalarMix : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorScalarMix(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorScalarMix(VisualShaderNode other);
VisualShaderNodeVectorScalarMix();
VisualShaderNodeVectorScalarMix new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorScalarMix_constructor();
            
}
#endif