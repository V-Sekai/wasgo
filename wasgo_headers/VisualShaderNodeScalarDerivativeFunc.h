/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARDERIVATIVEFUNC_H
#define VISUALSHADERNODESCALARDERIVATIVEFUNC_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarDerivativeFunc : public VisualShaderNode{
enum Function{
FUNC_SUM,
FUNC_X,
FUNC_Y
};
VisualShaderNodeScalarDerivativeFunc::Function get_function();
void set_function(VisualShaderNodeScalarDerivativeFunc::Function p_func);

VisualShaderNodeScalarDerivativeFunc(WasGoId p_wasgo_id);
~VisualShaderNodeScalarDerivativeFunc();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeScalarDerivativeFunc_wrapper_set_function(WasGoId wasgo_id, WasGo::WasGoId p_func);
}
#endif