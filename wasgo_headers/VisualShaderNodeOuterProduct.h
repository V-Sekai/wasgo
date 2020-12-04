/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEOUTERPRODUCT_H
#define VISUALSHADERNODEOUTERPRODUCT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeOuterProduct : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeOuterProduct(WasGoId p_wasgo_id);
explicit VisualShaderNodeOuterProduct(VisualShaderNode other);
VisualShaderNodeOuterProduct new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeOuterProduct_constructor();
            
}
#endif