/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORREFRACT_H
#define VISUALSHADERNODEVECTORREFRACT_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorRefract : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeVectorRefract(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorRefract(VisualShaderNode other);
VisualShaderNodeVectorRefract();
VisualShaderNodeVectorRefract new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorRefract_constructor();
            
}
#endif