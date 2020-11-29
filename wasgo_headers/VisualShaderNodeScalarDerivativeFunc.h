/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARDERIVATIVEFUNC_H
#define VISUALSHADERNODESCALARDERIVATIVEFUNC_H

#include "stdint.h"

#include "VisualShaderNode.h"
class VisualShaderNodeScalarDerivativeFunc : public VisualShaderNode{
public: VisualShaderNodeScalarDerivativeFunc();
enum Function{
FUNC_SUM,
FUNC_X,
FUNC_Y
};
VisualShaderNodeScalarDerivativeFunc::Function get_function();
void set_function(VisualShaderNodeScalarDerivativeFunc::Function p_func);
};
#endif