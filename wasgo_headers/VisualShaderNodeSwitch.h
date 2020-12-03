/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESWITCH_H
#define VISUALSHADERNODESWITCH_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeSwitch : public VisualShaderNode{
public:

protected:
VisualShaderNodeSwitch(WasGoId p_wasgo_id);
public:
VisualShaderNodeSwitch();
~VisualShaderNodeSwitch();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeSwitch_constructor();
    void _wasgo_VisualShaderNodeSwitch_destructor(WasGoId p_wasgo_id);
            
}
#endif