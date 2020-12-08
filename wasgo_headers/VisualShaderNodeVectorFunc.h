/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORFUNC_H
#define VISUALSHADERNODEVECTORFUNC_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorFunc : public VisualShaderNode{
public:
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

protected:
public:
explicit VisualShaderNodeVectorFunc(WasGoID p_wasgo_id);
explicit VisualShaderNodeVectorFunc(VisualShaderNode other);
VisualShaderNodeVectorFunc();
VisualShaderNodeVectorFunc new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_VisualShaderNodeVectorFunc_wrapper_get_function(WasGoID wasgo_id);
void _wasgo_VisualShaderNodeVectorFunc_wrapper_set_function(WasGoID wasgo_id, WasGoID p_func);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeVectorFunc_constructor();
            
}
#endif