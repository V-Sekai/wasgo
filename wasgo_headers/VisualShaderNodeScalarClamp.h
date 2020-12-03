/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARCLAMP_H
#define VISUALSHADERNODESCALARCLAMP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarClamp : public VisualShaderNode{
public:

protected:
VisualShaderNodeScalarClamp(WasGoId p_wasgo_id);
public:
VisualShaderNodeScalarClamp();
~VisualShaderNodeScalarClamp();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarClamp_constructor();
    void _wasgo_VisualShaderNodeScalarClamp_destructor(WasGoId p_wasgo_id);
            
}
#endif