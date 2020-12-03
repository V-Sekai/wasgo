/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARFUNC_H
#define VISUALSHADERNODESCALARFUNC_H

#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarFunc : public VisualShaderNode{
public:
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

protected:
VisualShaderNodeScalarFunc(WasGoId p_wasgo_id);
public:
VisualShaderNodeScalarFunc();
~VisualShaderNodeScalarFunc();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeScalarFunc_wrapper_get_function(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeScalarFunc_wrapper_set_function(WasGoId wasgo_id, WasGoId p_func);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeScalarFunc_constructor();
    void _wasgo_VisualShaderNodeScalarFunc_destructor(WasGoId p_wasgo_id);
            
}
#endif