/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMDECOMPOSE_H
#define VISUALSHADERNODETRANSFORMDECOMPOSE_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformDecompose : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeTransformDecompose(WasGoID p_wasgo_id);
explicit VisualShaderNodeTransformDecompose(VisualShaderNode other);
VisualShaderNodeTransformDecompose();
VisualShaderNodeTransformDecompose new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTransformDecompose_constructor();
            
}
#endif