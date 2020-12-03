/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORCLAMP_H
#define VISUALSHADERNODEVECTORCLAMP_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorClamp : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorClamp(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorClamp();
~VisualShaderNodeVectorClamp();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorClamp_constructor();
    void _wasgo_VisualShaderNodeVectorClamp_destructor(WasGoId p_wasgo_id);
            
}
#endif