/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDERIVATIVEFUNC_H
#define VISUALSHADERNODEVECTORDERIVATIVEFUNC_H

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeVectorDerivativeFunc : public VisualShaderNode{
public: VisualShaderNodeVectorDerivativeFunc();
enum Function{
FUNC_SUM: 0,
FUNC_X: 1,
};
enum.VisualShaderNodeVectorDerivativeFunc::Function  get_function();
enum.VisualShaderNodeVectorDerivativeFunc::Function  get_function();
void  set_function(int func);
};
#endif