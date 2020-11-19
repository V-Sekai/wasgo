/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeVectorFunc : public VisualShaderNode{
public: VisualShaderNodeVectorFunc();
enum Function{
FUNC_NORMALIZE: 0,
FUNC_SATURATE: 1,
FUNC_NEGATE: 2,
FUNC_RECIPROCAL: 3,
FUNC_RGB2HSV: 4,
FUNC_HSV2RGB: 5,
FUNC_ABS: 6,
FUNC_ACOS: 7,
FUNC_ACOSH: 8,
FUNC_ASIN: 9,
FUNC_ASINH: 10,
FUNC_ATAN: 11,
FUNC_ATANH: 12,
FUNC_CEIL: 13,
FUNC_COS: 14,
FUNC_COSH: 15,
FUNC_DEGREES: 16,
FUNC_EXP: 17,
FUNC_EXP2: 18,
FUNC_FLOOR: 19,
FUNC_FRAC: 20,
FUNC_INVERSE_SQRT: 21,
FUNC_LOG: 22,
FUNC_LOG2: 23,
FUNC_RADIANS: 24,
FUNC_ROUND: 25,
FUNC_ROUNDEVEN: 26,
FUNC_SIGN: 27,
FUNC_SIN: 28,
FUNC_SINH: 29,
FUNC_SQRT: 30,
FUNC_TAN: 31,
FUNC_TANH: 32,
FUNC_TRUNC: 33,
};
enum.VisualShaderNodeVectorFunc::Function  get_function();
enum.VisualShaderNodeVectorFunc::Function  get_function();
void  set_function(int func);
};