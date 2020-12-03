/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEFRESNEL_H
#define VISUALSHADERNODEFRESNEL_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeFresnel : public VisualShaderNode{
public:

protected:
VisualShaderNodeFresnel(WasGoId p_wasgo_id);
public:
VisualShaderNodeFresnel();
~VisualShaderNodeFresnel();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeFresnel_constructor();
    void _wasgo_VisualShaderNodeFresnel_destructor(WasGoId p_wasgo_id);
            
}
#endif