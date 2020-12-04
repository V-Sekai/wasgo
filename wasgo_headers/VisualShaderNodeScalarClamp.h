/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARCLAMP_H
#define VISUALSHADERNODESCALARCLAMP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarClamp : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeScalarClamp(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarClamp(VisualShaderNode other);
VisualShaderNodeScalarClamp new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarClamp_constructor();
            
}
#endif