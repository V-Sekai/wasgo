/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEBOOLEANCONSTANT_H
#define VISUALSHADERNODEBOOLEANCONSTANT_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeBooleanConstant : public VisualShaderNode{
public:
bool get_constant();
void set_constant(bool p_value);

protected:
public:
explicit VisualShaderNodeBooleanConstant(WasGoId p_wasgo_id);
explicit VisualShaderNodeBooleanConstant(VisualShaderNode other);
VisualShaderNodeBooleanConstant new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_VisualShaderNodeBooleanConstant_wrapper_get_constant(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeBooleanConstant_wrapper_set_constant(WasGoId wasgo_id, bool p_value);

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeBooleanConstant_constructor();
            
}
#endif