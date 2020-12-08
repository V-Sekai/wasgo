/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARSWITCH_H
#define VISUALSHADERNODESCALARSWITCH_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNodeSwitch.h"
class VisualShaderNodeScalarSwitch : public VisualShaderNodeSwitch{
public:

protected:
public:
explicit VisualShaderNodeScalarSwitch(WasGoID p_wasgo_id);
explicit VisualShaderNodeScalarSwitch(VisualShaderNodeSwitch other);
VisualShaderNodeScalarSwitch();
VisualShaderNodeScalarSwitch new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeScalarSwitch_constructor();
            
}
#endif