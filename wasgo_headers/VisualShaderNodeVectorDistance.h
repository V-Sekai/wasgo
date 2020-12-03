/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDISTANCE_H
#define VISUALSHADERNODEVECTORDISTANCE_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorDistance : public VisualShaderNode{
public:

protected:
VisualShaderNodeVectorDistance(WasGoId p_wasgo_id);
public:
VisualShaderNodeVectorDistance();
~VisualShaderNodeVectorDistance();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeVectorDistance_constructor();
    void _wasgo_VisualShaderNodeVectorDistance_destructor(WasGoId p_wasgo_id);
            
}
#endif