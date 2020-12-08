/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEIF_H
#define VISUALSHADERNODEIF_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeIf : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeIf(WasGoID p_wasgo_id);
explicit VisualShaderNodeIf(VisualShaderNode other);
VisualShaderNodeIf();
VisualShaderNodeIf new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeIf_constructor();
            
}
#endif