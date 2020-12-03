/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORCOMPOSE_H
#define VISUALSHADERNODEVECTORCOMPOSE_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorCompose : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorCompose(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorCompose();
~VisualShaderNodeVectorCompose();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorCompose_constructor();
    void _wasgo_VisualShaderNodeVectorCompose_destructor(WasGoId p_wasgo_id);
            
}
#endif