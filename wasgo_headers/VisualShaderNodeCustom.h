/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUSTOM_H
#define VISUALSHADERNODECUSTOM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeCustom : public VisualShaderNode{
public:

protected:
VisualShaderNodeCustom(WasGoId p_wasgo_id);
public:
VisualShaderNodeCustom();
~VisualShaderNodeCustom();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeCustom_constructor();
    void _wasgo_VisualShaderNodeCustom_destructor(WasGoId p_wasgo_id);
            
}
#endif