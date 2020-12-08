/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEDOTPRODUCT_H
#define VISUALSHADERNODEDOTPRODUCT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeDotProduct : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeDotProduct(WasGoID p_wasgo_id);
explicit VisualShaderNodeDotProduct(VisualShaderNode other);
VisualShaderNodeDotProduct();
VisualShaderNodeDotProduct new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeDotProduct_constructor();
            
}
#endif