/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEDOTPRODUCT_H
#define VISUALSHADERNODEDOTPRODUCT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeDotProduct : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeDotProduct(WasGoID p_wasgo_id);
explicit VisualShaderNodeDotProduct(VisualShaderNode other);
VisualShaderNodeDotProduct new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeDotProduct_constructor();
            
}
#endif