/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEDETERMINANT_H
#define VISUALSHADERNODEDETERMINANT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeDeterminant : public VisualShaderNode{
public:

protected:
VisualShaderNodeDeterminant(WasGoId p_wasgo_id);
public:
VisualShaderNodeDeterminant();
~VisualShaderNodeDeterminant();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeDeterminant_constructor();
    void _wasgo_VisualShaderNodeDeterminant_destructor(WasGoId p_wasgo_id);
            
}
#endif