/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORREFRACT_H
#define VISUALSHADERNODEVECTORREFRACT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorRefract : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorRefract(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorRefract();
~VisualShaderNodeVectorRefract();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorRefract_constructor();
    void _wasgo_VisualShaderNodeVectorRefract_destructor(WasGoId p_wasgo_id);
            
}
#endif