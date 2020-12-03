/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMCOMPOSE_H
#define VISUALSHADERNODETRANSFORMCOMPOSE_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformCompose : public VisualShaderNode{
public:

protected:
VisualShaderNodeTransformCompose(WasGoId p_wasgo_id);
public:
VisualShaderNodeTransformCompose();
~VisualShaderNodeTransformCompose();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeTransformCompose_constructor();
    void _wasgo_VisualShaderNodeTransformCompose_destructor(WasGoId p_wasgo_id);
            
}
#endif