/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEVECTORDERIVATIVEFUNC_H
#define VISUALSHADERNODEVECTORDERIVATIVEFUNC_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeVectorDerivativeFunc : public VisualShaderNode{
public: VisualShaderNodeVectorDerivativeFunc();
enum Function{
FUNC_SUM,
FUNC_X,
FUNC_Y
};
VisualShaderNodeVectorDerivativeFunc::Function get_function();
void set_function(VisualShaderNodeVectorDerivativeFunc::Function p_func);
};
#endif