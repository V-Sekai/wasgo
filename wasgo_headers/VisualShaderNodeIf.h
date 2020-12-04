/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEIF_H
#define VISUALSHADERNODEIF_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeIf : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeIf(WasGoID p_wasgo_id);
explicit VisualShaderNodeIf(VisualShaderNode other);
VisualShaderNodeIf new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeIf_constructor();
            
}
#endif