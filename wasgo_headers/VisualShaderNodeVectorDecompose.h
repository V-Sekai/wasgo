/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDECOMPOSE_H
#define VISUALSHADERNODEVECTORDECOMPOSE_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorDecompose : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorDecompose(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorDecompose();
~VisualShaderNodeVectorDecompose();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorDecompose_constructor();
    void _wasgo_VisualShaderNodeVectorDecompose_destructor(WasGoId p_wasgo_id);
            
}
#endif