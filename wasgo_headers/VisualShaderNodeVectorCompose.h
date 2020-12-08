/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORCOMPOSE_H
#define VISUALSHADERNODEVECTORCOMPOSE_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorCompose : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorCompose(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorCompose(VisualShaderNode other);
VisualShaderNodeVectorCompose();
VisualShaderNodeVectorCompose new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorCompose_constructor();
            
}
#endif