/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEDOTPRODUCT_H
#define VISUALSHADERNODEDOTPRODUCT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeDotProduct : public VisualShaderNode{
public:

protected:
VisualShaderNodeDotProduct(WasGoId p_wasgo_id);
public:
VisualShaderNodeDotProduct();
~VisualShaderNodeDotProduct();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeDotProduct_constructor();
    void _wasgo_VisualShaderNodeDotProduct_destructor(WasGoId p_wasgo_id);
            
}
#endif