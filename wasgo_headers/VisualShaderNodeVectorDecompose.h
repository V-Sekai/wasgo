/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDECOMPOSE_H
#define VISUALSHADERNODEVECTORDECOMPOSE_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorDecompose : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorDecompose(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorDecompose(VisualShaderNode other);
VisualShaderNodeVectorDecompose();
VisualShaderNodeVectorDecompose new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorDecompose_constructor();
            
}
#endif