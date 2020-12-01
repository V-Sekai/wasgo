/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEBOOLEANCONSTANT_H
#define VISUALSHADERNODEBOOLEANCONSTANT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeBooleanConstant : public VisualShaderNode{
public:
bool get_constant();
void set_constant(bool p_value);

VisualShaderNodeBooleanConstant(WasGoId p_wasgo_id);
~VisualShaderNodeBooleanConstant();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_VisualShaderNodeBooleanConstant_wrapper_get_constant(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeBooleanConstant_wrapper_set_constant(WasGoId wasgo_id, bool p_value);
}
#endif