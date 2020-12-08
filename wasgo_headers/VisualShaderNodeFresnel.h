/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEFRESNEL_H
#define VISUALSHADERNODEFRESNEL_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeFresnel : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeFresnel(WasGoID p_wasgo_id);
explicit VisualShaderNodeFresnel(VisualShaderNode other);
VisualShaderNodeFresnel();
VisualShaderNodeFresnel new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeFresnel_constructor();
            
}
#endif