/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDISTANCE_H
#define VISUALSHADERNODEVECTORDISTANCE_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorDistance : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorDistance(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorDistance(VisualShaderNode other);
VisualShaderNodeVectorDistance();
VisualShaderNodeVectorDistance new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorDistance_constructor();
            
}
#endif