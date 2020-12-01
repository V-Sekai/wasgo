/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORCONSTANT_H
#define VISUALSHADERNODECOLORCONSTANT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Color.h"
#include "VisualShaderNode.h"
class VisualShaderNodeColorConstant : public VisualShaderNode{
public:
Color get_constant();
void set_constant(Color p_value);

VisualShaderNodeColorConstant(WasGoId p_wasgo_id);
~VisualShaderNodeColorConstant();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeColorConstant_wrapper_get_constant(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeColorConstant_wrapper_set_constant(WasGoId wasgo_id, WasGoId p_value);
}
#endif