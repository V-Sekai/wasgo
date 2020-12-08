/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMCOMPOSE_H
#define VISUALSHADERNODETRANSFORMCOMPOSE_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeTransformCompose : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeTransformCompose(WasGoID p_wasgo_id);
explicit VisualShaderNodeTransformCompose(VisualShaderNode other);
VisualShaderNodeTransformCompose();
VisualShaderNodeTransformCompose new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTransformCompose_constructor();
            
}
#endif