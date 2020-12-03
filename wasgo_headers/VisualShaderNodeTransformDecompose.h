/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMDECOMPOSE_H
#define VISUALSHADERNODETRANSFORMDECOMPOSE_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformDecompose : public VisualShaderNode{
public:

protected:
VisualShaderNodeTransformDecompose(WasGoId p_wasgo_id);
public:
VisualShaderNodeTransformDecompose();
~VisualShaderNodeTransformDecompose();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeTransformDecompose_constructor();
    void _wasgo_VisualShaderNodeTransformDecompose_destructor(WasGoId p_wasgo_id);
            
}
#endif