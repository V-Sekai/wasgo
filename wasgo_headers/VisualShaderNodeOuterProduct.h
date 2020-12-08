/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEOUTERPRODUCT_H
#define VISUALSHADERNODEOUTERPRODUCT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeOuterProduct : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeOuterProduct(WasGoID p_wasgo_id);
explicit VisualShaderNodeOuterProduct(VisualShaderNode other);
VisualShaderNodeOuterProduct();
VisualShaderNodeOuterProduct new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeOuterProduct_constructor();
            
}
#endif