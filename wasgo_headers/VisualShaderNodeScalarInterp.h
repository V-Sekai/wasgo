/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARINTERP_H
#define VISUALSHADERNODESCALARINTERP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarInterp : public VisualShaderNode{
public:

protected:
VisualShaderNodeScalarInterp(WasGoId p_wasgo_id);
public:
VisualShaderNodeScalarInterp();
~VisualShaderNodeScalarInterp();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarInterp_constructor();
    void _wasgo_VisualShaderNodeScalarInterp_destructor(WasGoId p_wasgo_id);
            
}
#endif