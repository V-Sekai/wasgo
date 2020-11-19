/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTMATHCONSTANT_H
#define VISUALSCRIPTMATHCONSTANT_H

#include <stdint.h>

#include "VisualScriptNode.h"
class VisualScriptMathConstant : public VisualScriptNode{
public: VisualScriptMathConstant();
enum MathConstant{
MATH_CONSTANT_ONE: 0,
MATH_CONSTANT_PI: 1,
MATH_CONSTANT_HALF_PI: 2,
MATH_CONSTANT_TAU: 3,
MATH_CONSTANT_E: 4,
MATH_CONSTANT_SQRT2: 5,
MATH_CONSTANT_INF: 6,
MATH_CONSTANT_NAN: 7,
};
enum.VisualScriptMathConstant::MathConstant  get_math_constant();
enum.VisualScriptMathConstant::MathConstant  get_math_constant();
void  set_math_constant(int which);
};
#endif