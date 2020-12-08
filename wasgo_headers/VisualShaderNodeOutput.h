/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEOUTPUT_H
#define VISUALSHADERNODEOUTPUT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeOutput : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeOutput(WasGoID p_wasgo_id);
explicit VisualShaderNodeOutput(VisualShaderNode other);
VisualShaderNodeOutput();
VisualShaderNodeOutput new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeOutput_constructor();
            
}
#endif