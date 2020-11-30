/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORFUNC_H
#define VISUALSHADERNODEVECTORFUNC_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorFunc : public VisualShaderNode{
enum Function{
FUNC_NORMALIZE,
FUNC_SATURATE,
FUNC_NEGATE,
FUNC_RECIPROCAL,
FUNC_RGB2HSV,
FUNC_HSV2RGB,
FUNC_ABS,
FUNC_ACOS,
FUNC_ACOSH,
FUNC_ASIN,
FUNC_ASINH,
FUNC_ATAN,
FUNC_ATANH,
FUNC_CEIL,
FUNC_COS,
FUNC_COSH,
FUNC_DEGREES,
FUNC_EXP,
FUNC_EXP2,
FUNC_FLOOR,
FUNC_FRAC,
FUNC_INVERSE_SQRT,
FUNC_LOG,
FUNC_LOG2,
FUNC_RADIANS,
FUNC_ROUND,
FUNC_ROUNDEVEN,
FUNC_SIGN,
FUNC_SIN,
FUNC_SINH,
FUNC_SQRT,
FUNC_TAN,
FUNC_TANH,
FUNC_TRUNC,
FUNC_ONEMINUS
};
VisualShaderNodeVectorFunc::Function get_function();
void set_function(VisualShaderNodeVectorFunc::Function p_func);

VisualShaderNodeVectorFunc(WasGoId p_wasgo_id);
~VisualShaderNodeVectorFunc();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeVectorFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeVectorFunc_wrapper_set_function(WasGoId wasgo_id, WasGo::WasGoId p_func);
}
#endif