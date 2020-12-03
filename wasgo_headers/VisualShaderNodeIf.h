/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEIF_H
#define VISUALSHADERNODEIF_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeIf : public VisualShaderNode{
public:

protected:
VisualShaderNodeIf(WasGoId p_wasgo_id);
public:
VisualShaderNodeIf();
~VisualShaderNodeIf();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeIf_constructor();
    void _wasgo_VisualShaderNodeIf_destructor(WasGoId p_wasgo_id);
            
}
#endif