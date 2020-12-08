/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUSTOM_H
#define VISUALSHADERNODECUSTOM_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeCustom : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeCustom(WasGoID p_wasgo_id);
explicit VisualShaderNodeCustom(VisualShaderNode other);
VisualShaderNodeCustom();
VisualShaderNodeCustom new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeCustom_constructor();
            
}
#endif