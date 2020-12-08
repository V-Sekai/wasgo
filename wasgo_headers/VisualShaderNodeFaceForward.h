/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEFACEFORWARD_H
#define VISUALSHADERNODEFACEFORWARD_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeFaceForward : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeFaceForward(WasGoID p_wasgo_id);
explicit VisualShaderNodeFaceForward(VisualShaderNode other);
VisualShaderNodeFaceForward();
VisualShaderNodeFaceForward new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeFaceForward_constructor();
            
}
#endif