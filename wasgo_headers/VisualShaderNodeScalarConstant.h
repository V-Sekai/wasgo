/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARCONSTANT_H
#define VISUALSHADERNODESCALARCONSTANT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarConstant : public VisualShaderNode{
public:
float get_constant();
void set_constant(float p_value);

VisualShaderNodeScalarConstant(WasGoId p_wasgo_id);
~VisualShaderNodeScalarConstant();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_VisualShaderNodeScalarConstant_wrapper_get_constant(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeScalarConstant_wrapper_set_constant(WasGoId wasgo_id, float p_value);
}
#endif