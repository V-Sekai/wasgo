/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORINTERP_H
#define VISUALSHADERNODEVECTORINTERP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorInterp : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorInterp(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorInterp();
~VisualShaderNodeVectorInterp();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorInterp_constructor();
    void _wasgo_VisualShaderNodeVectorInterp_destructor(WasGoId p_wasgo_id);
            
}
#endif