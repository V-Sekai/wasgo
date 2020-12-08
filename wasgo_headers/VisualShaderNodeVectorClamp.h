/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORCLAMP_H
#define VISUALSHADERNODEVECTORCLAMP_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorClamp : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorClamp(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorClamp(VisualShaderNode other);
VisualShaderNodeVectorClamp();
VisualShaderNodeVectorClamp new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorClamp_constructor();
            
}
#endif