/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARINTERP_H
#define VISUALSHADERNODESCALARINTERP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarInterp : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeScalarInterp(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarInterp(VisualShaderNode other);
VisualShaderNodeScalarInterp new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarInterp_constructor();
            
}
#endif