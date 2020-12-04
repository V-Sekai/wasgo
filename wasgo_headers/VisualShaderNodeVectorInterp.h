/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORINTERP_H
#define VISUALSHADERNODEVECTORINTERP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorInterp : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorInterp(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorInterp(VisualShaderNode other);
VisualShaderNodeVectorInterp new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorInterp_constructor();
            
}
#endif