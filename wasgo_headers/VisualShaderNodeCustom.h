/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUSTOM_H
#define VISUALSHADERNODECUSTOM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeCustom : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeCustom(WasGoID p_wasgo_id);
explicit VisualShaderNodeCustom(VisualShaderNode other);
VisualShaderNodeCustom new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeCustom_constructor();
            
}
#endif