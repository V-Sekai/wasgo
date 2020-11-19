/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODESCALARDERIVATIVEFUNC_H
#define VISUALSHADERNODESCALARDERIVATIVEFUNC_H

#include <stdint.h>

#include "VisualShaderNode.h"
class VisualShaderNodeScalarDerivativeFunc : public VisualShaderNode{
public: VisualShaderNodeScalarDerivativeFunc();
enum Function{
FUNC_SUM: 0,
FUNC_X: 1,
};
enum.VisualShaderNodeScalarDerivativeFunc::Function  get_function();
enum.VisualShaderNodeScalarDerivativeFunc::Function  get_function();
void  set_function(int func);
};
#endif