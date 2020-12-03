/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEOUTERPRODUCT_H
#define VISUALSHADERNODEOUTERPRODUCT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeOuterProduct : public VisualShaderNode{
public:

protected:
VisualShaderNodeOuterProduct(WasGoId p_wasgo_id);
public:
VisualShaderNodeOuterProduct();
~VisualShaderNodeOuterProduct();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeOuterProduct_constructor();
    void _wasgo_VisualShaderNodeOuterProduct_destructor(WasGoId p_wasgo_id);
            
}
#endif