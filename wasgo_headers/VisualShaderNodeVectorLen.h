/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORLEN_H
#define VISUALSHADERNODEVECTORLEN_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorLen : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorLen(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorLen(VisualShaderNode other);
VisualShaderNodeVectorLen();
VisualShaderNodeVectorLen new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorLen_constructor();
            
}
#endif