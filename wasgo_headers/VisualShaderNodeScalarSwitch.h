/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARSWITCH_H
#define VISUALSHADERNODESCALARSWITCH_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeSwitch.h"
class VisualShaderNodeScalarSwitch : public VisualShaderNodeSwitch{
public:

protected:
public:
explicit VisualShaderNodeScalarSwitch(WasGoId p_wasgo_id);
explicit VisualShaderNodeScalarSwitch(VisualShaderNodeSwitch other);
VisualShaderNodeScalarSwitch new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarSwitch_constructor();
            
}
#endif