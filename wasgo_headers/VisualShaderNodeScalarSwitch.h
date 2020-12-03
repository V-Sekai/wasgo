/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARSWITCH_H
#define VISUALSHADERNODESCALARSWITCH_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeSwitch.h"
class VisualShaderNodeScalarSwitch : public VisualShaderNodeSwitch{
public:

protected:
VisualShaderNodeScalarSwitch(WasGoId p_wasgo_id);
public:
VisualShaderNodeScalarSwitch();
~VisualShaderNodeScalarSwitch();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarSwitch_constructor();
    void _wasgo_VisualShaderNodeScalarSwitch_destructor(WasGoId p_wasgo_id);
            
}
#endif