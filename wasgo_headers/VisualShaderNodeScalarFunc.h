/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARFUNC_H
#define VISUALSHADERNODESCALARFUNC_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarFunc : public VisualShaderNode{
enum Function{
FUNC_SIN,
FUNC_COS,
FUNC_TAN,
FUNC_ASIN,
FUNC_ACOS,
FUNC_ATAN,
FUNC_SINH,
FUNC_COSH,
FUNC_TANH,
FUNC_LOG,
FUNC_EXP,
FUNC_SQRT,
FUNC_ABS,
FUNC_SIGN,
FUNC_FLOOR,
FUNC_ROUND,
FUNC_CEIL,
FUNC_FRAC,
FUNC_SATURATE,
FUNC_NEGATE,
FUNC_ACOSH,
FUNC_ASINH,
FUNC_ATANH,
FUNC_DEGREES,
FUNC_EXP2,
FUNC_INVERSE_SQRT,
FUNC_LOG2,
FUNC_RADIANS,
FUNC_RECIPROCAL,
FUNC_ROUNDEVEN,
FUNC_TRUNC,
FUNC_ONEMINUS
};
VisualShaderNodeScalarFunc::Function get_function();
void set_function(VisualShaderNodeScalarFunc::Function p_func);

VisualShaderNodeScalarFunc(WasGoId p_wasgo_id);
~VisualShaderNodeScalarFunc();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeScalarFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeScalarFunc_wrapper_set_function(WasGoId wasgo_id, WasGo::WasGoId p_func);
}
#endif