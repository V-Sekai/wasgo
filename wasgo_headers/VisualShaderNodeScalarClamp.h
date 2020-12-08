/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARCLAMP_H
#define VISUALSHADERNODESCALARCLAMP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarClamp : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeScalarClamp(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarClamp(VisualShaderNode other);
VisualShaderNodeScalarClamp();
VisualShaderNodeScalarClamp new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarClamp_constructor();
            
}
#endif