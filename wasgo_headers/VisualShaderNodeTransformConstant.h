/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETRANSFORMCONSTANT_H
#define VISUALSHADERNODETRANSFORMCONSTANT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Transform.h"
#include "VisualShaderNode.h"
class VisualShaderNodeTransformConstant : public VisualShaderNode{
public:
Transform get_constant();
void set_constant(Transform p_value);

VisualShaderNodeTransformConstant(WasGoId p_wasgo_id);
~VisualShaderNodeTransformConstant();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeTransformConstant_wrapper_get_constant(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeTransformConstant_wrapper_set_constant(WasGoId wasgo_id, WasGoId p_value);
}
#endif