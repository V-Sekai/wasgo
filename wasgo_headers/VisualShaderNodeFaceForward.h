/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEFACEFORWARD_H
#define VISUALSHADERNODEFACEFORWARD_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeFaceForward : public VisualShaderNode{
public:

protected:
VisualShaderNodeFaceForward(WasGoId p_wasgo_id);
public:
VisualShaderNodeFaceForward();
~VisualShaderNodeFaceForward();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeFaceForward_constructor();
    void _wasgo_VisualShaderNodeFaceForward_destructor(WasGoId p_wasgo_id);
            
}
#endif