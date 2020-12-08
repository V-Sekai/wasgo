/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORINTERP_H
#define VISUALSHADERNODEVECTORINTERP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorInterp : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorInterp(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorInterp(VisualShaderNode other);
VisualShaderNodeVectorInterp();
VisualShaderNodeVectorInterp new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorInterp_constructor();
            
}
#endif