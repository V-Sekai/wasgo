/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESWITCH_H
#define VISUALSHADERNODESWITCH_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeSwitch : public VisualShaderNode{
public:

protected:
public:
explicit VisualShaderNodeSwitch(WasGoID p_wasgo_id);
explicit VisualShaderNodeSwitch(VisualShaderNode other);
VisualShaderNodeSwitch new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeSwitch_constructor();
            
}
#endif