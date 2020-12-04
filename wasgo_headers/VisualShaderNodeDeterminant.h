/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEDETERMINANT_H
#define VISUALSHADERNODEDETERMINANT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeDeterminant : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeDeterminant(WasGoID p_wasgo_id);
explicit VisualShaderNodeDeterminant(VisualShaderNode other);
VisualShaderNodeDeterminant new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeDeterminant_constructor();
            
}
#endif