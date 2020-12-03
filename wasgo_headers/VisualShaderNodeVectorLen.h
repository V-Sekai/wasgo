/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORLEN_H
#define VISUALSHADERNODEVECTORLEN_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorLen : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorLen(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorLen();
~VisualShaderNodeVectorLen();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorLen_constructor();
    void _wasgo_VisualShaderNodeVectorLen_destructor(WasGoId p_wasgo_id);
            
}
#endif