/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEDETERMINANT_H
#define VISUALSHADERNODEDETERMINANT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeDeterminant : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeDeterminant(WasGoID p_wasgo_id);
explicit VisualShaderNodeDeterminant(VisualShaderNode other);
VisualShaderNodeDeterminant();
VisualShaderNodeDeterminant new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeDeterminant_constructor();
            
}
#endif